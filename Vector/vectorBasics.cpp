#include<iostream>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i =0; i<v.size();i++){
        cout<<v[i]<<endl;
    }  // 1 2 3

// through iterator ----

    vector<int>:: iterator it;
    for(it=v.begin();it!=v.end();i++){
    cout<<*it<<endl;
}      // 1 2 3

// Auto keyword ---
    for(auto element:v){
        cout<<element<<endl;
    }    // 1 2 3
    
// pop function ----

    v.pop_back;   // 1 2 
    
// same element ----- 

vector<int>v2(3,50);    // 50 50 50

    
// swap(v1,v2)-----
    for(auto element:v1){
        cout<<element<<endl;
    }
    for(auto element:v2){
        cout<<element<<endl;     
        /* output - v1   v2
                    50   1
                    50   2
                    50*/
        
    }
