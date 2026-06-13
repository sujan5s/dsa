#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Graph {
private:
	int vertices;
	bool directed;
	vector<vector<int>> adj;

public:
	Graph(int v, bool isDirected = false) : vertices(v), directed(isDirected), adj(v) {}

	void addEdge(int u, int v) {
		if (u < 0 || v < 0 || u >= vertices || v >= vertices) return;
		adj[u].push_back(v);
		if (!directed) adj[v].push_back(u);
	}

	void printGraph() const {
		for (int i = 0; i < vertices; i++) {
			cout << i << " -> ";
			for (int nbr : adj[i]) cout << nbr << " ";
			cout << '\n';
		}
	}

	vector<int> bfs(int start) const {
		vector<int> order;
		if (start < 0 || start >= vertices) return order;

		vector<bool> visited(vertices, false);
		queue<int> q;
		visited[start] = true;
		q.push(start);

		while (!q.empty()) {
			int node = q.front();
			q.pop();
			order.push_back(node);

			for (int nbr : adj[node]) {
				if (!visited[nbr]) {
					visited[nbr] = true;
					q.push(nbr);
				}
			}
		}
		return order;
	}

	vector<int> dfs(int start) const {
		vector<int> order;
		if (start < 0 || start >= vertices) return order;

		vector<bool> visited(vertices, false);
		stack<int> st;
		st.push(start);

		while (!st.empty()) {
			int node = st.top();
			st.pop();

			if (visited[node]) continue;
			visited[node] = true;
			order.push_back(node);

			for (int i = (int)adj[node].size() - 1; i >= 0; --i) {
				int nbr = adj[node][i];
				if (!visited[nbr]) st.push(nbr);
			}
		}
		return order;
	}
};

int main() {
	Graph g(6, false);

	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 3);
	g.addEdge(2, 4);
	g.addEdge(3, 5);
	g.addEdge(4, 5);

	cout << "Adjacency List:\n";
	g.printGraph();

	vector<int> bfsOrder = g.bfs(0);
	cout << "\nBFS from 0: ";
	for (int node : bfsOrder) cout << node << " ";

	vector<int> dfsOrder = g.dfs(0);
	cout << "\nDFS from 0: ";
	for (int node : dfsOrder) cout << node << " ";
	cout << '\n';

	return 0;
}
