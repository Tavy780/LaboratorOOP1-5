#include<iostream>
#include<cstring>
#include<ctime>
using namespace std;
void timeToString(){
  time_t ttime=time(0);
  tm *t=gmtime(&ttime);
  cout<<1900+t->tm_year<<"-"<<1+t->tm_mon<<"-"<<t->tm_mday<<" "<<3+t->tm_hour<<":"<<t->tm_min<<":"<<t->tm_sec<<"\n";
}
void timeToString(long long a){
     time_t ttime=a;
     if(a!=0){
      tm *t=gmtime(&ttime);
      cout<<1900+t->tm_year<<"-"<<1+t->tm_mon<<"-"<<t->tm_mday<<" "<<3+t->tm_hour<<":"<<t->tm_min<<":"<<t->tm_sec<<"\n";
     }else{
       time_t T=time(0);
       tm *tt=localtime(&T);
       cout<<1900+tt->tm_year<<"-"<<1+tt->tm_mon<<"-"<<tt->tm_mday<<" "<<tt->tm_hour<<":"<<tt->tm_min<<":"<<tt->tm_sec<<"\n";
      }
}
int main(){
    timeToString();
    timeToString(9942904944);
    timeToString(0);
    timeToString(99355344);
    timeToString(0);
    timeToString(1999494944);
    return 0;
}

