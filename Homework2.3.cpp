#include<iostream>
using namespace std;
struct Student{
       double grades;
       string name;
};
void Max(Student l,Student g){
     if(l.grades<g.grades)
        cout<<g.grades<<" "<<g.name;
     else
        cout<<l.grades<<" "<<l.name;
}
int main(){
    Student p,f;
    p.grades=15,f.grades=25;
    p.name="Joe Doe ",f.name="Shawn Flynn";
    Max(p,f);
    p.grades=45,f.grades=25;
    p.name="Johnson Doe ",f.name="McBeth Flynn";
    Max(p,f);
    return 0;
}
