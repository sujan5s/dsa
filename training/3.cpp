#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void regisTer(string name,int password);
void login();
void admin();
void logout();

int main(){
    int n;
    int flag=1;
    while(flag==1){
        cout<<"menu :"<<endl;
        cout<<"1 = register"<<endl;
        cout<<"2 = login"<<endl;
        cout<<"3 = admin"<<endl;
        cout<<"4 = logout"<<endl;
        cout<<"5 = exit"<<endl;
        cout<<"Enter choice"<<endl;
        cin>>n;
    switch(n){
        case 1:
            regisTer();
            break;
        case 2:
            login();
            break;
        case 3:
            admin();
            break;
        case 4:
            logout();
            break;
        case 5:
            exit(0);
        default:
            cout<<"wrong option"<<endl;
    }
}
}
void regisTer(string name,int password){
    string name;
    int password;
    cout<<"Enter the name"<<endl;
    cin>>name;
    cout<<"Enter password"<<endl;
    cin>>password;
    cout<<" Register succefull"<<endl;
    return (name,password);
}   
void login(){
    string sname;
    int spassword;
    cout<<"Enter the name"<<endl;
    cin>>sname;
    cout<<"Enter password"<<endl;
    cin>>spassword;
    regisTer(name,password);
    if(sname == name && spassword == password){
        cout<<"login sucessful"<<endl;
    }

}
void admin(){
    cout<<" admin Login succefull"<<endl;
}
void logout(){
    cout<<"Logout succefull"<<endl;
}