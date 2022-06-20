// Find the ways in which n friends can remain single or can be paired up -------------

#include<iostream>
using namespace std;

int friendsPairing(int n){
    
    if(n == 0 || n == 1 || n==2){
        return n;
    }
    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
}
int main(){
    cout<<friendsPairing(4);
}

// output - 10 ( we have 10 ways to set the 4 friends with each other )
