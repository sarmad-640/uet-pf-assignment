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
    cin>>ats;
    cout<<"Enter the percentage of amount to be donated to charity: ";
    cin>>ca;
    cout<<"------------------------------------"<<endl;
    cout<<"Movie: "<<mn<<endl;
    cout<<"Total Amount Generated from ticket sales: $"<<(atp*ats)+(ctp*cts);
    cout<<"Donation to charity: $"<<((atp*ats)+(ctp*cts))*(ca/100);
    cout<<"Remaining amount after donation: "<<((atp*ats)+(ctp*cts)) - (((atp*ats)+(ctp*cts))*(ca/100));

}