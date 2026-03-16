#include <iostream>
using namespace std;

main(){
cout<<"Enter number: ";
int num;
cin>>num;
cout<<"Enter digit: ";
int digi;
cin>>digi;

int count;
for(int i=num; i> 0; i/=10){             //itrates to every digit
if(i%10 == digi){                         //seperates the last digit and compares with the digit from the user
  count++;
}
}
cout<<"Frequency of "<<digi<<" in "<<num<<" is: "<<count;
}