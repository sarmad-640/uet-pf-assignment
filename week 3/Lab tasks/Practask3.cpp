#include <iostream>
using namespace std;

main(){
    int m, fps, f;
    cout<<"Enter minutes : ";
    cin>>m;    
    cout<<"Enter fps: ";
    cin>>fps;
    f = m*60*fps;    
    cout<<"Total Frames : "<< f;
}