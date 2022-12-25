#include<iostream>
using namespace std;
main() {
int vkg,fkg;
float vp,fp,totalincoin,totalinrp;

cout<<"Enter amount of veg in kg:";
cin>>vkg;

cout<<"Enter amount of fruit in kg:";
cin>>fkg;

cout<<"Enter price of veg in coin:";
cin>>vp;

cout<<"Enter price of fruit in coin:";
cin>>fp;

totalincoin=(vkg*vp)+(fkg*fp);
cout<<"total price in coin:"<<totalincoin<<endl;

totalinrp=totalincoin/1.94;
cout<<"total price in rupee:"<<totalinrp;






}