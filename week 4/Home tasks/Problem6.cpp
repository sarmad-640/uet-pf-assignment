#include <iostream>
using namespace std;

main(){

float s;
cin>>s;

if(s<=10){
    cout<<"slow";
}else{
if(s<=50){
    cout<<"average";
}else{
if(s<=150){
    cout<<"fast";
}else{
if(s<=1000){
    cout<<"ultra fast";
}else{
if(s>1000){
    cout<<"extremely fast";
}
}
}
}
}


}