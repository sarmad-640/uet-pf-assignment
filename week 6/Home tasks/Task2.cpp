#include <iostream>
using namespace std;

// void calculate_even(int arr[], int num);


main(){

cout<<"Enter the number of elements: ";
int ele;
cin>>ele;


cout<<"Enter "<<ele<<" numbers, one per line: "<<endl;
int arr[ele];
for(int i=0;i<ele;i++){
    cin>>arr[i];
}

int even=0;
for(int i=0;i<ele;i++){
    if(arr[i]%2==0){
        even++;
    }
}
cout<<"Total even numbers: "<<even;
// calculate_even(arr,ele);
}


// void calculate_even(int arr[], int num){
//     int even=0;
// for(int i=0;i<num;i++){
//     if(arr[i]%2==0){
//         even++;
//     }
// }
// cout<<"Total even numbers: "<<even;
// }