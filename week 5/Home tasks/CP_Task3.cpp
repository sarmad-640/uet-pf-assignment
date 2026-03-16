#include <iostream>
using namespace std;

main(){
   cout<<"Enter a number: ";
   int num;
   cin>>num;

int count;
   for(int i=num; i>0; i/=10){       // dont add i>=0 as when 0/10=0 the loop will run infinitely and wont display anything 
    count++;
   }
   cout<<"Total number of digits: "<<count;
}
