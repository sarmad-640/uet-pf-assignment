#include <iostream>
using namespace std;

// void calculate_sum(int arr[], int num);


main(){

cout<<"Enter the number of elements: ";
int ele;
cin>>ele;


cout<<"Enter "<<ele<<" numbers, one per line: "<<endl;
int arr[ele];
for(int i=0;i<ele;i++){
    cin>>arr[i];
}

int sum=0;
for(int i=0;i<ele;i++){
     sum+=arr[i];
}
cout<<"Sum of all elements: "<<sum;
// calculate_sum(arr,ele);
}


// void calculate_sum(int arr[], int num){
//     int sum=0;
// for(int i=0;i<num;i++){
//      sum+=arr[i];
// }
// cout<<"Sum of all elements: "<<sum;
// }