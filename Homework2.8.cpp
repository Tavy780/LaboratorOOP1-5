#include<iostream>
using namespace std;
struct Student{
    int grades;
    char name[1001];
}a,b;
template <typename T> T f (T a,T b){
         return (a<b)? b : a;
}
int main(){
    cout<<f<int>(510,2040)<<"\n";
    cout<<f<double>(11.232423,6.5435)<<"\n";
    cout<<f<char>('f','A');
    return 0;
}
