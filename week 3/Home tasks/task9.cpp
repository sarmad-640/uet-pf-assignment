#include <iostream>
using namespace std;

main(){
int n, s, d1,d2,d3,d4;
cout<<"Enter 4 digit number: ";
cin>>n;

d1 = n%10;
d2 = (n/10) % 10;
d3 = (n/100) % 10;
d4 = (n/1000) % 10;

// cout<<d1<<endl;
// cout<<d2<<endl;
// cout<<d3<<endl;
// cout<<d4<<endl;

s = d1 + d2 + d3 + d4;
cout<<"sum = "<<s;

}