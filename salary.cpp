#include<iostream>
using namespace std;
main() {
int wdays,earning,dinr,msalary,asalary;
float tax,naincome,pdincome;

cout<<"Enter your working days per month:";
cin>>wdays;

cout<<"Enter your salary per day in dolar:";
cin>>earning;

cout<<"Enter the amount of dolar in rupee:";
cin>>dinr;

msalary=wdays*earning*dinr;
cout<<"your monthly salary is:"<<msalary<<endl;

asalary=msalary*12+(msalary*2.5);
cout<<"your anual salary is:"<<asalary<<endl;

tax=(25*asalary)/100;
cout<<"your tax per year is:"<<tax<<endl;

naincome=asalary-tax;
cout<<"your net annual income is:"<<naincome<<endl;

pdincome=naincome/365;
cout<<"your per day income for year is:"<<pdincome<<endl;

}