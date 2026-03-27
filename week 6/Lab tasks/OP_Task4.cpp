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
cout<<"Numbers in reverse order: ";
for(int i=ele-1;i>=0;i--){
    cout<<arr[i]<<" ";
}








}