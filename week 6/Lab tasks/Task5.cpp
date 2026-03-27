#include <iostream>
using namespace std;

main(){
int len;
cout<<"Enter the total number of numbers you want to enter: ";
cin>>len;
int numbers[len];

for(int i=0;i<len;i++){
cout<<"Enter "<<i+1<<" number: ";
cin>>numbers[i];
}
for(int i=0;i<len;i++){
cout<<"The "<<i+1<<" element at location numbers["<<i<<"] is: "<<numbers[i]<<endl;

}


}