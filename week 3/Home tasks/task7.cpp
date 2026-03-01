#include <iostream>
using namespace std;

main(){
    string mn;
    int atp, ctp, ats, cts, ca;
    cout<<"Enter the movie name: ";
    cin>>mn;    
    cout<<"Enter the adult ticket price: $";
    cin>>atp;
    cout<<"Enter the child ticket price: $";
    cin>>ctp;   
    cout<<"Enter the number of adult ticket sold: ";
    cin>>ats;
    cout<<"Enter the number of child ticket sold: ";
    cin>>cts;
    cout<<"Enter the percentage of amount to be donated to charity: ";
    cin>>ca;
    cout<<"------------------------------------"<<endl;
    cout<<"Movie: "<<mn<<endl;
    float te = (atp*ats)+(ctp*cts);
    cout<<"Total Amount Generated from ticket sales: $"<<te;
    float ce = te*(ca/100.0);
    cout<<"Donation to charity: $"<<ce;
    cout<<"Remaining amount after donation: "<<te - ce;

}