#include <iostream>
using namespace std;

main(){
    int n, w, h, walls;
    cout<<"Enter paint area : ";
    cin>>n;    
    cout<<"Enter width: ";
    cin>>w;
    cout<<"Enter height: ";
    cin>>h;
    walls = n/ (w*h);    
    cout<<"Number of walls : "<< walls;
}