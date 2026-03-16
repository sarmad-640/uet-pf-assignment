#include <iostream>
using namespace std;

main(){
   cout<<"Enter a number: ";
   int num;
   cin>>num;

int sum=0;
   for(int i=num; i>0; i/=10){      // iteration for every digit of the number
   sum+=(i%10);    // extracting the last digit of the current iterating number or i and adding it to sum
   }
   cout<<"Sum: "<<sum;
}
