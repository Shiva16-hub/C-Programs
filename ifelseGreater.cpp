#include <iostream>

using namespace std;

int main(){
   int a,b,c;
   cout<<"Enter first number"<<endl;
   cin>>a;
   cout<<"Enter second number"<<endl;
   cin>>b;
   cout<<"Enter third number"<<endl;
   cin>>c;
   if(a>b){
       if(a>c){
            cout<<a<<endl;
           cout<<"A is greater"<<endl;
       }
       else{
           cout<<c<<endl;
           cout<<"C is greater"<<endl;
       }
       if(b>c){
           cout<<b<<endl;
           cout<<"B is greater"<<endl;
       }
       else{
           cout<<c<<endl;
           cout<<"C is greater"<<endl;
   }
   }
    return 0;
}

