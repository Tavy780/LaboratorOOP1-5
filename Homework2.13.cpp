#include<iostream>
#include<cstring>
using namespace std;
struct Person{
       int age;
       char name[101];
}people[101];
int main(){
    people[0].age=114;
    strcpy_s(people[0].name,"Leo Milo Charlie");
    people[1].age=19;
    strcpy_s(people[1].name,"Loki Tiger Jack Sparrow Jasper");
    people[2].age=54;
    strcpy_s(people[2].name,"Albert Einstein Elvis Presley");
    people[3].age=159;
    strcpy_s(people[3].name,"Oscar George Washington");
    people[4].age=69;
    strcpy_s(people[4].name,"Leonidas Spartacus Milo Charlie George Buddy Toby");
    people[5].age=88;
    strcpy_s(people[5].name,"Thomas Cruise Mapother IV Meow");
    people[6].age=91;
    strcpy_s(people[6].name,"Oliver Leo Milo Charlie Simba Max Jack Loki Tiger Jasper Ollie Oscar George");
    people[7].age=49;
    strcpy_s(people[7].name,"Winston Churchill Donald Trump Bill Gates Paul McCartney Queen Victoria Pope Francis");
    for(int i=0;i<7;i++)
        for(int j=i+1;j<=7;j++)
        if(people[i].age<people[j].age)
            swap(people[i],people[j]);
    for(int i=0;i<7;i++)
        cout<<people[i].age<<"-"<<people[i].name<<"\n";
    return 0;
}
