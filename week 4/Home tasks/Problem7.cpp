#include <iostream>
using namespace std;

main(){

string shape;
cout<<"enter shape";
cin>>shape;

float s1,s2, area;

if(shape == "square"){
cout<<"enter length";
cin>>s1;
area = s1*s1;
}

if(shape == "rectangle"){
cout<<"enter length and width";
cin>>s1>>s2;
area = s1*s2;
}

if(shape == "circle"){
cout<<"enter radius";
cin>>s1;
area = 3.14*s1*s1;
}

if(shape == "triangle"){
cout<<"enter base and height";
cin>>s1>>s2;
area = 0.5*s1*s2;
}

cout<<"Area: "<<area;





}