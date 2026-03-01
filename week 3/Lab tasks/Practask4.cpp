#include <iostream>
using namespace std;

main(){
    int p, c;
    float i;
    cout<<"Enter imposter (upto 3) : ";
    cin>>i;    
    cout<<"Enter playes (limit 10): ";
    cin>>p;
    c = 100 * (i/p);    
    cout<<"Chance : "<< c<<"%";
}