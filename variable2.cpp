#include<iostream>
using namespace std;
main() {
int input,sum=0,remainder;

cout<<"enter 5 digit num:";
cin>>input;

remainder=input%10;
sum=sum+remainder;

input=input/10;
remainder=input%10;
sum=sum+remainder;

input=input/10;
remainder=input%10;
sum=sum+remainder;

input=input/10;
remainder=input%10;
sum=sum+remainder;

input=input/10;
remainder=input%10;
sum=sum+remainder;

cout<<"your sum is:"<<sum;




}