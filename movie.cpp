#include<iostream>
using namespace std;
main() {
string name;
int aticket,cticket,nats,ncts,hag,haag,percentage,tag,remaining,tremaining;

cout<<"enter movie name:";
cin>>name;

cout<<"enter Adult Ticket price:";
cin>>aticket;

cout<<"enter Child Ticket price";
cin>>cticket;

cout<<"enter num of Adult tickets sold:";
cin>>nats;

cout<<"enter num of Child tickets sold:";
cin>>ncts;

cout<<"enter percentage to donate:";
cin>>percentage;

hag=aticket*nats;
haag=cticket*ncts;
tag=hag+haag;
cout<<"total amount generated:"<<tag<<endl;

remaining=(tag/100)*10;
cout<<"remainning amount is:"<<remaining<<endl;

tremaining=tag-remaining;
cout<<"total remaining amout after donation is:"<<tremaining<<endl;








}