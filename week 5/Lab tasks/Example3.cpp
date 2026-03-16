#include <iostream>
using namespace std;

main(){
    int num1 = 0;
    int num2 = 1;
    int num3;    //next number after adding num1 and num2
    int len;
    cout<<"Enter the length of fabonachi series: ";
    cin>>len;
    cout<<num1<<", "<<num2;
    for(int i=1; i<=len-2; i++){
        num3=num1+num2;
        cout<<", "<<num3;
        num1 = num2;
        num2 = num3;
    }
}