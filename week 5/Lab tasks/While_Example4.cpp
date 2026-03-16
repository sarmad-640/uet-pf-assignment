#include <iostream>
using namespace std;

main(){
int sum = 0;

int i=1;
while(i <= 5){
    sum+=i;
i++;
}
cout<<"sum using while loop: "<<sum;


sum=0;
for(int i=1;i<=5; i++){
       sum+=i;
}
cout<<"\nsum using for loop: "<<sum;
}