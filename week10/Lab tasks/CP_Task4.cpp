#include <iostream>
#include <cmath>
using namespace std;

float height(float dis, float angle){
    float height;
    height=dis*(tan(angle/57.2958));
    return height;
}

main(){
    float dis,angle;
    cout<<"Distance: ";
    cin>>dis;
    cout<<"angle of elevation: ";
    cin>>angle;
    cout<<"height: "<<height(dis,angle);
}

