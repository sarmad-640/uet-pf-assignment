#include <iostream>
using namespace std;

main(){
  
int num1, num2;
char op;
cout<<"Enter num1 : ";
cin>>num1;
cout<<"Enter operator : ";
cin>>op;
cout<<"Enter num2 : ";
cin>>num2;

if(op == '+'){
    cout<<num1<<"-"<<num2<<"="<<num1-num2;
}
if(op == '-'){
    cout<<num1<<"+"<<num2<<"="<<num1+num2;   
}
if(op == '/'){
    cout<<num1<<"*"<<num2<<"="<<num1*num2;   
}
if(op == '*'){
    cout<<num1<<"/"<<num2<<"="<<num1/num2;   
}








}