#include <iostream>
using namespace std;

// void calculate_large_small(int arr[], int num);


main(){

cout<<"Enter the number of elements: ";
int ele;
cin>>ele;


cout<<"Enter "<<ele<<" numbers, one per line: "<<endl;
int arr[ele];
for(int i=0;i<ele;i++){
    cin>>arr[i];
}

    int large=arr[0];
    int small=arr[0];
for(int i=0;i<ele;i++){
    if(arr[i]>large){
        large=arr[i];
    }
    if(arr[i]<small){
        small=arr[i];
    }
}
cout<<"Largest number: "<<large;
cout<<"\nSmallest number: "<<small;
// calculate_large_small(arr,ele);
}


// void calculate_large_small(int arr[], int num){
//     int large=arr[0];
//     int small=arr[0];
// for(int i=0;i<num;i++){
//     if(arr[i]>large){
//         large=arr[i];
//     }
//     if(arr[i]<small){
//         small=arr[i];
//     }
// }
// cout<<"Largest number: "<<large;
// cout<<"\nSmallest number: "<<small;
// }