#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    int target;
    cin>>target;
    int i,j;
    
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            cin>>mat[i][j];
        }
    }
    
    int r=0; int c=m-1;
    bool found = false;
    while(r<n && c>=0){
        if(mat[r][c] == target){
            found = true;
        }
        if(mat[r][c] > target){
            c--;
        }
        else{
            r++;
        }
        
    }
    if(found){
        cout<<"element is found"<<endl;
    }
    else
    {
        cout<<"element is not found"<<endl;
    }
    return 0;
}








