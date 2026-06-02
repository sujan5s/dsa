#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"General animal sound"<<endl;
    }
};
class dog:public Animal{
    public:
    void sound(){
        cout<<"Dog sound"<<endl;
    }
};

int main(){
    Animal* a = new dog();
    a->sound();
}