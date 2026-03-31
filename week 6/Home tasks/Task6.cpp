#include <iostream>
using namespace std;


main(){

cout<<"Enter the number of elements: ";
int ele;
cin>>ele;


cout<<"Enter the name of "<<ele<<" students, one per line: "<<endl;
string arr[ele];
for(int i=0;i<ele;i++){
    cin>>arr[i];
}


//method called buble sorting(swaping adjacent elements till the largest or smallest pops at the end depending on the given query)
string temp;
for(int i=0;i<ele-1;i++){       //ele-1 as the ast element is already being sorted when the loop executes the last time as for each iteration it sorts two values

    for(int j=0;j<ele-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
}

//Selection Sort–like for each position i it scans the rest of the array
// for(int i=0; i<ele;i++){
//     for(int j=i;j<ele;j++){
//         if(arr[j]<arr[i]){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }

cout<<"Students in alphabetical order: \n";
for(int i=0;i<ele;i++){
    cout<<arr[i]<<endl;
}

}

