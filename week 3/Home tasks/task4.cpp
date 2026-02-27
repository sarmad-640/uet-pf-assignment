#include <iostream>
using namespace std;

main(){
    int p, c;
    float i;
    cout<<"Enter imposter : ";
    cin>>i;    
    cout<<"Enter playes: ";
    cin>>p;
    c = 100 * (i/p);    
    cout<<"Chance of being an imposter : "<< c<<"%";
}