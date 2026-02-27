#include <iostream>
using namespace std;

main(){
    int iv, acc, t, fv;
    cout<<"Enter Initial Velocity (m/s) : ";
    cin>>iv;    
    cout<<"Enter Acceleration (m^2/s): ";
    cin>>acc;
    cout<<"Enter Time (s): ";
    cin>>t;
    fv = (acc*t) + iv;    
    cout<<"Final Velocity : "<< fv;
}