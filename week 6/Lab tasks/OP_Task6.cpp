#include <iostream>
using namespace std;

main(){

cout<<"Enter the number of elements: ";
int ele;
cin>>ele;


cout<<"Enter "<<ele<<" numbers, one per line: "<<endl;
int arr[ele];
for(int i=0;i<ele;i++){
    cin>>arr[i];
}
cout<<"The largest number entered is: ";
int largest=arr[0];
for(int i=0;i<ele;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
cout<<largest;







}