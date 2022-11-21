#include<iostream>
using namespace std;
int a,c;
int sum,dif;
int *res;
char b;
void f(int **rez){
     char *p=&b;
     if(*p=='+')
        *rez=&sum;
     else
        *rez=&dif;
}
int main(){
    cin>>a>>b>>c;
    sum=a+c;
    dif=a-c;
    f(&res);
    cout<<*res;
    return 0;
}
