#include <iostream>
using namespace std;

main(){
    int num, count;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=num; i>0; i/=10){
      count+=1;
    }
    cout<<"Total digits: "<<count;
}