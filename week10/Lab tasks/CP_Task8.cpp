#include <iostream>
using namespace std;

bool OddishOrEvenish(int num1);

main(){
    int num1;
    cout<<"Num1: ";
    cin>>num1;
if(OddishOrEvenish(num1)){
    cout<<"Evenish";
}else{
    cout<<"Oddish";

}
}

bool OddishOrEvenish(int num1){
    int add=0;
    for(int i=0;i<5;i++){
        add+=num1%10;
        num1=num1%10;
    }
    if(add%2==0){
        return true;   //means evenish
    }else{
        return false;  //means oddish

    }
}