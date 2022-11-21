#include<iostream>
using namespace std;

int f(int x){
    return sizeof x;
}
int f(double x){
    return sizeof x;
}
int f(char *x){
    return sizeof x;
}
int main(){
    cout<<f(4)<<" ";
    cout<<f(4.787)<<" ";
    cout<<f('d');
}
