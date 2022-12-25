#include<iostream>
using namespace std;
main() {
float marks1=0,marks2=0,marks3=0,marks4=0,marks5=0,sum=0;
float percentage;
string name;
cout<<"Enter your name:";
cin>>name;

cout<<"Enter your sub 1 marks:";
cin>>marks1;

cout<<"Enter your sub 2 marks:";
cin>>marks2;

cout<<"Enter your sub 3 marks:";
cin>>marks3;

cout<<"Enter your sub 4 marks:";
cin>>marks3;

cout<<"Enter your sub 5 marks:";
cin>>marks5;

sum=marks1+marks2+marks3+marks4+marks5;
cout<<"your sum is:"<<sum;


percentage=(sum/500)*100;
cout<<"Your percentage is:"<<percentage;





}