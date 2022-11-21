#include<iostream>
using namespace std;

int a,b;
void f(int &m,int &n){
     int *p,*s;
     int f;
     p=&m,s=&n,f=*p,*p=*s,*s=f;
}
int main(){
    a=2,b=100;
    cout<<a<<" "<<b<<endl;
    f(a,b);
    cout<<a<<" "<<b<<endl;
    f(a,b);
    cout<<a<<" "<<b;
    return 0;
}
