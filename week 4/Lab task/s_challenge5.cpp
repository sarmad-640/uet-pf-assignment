#include <iostream>
using namespace std;

main(){
  
string n1, n2, n3;
int a1, a2,a3;
cout<<"Enter first brother name and age : ";
cin>>n1>>a1;
cout<<"Enter second brother name and age : ";
cin>>n2>>a2;
cout<<"Enter third brother name and age : ";
cin>>n3>>a3;

int youngest_age = a1;
string youngest_name = n1;

if (a2< youngest_age){
youngest_age = a2;
youngest_name = n2;
}

if (a3<youngest_age){
    youngest_age = a3;
    youngest_name = n3;
}

cout<<youngest_name<<" is youngest";
}