#include<iostream>
using namespace std;

float f(float n,float m){
    if((n==0&&m!=0)||(n==0&&m==0))
        throw -1;
    return -1*(m/n);
}
int main(){
    float a=31,b=21;
    float x;
    try{
      x=f(a,b);
      cout<<x;
    }
    catch(int e){
        cerr<<"invalid";
    }
    return 0;
}
