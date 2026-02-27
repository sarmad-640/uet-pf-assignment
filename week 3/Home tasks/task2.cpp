#include <iostream>
using namespace std;

main(){
    int m, fps, f;
    cout<<"Enter minutes : ";
    cin>>m;    
    cout<<"Enter frames per second: ";
    cin>>fps;
    f = m*60*fps;    
    cout<<"Total Number Frames : "<< f;
}