#include <iostream>
using namespace std;

main(){
  cout<<"Enter first number: ";
  int num1;
  cin>>num1;
  cout<<"Enter second number: ";
  int num2;
  cin>>num2;

  int larger;
  // int i1, i2=0, hcf;
  int hcf = 0;
  if(num1>num2){larger=num1;}else{larger=num2;};
  for(int i=1; i<=larger;i++){                                //hcf is the highest common diviser k dono numbers ma konsa asa aik number ha jo dono ko divide krta ho  or lcm least common diviser k jisko multiply krne se dono k answer
    if(num1%i == 0 && num2%i == 0){
      hcf=i;
    }
    // if(i2>i1){hcf=i2;}else{hcf=i1;}                   useless bilawaja code ka logic brha rha hun
    // i2=i1;
  }
 cout<<"HCF of "<<num1<<" and "<<num2<<" is: "<<hcf;
  int lcm = (num1*num2) / hcf;
  cout<<"\nLCM of "<<num1<<" and "<<num2<<" is: "<<lcm;
}