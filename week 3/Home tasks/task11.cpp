#include <iostream>
using namespace std;

main(){
    int a, m, y;
    cout<<"Enter the person's age: ";
    cin>>a;    
    cout<<"Enter the number of times they've moved: ";
    cin>>m;
    y = a / (m+1);    
    cout<<"Average number of years lived in same house : "<< y;

}