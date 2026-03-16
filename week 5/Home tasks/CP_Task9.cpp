#include <iostream>
#include <iomanip>

using namespace std;

main()
{

int inheritence, year;
cin>>inheritence;
cin>>year;



int age=18,c_year=1800;

float spending=0,remaining;

while(c_year<=year){

if(c_year%2==0){
    spending+= 12000;
}else{
    spending+= 12000 + 50*age;
}

age++;
c_year++;
}
remaining = inheritence-spending;

cout << fixed << setprecision(2);
if(remaining>=0){
    cout<<"Yes! He will live a carefree life and will have "<<remaining<<" dollars left.";
}else{
    remaining*=-1;
    cout<<"He will need "<<remaining<< " dollars to survive.";
}

}