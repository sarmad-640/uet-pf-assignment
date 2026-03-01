#include <iostream>
using namespace std;

main(){
    int w, d, l, p;
    cout<<"Enter wins, draws, losses : ";
    cin>>w>>d>>l;
    p = w*3 + d*1 + l*0;
    cout<<"Total points : "<< p;
}