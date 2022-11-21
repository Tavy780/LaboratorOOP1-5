#include<iostream>
#include "C:\Users\OCTA\Desktop\Laborator2\Exercise12\Exercise12\Exercise12.h"
using namespace std;

void function1(Car a,Cat b,Person c){
     int minimum=a.age;
     if(minimum>b.age)
        minimum=b.age;
     if(minimum>c.age)
        minimum=c.age;
     if(minimum==a.age)
        std::cout<<a.age<<" "<<a.licenseNumber<<" "<<a.producer<<"\n";
     else
      if(minimum==b.age)
         std::cout<<b.age<<" "<<b.name<<" "<<b.master<<"\n";
      else
       if(minimum==c.age)
          std::cout<<c.age<<" "<<c.name<<"\n";
}
void function2(Car a,Cat b,Person c){
     try{
       if(a.age!=b.age&&a.age!=c.age&&b.age!=c.age)
            throw 0;
       std::cout<<"true\n";
     }catch(int e){
            std::cout<<"false\n";
      }
}
