#include<iostream>
#include<cstring>
#include "C:\Users\OCTA\Desktop\Laborator2\Exercise12\Exercise12\Exercise12.h"
using namespace std;

struct Car p1,p2;
struct Cat f1,f2;
struct Person g1,g2;
int main(){
    p1.age=10,p2.age=25;
    strcpy(p1.producer,"Lamborghini");
    strcpy(p2.producer,"Ferrari");
    strcpy(p1.licenseNumber,"899 772 CVB");
    strcpy(p2.licenseNumber,"012 123 WBC");
    f1.age=2,f2.age=1;
    strcpy(f1.master,"Sebastian");
    strcpy(f2.master,"Oliver");
    strcpy(f1.name,"Simon Bill Gates");
    strcpy(f2.name,"Felix Christopher Columbus");
    g1.age=50,g2.age=30;
    strcpy(g1.name,"Simon Bill Gates Martin Luther King");
    strcpy(g2.name,"Felix Christopher Columbus Donald Trump Charles Darwin");
    function1(p1,f1,g1);
    function1(p2, f1, g2);
    function1(p2, f2, g1);
    function1(p1, f1, g2);
    function2(p2,f2,g2);
    return 0;
}
