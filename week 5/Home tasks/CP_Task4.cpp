#include <iostream>
using namespace std;

main(){
   cout<<"Enter a number: ";
   int num;
   cin>>num;
   cout<<"Enter the digit: ";
   int digi;
   cin>>digi;

int count=0;
   for(int i=num; i>0; i/=10){       // dont add i>=0 as when 0/10=0 the loop will run infinitely and wont display anything 
   if(i%10==digi){

      count++;
   }
   }
   cout<<"Frequency: "<<count;
}
