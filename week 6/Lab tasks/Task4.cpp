#include <iostream>
using namespace std;

main(){

int numbers[5];

for(int i=0;i<5;i++){
cout<<"Enter "<<i+1<<" number: ";
cin>>numbers[i];
}

cout<<"The 1st element at location numbers[0] is: "<<numbers[0]<<endl;
cout<<"The 5st element at location numbers[4] is: "<<numbers[4]<<endl;

}