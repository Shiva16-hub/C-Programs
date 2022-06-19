#include<iostream>
using namespace std;

int firstOccu(int arr[], int n, int i, int key){

if(i==n){
    return -1;
}
if(arr[i]==key){
    return i;
    
}
return firstOccu(arr,n,i+1,key);
}

int lastOccu(int arr[], int n, int i, int key){
    
    if(i==n){
        return -1;
    }
    
    int restArray = lastOccu(arr,n,i+1,key);
    if(restArray!= -1){
    return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main()
{
    int arr[] = {4,2,3,5,4,2,6};
    cout<<firstOccu(arr,7,0,2)<<endl;
    cout<<lastOccu(arr,7,0,2)<<endl;
    return 0;
}
