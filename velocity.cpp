#include<iostream>
using namespace std;
main() {
int initialvelocity,acceleration,time;
float finalvelocity;

cout<<"Enter initial velocity:";
cin>>initialvelocity;

cout<<"Enter acceleration:";
cin>>acceleration;

cout<<"Enter time:";
cin>>time;

finalvelocity=initialvelocity+(acceleration*time);
cout<<"final velocity is:"<<finalvelocity;


}