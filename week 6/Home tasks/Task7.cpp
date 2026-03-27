#include <iostream>
#include <iomanip>
using namespace std;


main(){

cout<<"Enter the number of products: ";
int ele;
cin>>ele;


string productNames[ele];
float prices[ele];
int quantity[ele];


// string arr[ele];
for(int i=0;i<ele;i++){
    cout<<endl;
    cout<<"Enter the name of Product "<<i+1<<": ";
    cin>>productNames[i];
    cout<<"Enter price of "<<productNames[i]<<": $";
    cin>>prices[i];
    cout<<"Enter quantity of "<<productNames[i]<<": ";
    cin>>quantity[i];

}

cout<<"\nProduct Inventory Report: ";
cout<<"\n---------------------------\n";
cout<<fixed<<setprecision(2)<<endl;
for(int i=0;i<ele;i++){
    cout<<productNames[i]<<": $"<<prices[i]<<", "<<quantity[i]<<" in stock, Total value: $"<<prices[i]*quantity[i]<<endl;
}

}

