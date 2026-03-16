#include <iostream>
using namespace std;

main(){
    cout<<"Enter length of the fibonachi series: ";
    int len;
    cin>>len;
    int num1=0;
    int num2=1;
    int next;
    // cout<<num1<<" , "<<num2;
  for(int i=1; i<=len; i++){
    cout<<num1<<"  ";               //this is actually better than using the other two lines that I commented as it also handles the situation when user enters 1 or 2
    next=num1+num2;
    // cout<<" , "<<next;
    num1 = num2;
    num2 = next;
  }
}