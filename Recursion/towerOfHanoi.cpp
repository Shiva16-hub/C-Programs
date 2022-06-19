#include<iostream>
using namespace std;

void towerofHanoi(int n, char src, char hel, char dest)
{
    
    if(n==0){
        return;
    }
    towerofHanoi(n-1,src,hel,dest);
    cout<<"Move From"<<" "<<src<<" "<<"To"<<" "<<dest<<endl;
    towerofHanoi(n-1,hel,dest,src);
}
int main()
{
    towerofHanoi(3,'A','C','B');
    return 0;
}
