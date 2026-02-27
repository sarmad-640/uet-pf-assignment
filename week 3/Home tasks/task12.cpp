#include <iostream>
using namespace std;

main(){
    int n, w, h, walls;
    cout<<"Number of square meters you can paint : ";
    cin>>n;    
    cout<<"Width of single wall (in meters): ";
    cin>>w;
    cout<<"Height of single wall (in meters): ";
    cin>>h;
    walls = n/ (w*h);    
    cout<<"Number of walls you can paint: "<< walls;
}