#include <iostream>
using namespace std;

main(){

int rr, wr, t;
cout<<"Red Rose: ";
cin>>rr;
cout<<"White Rose: ";
cin>>wr;
cout<<"Tulips: ";
cin>>t;

int rr_p = 2*rr;
int wr_p = 4.10*rr;
int t_p = 2.50*rr;

int t_price = rr_p + wr_p + t_p;

int dis;
if(t_price > 200){
dis = t_price*0.20;
}
cout<<"Original Price"<< t_price;
cout<<"Price after Discount"<< t_price-dis;









}