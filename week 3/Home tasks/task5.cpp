#include <iostream>
using namespace std;

main(){
    string p;
    float l, d;
    cout<<"Enter the Name of the Person: ";
    cin>>p;    
    cout<<"Enter the target weight loss in kilograms: ";
    cin>>l;
    d = l*15;    
    cout<<p<<" will need "<< d<<" days to lose "<<l<<" kg of weight following the doctor's suggestions";
}