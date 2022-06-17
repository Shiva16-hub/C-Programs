#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    bool flag = false;
    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }
    if(flag){
        cout<<"element is found"<<endl;
    }
    else{
    cout<<"element is not found"<<endl;
}
return 0;
}
