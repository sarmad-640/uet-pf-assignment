#include <iostream>
using namespace std;

main(){
cout<<"Enter a positive number: ";
int num;
cin >> num;

while(num <= 0){
    cout<<"Error: "<<num<<" is a not a positive number."<<endl;
cout<<"Enter a positive number: ";
cin >> num;

}

cout<<"Program Ends";
}