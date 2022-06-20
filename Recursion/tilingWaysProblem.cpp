// Given a "2*n" board and tile of size "2*1", count the numbers of ways to tile the given board using these tiles -----------------

#include<iostream>
using namespace std;

int tilinWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilinWays(n-1) + tilinWays(n-2);
    
}
int main(){
    cout<<tilinWays(4)<<endl;
}

// output - 3;
