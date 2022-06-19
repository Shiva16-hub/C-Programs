
// WAP to print numbers till n in decreasing order and incresing order----------

#include<iostream>
using namespace std;

void dec(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;          //decreasing order
    dec(n-1);
    
}

void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<endl;          //incresing order
}

int main(){
    int n;
     cin>>n;
     
     dec(n);
     inc(n); 
     return 0;
}


