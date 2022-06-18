#include<iostream>
using namespace std;
int main(){
    string str = "shiva";
    
    // convert to upper case
    for(int i=0; i<str.size(); i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
        cout<<str<<endl;
    
        //convert to lower case
        for(int i=0; i<str.size(); i++){
            if(str[i] >= 'A' && str[i] <= 'z'){
                str[i] += 32;
            }
        
            cout<<endl;
        }
    }
    return 0;
}
