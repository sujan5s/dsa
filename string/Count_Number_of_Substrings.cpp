#include <bits/stdc++.h>
using namespace std;

// Function to count substrings with at most k distinct characters
int atMostKDistinct(string s, int k) {
    // Left pointer and result
    int left = 0, res = 0;
    
    map<char,int> freq;

    for(int rigth=0;rigth<s.size();rigth++){
        freq[s[rigth]]++;
    
    while(freq.size()>k){
        freq[s[left]]--;
        if(freq[s[left]]==0) freq.erase(s[left]);
        left++;
    }
    res += (rigth - left + 1);
}
return res;
}

// Function to count substrings with exactly k distinct characters
int countSubstrings(string s, int k) {
    // Exactly k = atMost(k) - atMost(k-1)
    return atMostKDistinct(s, k) - atMostKDistinct(s, k - 1);
}

int main() {
    // Sample test
    string s = "pqpqs";
    int k = 2;

    // Output the result
    cout << "Count: " << countSubstrings(s, k) << endl; // Output: 7
    return 0;
}