#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;
    bool gender;
    
    void printInfo(){
        cout<<"name =";
        cout<<name<<endl;
        cout<<"age =";
        cout<<age<<endl;
        cout<<"gender =";
        cout<<gender<<endl;
    }
};
int main(){
    Student arr[3];
    for(int i=0; i<3; i++){
    cout<<"name=";
    cin>>arr[i].name;
    cout<<"Age=";
    cin>>arr[i].age;
    cout<<"Gender=";
    cin>>arr[i].gender;
}
    for(int i=0; i<3; i++){
        arr[i].printInfo();
    }
    return 0;
}
