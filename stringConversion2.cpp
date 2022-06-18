#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "fuck you baby";
    cout<<"------------To Upper Case-------------"<<endl;
    transform(s.begin(), s.end(), s.begin(),::toupper);
    cout<<s<<endl;
    string g = "YUPP";
    cout<<"------------To Lower Case-------------"<<endl;
    transform(g.begin(), g.end(), g.begin(),::tolower);
    cout<<g<<endl;
}
