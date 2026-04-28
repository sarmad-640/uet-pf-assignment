#include <iostream>
using namespace std;

int func(int num1);

main(){
    int num1;
    cout<<"Num1: ";
    cin>>num1;
    int result = func(num1);
    cout<<result;
}

int func(int num1){
    return num1*5;
}