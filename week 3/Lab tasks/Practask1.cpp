#include <iostream>
using namespace std;

main(){
    int s;
    cout<<"Enter sides of a polygon : ";
    cin>>s;    
    cout<<"Sum of all the measures of the angles of an n-sided polygon : "<< (s-2)*180;
}