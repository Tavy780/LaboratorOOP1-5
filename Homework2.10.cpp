#include<iostream>
#include<cstring>
using namespace std;
struct Student{
       int grade;
       string name;
};
template <typename T> void f(T &a,T &b){
         T c;
         c=a;
         a=b;
         b=c;
}
int main(){
    int ff=10,g=20;
    cout<<ff<<" "<<g<<"\n";
    f<int>(ff,g);
    cout<<ff<<" "<<g<<"\n";
    double l=8.93182319,v=8.9283492738;
    cout<<l<<" "<<v<<"\n";
    f<double>(l,v);
    cout<<l<<" "<<v<<"\n";
    string m="abcdef",n="ghijklmn";
    cout<<m<<" "<<n<<"\n";
    f<string>(m,n);
    cout<<m<<" "<<n<<"\n";
    Student ei,bi;
    ei.grade=20,bi.grade=50;
    ei.name="Sup",bi.name="Bro";
    cout<<ei.grade<<" "<<ei.name<<"\t"<<bi.grade<<" "<<bi.name<<"\n";
    f<Student>(ei,bi);
    cout<<ei.grade<<" "<<ei.name<<"\t"<<bi.grade<<" "<<bi.name<<"\n";
    return 0;
}
