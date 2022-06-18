#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    char arr[n+1];
    cin>>arr;
    
    int i=0;
    bool check = 1;
    while(arr[i] != arr[n-1-i]){
        check = 0;
        break;
    }
    
    if(check == true){
        cout<<"-----------This number is pallindrome--------";
    }
    
    else{
        cout<<"-----------This is not pallindrome--------";
    }
    return 0;
}
