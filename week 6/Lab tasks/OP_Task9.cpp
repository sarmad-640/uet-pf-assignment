#include <iostream>
using namespace std;

main(){

int money[4];
cout<<"Enter quarters: ";
cin>>money[0];
cout<<"Enter dimes: ";
cin>>money[1];
cout<<"Enter nickels: ";
cin>>money[2];
cout<<"Enter pennies: ";
cin>>money[3];

cout<<"Enter the total amount due: $";
float due;
cin>>due;
int due_in_cents = due*100;             //1$=100cents

int total = money[0]*25 + money[1]*10 + money[2]*5 + money[3]*1;         //money in cents to avoid decimal other wise use 0.25 0.10 etc and use float

if(total >= due_in_cents){
    cout<<"Can you pay the amount? Yes";
    
}else{
    cout<<"Can you pay the amount? No";
    

}

}




