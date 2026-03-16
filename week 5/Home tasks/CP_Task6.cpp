#include <iostream>
using namespace std;

main(){
   cout<<"Enter first number: ";
   int num1;
   cin>>num1;
   cout<<"Enter second number: ";
   int num2;
   cin>>num2;

   int largest;
   if(num1>num2){largest=num1;}else{largest=num2;}

int gcd, lcm;

   for(int i=0; i<largest; i++){       // dont add i>=0 as when 0/10=0 the loop will run infinitely and wont display anything 
      if(num1%i == 0 && num2%i == 0){
         gcd=i;
      }
   }
   lcm=(num1*num2) / gcd;
   cout<<"GCD: "<<gcd;
   cout<<"LCM: "<<lcm;
}
