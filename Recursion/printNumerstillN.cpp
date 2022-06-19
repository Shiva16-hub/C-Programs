
// WAP to print numbers till n int decreasing order----------

#include<iostream>
using namespace std;

void dec(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    dec(n-1);
    
}

int main(){
    int n;
     cin>>n;
     
     dec(n);
     return 0;
}


// WAP to print numbers till n int Increasing order----------

#include<iostream>
using namespace std;

void dec(int n){
    if(n==0){
        return ;
    }
    
    dec(n-1);
    cout<<n<<endl;    
}

int main(){
    int n;
     cin>>n;
     
     dec(n);
     return 0;
}
