#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    
    int preFact = factorial(n-1);
    return n*preFact;
}
 
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    
}
