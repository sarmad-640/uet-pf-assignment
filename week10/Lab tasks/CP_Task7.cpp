#include <iostream>
using namespace std;

bool IsSymmetrical(int num1);

main(){
    int num1;
    cout<<"Num1 3 digit only: ";
    cin>>num1;
if(IsSymmetrical(num1)){
    cout<<"The number is symmetrical.";
}else{
    cout<<"The number is not symmetrical.";

}
}

bool IsSymmetrical(int num1){
    if(num1/100 == num1%10){
        return true;
    }else{
        return false;
    }
}