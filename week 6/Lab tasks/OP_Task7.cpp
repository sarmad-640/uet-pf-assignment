#include <iostream>
using namespace std;

main(){

cout<<"Enter the number of resistors in the series circuit: ";
int resistance;
cin>>resistance;


cout<<"Enter the resistance value (in ohms) of the "<<resistance<<" resistors, one per line: "<<endl;
int t_resistance=0;
int arr[resistance];
for(int i=0;i<resistance;i++){
    cin>>arr[i];
    t_resistance+=arr[i];
}
cout<<"The total resistance of the series circuit: "<<t_resistance;








}