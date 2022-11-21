#include<iostream>
#include<cstring>
using namespace std;
template <typename T> T Sum (T a,T b){
        return a+b;
}
int main(){
    cout<<Sum<int>(10,20)<<"\n";
    cout<<Sum<long>(1042340,2543450)<<"\n";
    cout<<Sum<float>(10.4324,20.12318)<<"\n";
    cout<<Sum<double>(10.2314,204235453.3123)<<"\n";
    cout<<Sum<char>('a','.')<<"\n";
    cout<<Sum<bool>(true,false)<<"\n";
    cout<<Sum<string>("abcd","efgh");
    return 0;
}
