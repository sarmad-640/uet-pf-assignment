#include <iostream>
using namespace std;

main(){
    float v, c, p;
    cout<<"Enter voltage (in volts) and current (in amperes) : ";
    cin>>v>>c;
    p = v*c;
    cout<<"hours to seconds is : "<< p;
}