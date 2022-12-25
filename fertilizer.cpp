#include <iostream>
using namespace std;
main() {
int size,costb,area,pcost,parea;
cout<<"Enter size of bag in pound:";
cin>>size;

cout<<"Enter cost of bag:";
cin>>costb;

cout<<"Enter area covered by bag in square feet:";
cin>>area;

pcost=costb/size;
cout<<"Cost of fertilizer per pound is:"<<pcost<<endl;

parea=size*area;
cout<<"Cost of fertilizer per square feet is:"<<parea;


}