#include<iostream>
#include<cmath>
using namespace std;

struct nrComplex{
      double imaginaryPart;
      double realPart;
}number;
double f(nrComplex g){
       return sqrt(g.realPart*g.realPart+g.imaginaryPart*g.imaginaryPart);
}
float f(double a, double b){
      return sqrt(a*a+b*b);
}
int main(){
   number.realPart=21.5;
   number.imaginaryPart=10;
   cout<<number.realPart<<" "<<number.imaginaryPart<<"\n";
   cout<<f(number)<<"\n";
   cout<<f(number.realPart,number.imaginaryPart);
   return 0;
}
