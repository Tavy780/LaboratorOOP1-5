#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void f(float n, bool isRoundedTo100) {
       if(isRoundedTo100)
          cout<<fixed<<setprecision(2)<<n<<endl;
       else
          cout<<fixed<<setprecision(0)<<n<<endl;
}
float k=4.9046;
int main(){
    f(k,1);
    f(k,0);
    return 0;
}
