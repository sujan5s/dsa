#include<iostream>
using namespace std;

/*initial star pattern*/
/*
int main(){
    int n,m;
    cout<<"Enter the no. of lines"<<endl;
    cin>>n;
    cout<<"Enter the no.of stars"<<endl;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

/*Square pattern*/
/*
int main(){
    int n;
    cout<<"Enter the no. of lines"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*Alphabet pattern*/
/*
int main(){
    int n;
    cout<<"Enter the no. of lines"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<n;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}
*/

/*Number pattern*/
/*
int main(){
    int n,m;
    cout<<"Enter the no. of lines"<<endl;
    cin>>n;
    m=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
           cout<<m;
           m++;
        }
        cout<<endl;
    }
}
*/

/*triangle pattern*/
/*
int main(){
    int n;
    cout<<"Enter the no. of lines"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int m=i+1;
        for(int j=m;j<=n;j++){
            
            cout<<"*";
        }
        
        cout<<endl;
    }
}
*/

/* striver pattern 1*/

void patern1(int n){
    for(int i=1;i<=n;i++){
        /*space*/

        for(int j=0;j<i;j++){
            cout<<" ";
        }
        /*star*/


        for(int j=0;j<(2*n-(2*i+1));j++){
            cout<<"*";
        }
        /*space*/

        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void patern2(int n){
    for(int i=0;i<n;i++){
        /*space*/

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        /*star*/


        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        /*space*/

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void patern3(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            start=1;
        }else{
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}

void patern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int j=1;j<=(2*n-(2*i+2));j++){
            cout<<" ";
        }

        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no. of lines"<<endl;
    cin>>n;
    patern4(n);
    return 0;
}