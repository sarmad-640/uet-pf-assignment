#include <iostream>
using namespace std;

main(){
    int population, n;
    cout<<"Enter current world population : ";
    cin>>population;    
    cout<<"People born every month are : ";
    cin>>n;
    cout<<"Population in 3 decades : "<< 30*12*n + population;
}