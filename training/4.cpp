#include<bits/stdc++.h>
using namespace std;

class rectangle{
    public:
        int lenght;
        int breadth;

        void intvalue(int l,int b){
            lenght =l;
            breadth =b;
        }
        void calculate(){
            int area = lenght * breadth;
            cout<< area;
        }
};
int main(){
    rectangle rect;
    rect.intvalue(2,5);
    rect.calculate();
}