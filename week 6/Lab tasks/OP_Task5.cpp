#include <iostream>
using namespace std;

main(){

cout<<"Enter the number of elements: ";
int ele;
cin>>ele;


cout<<"Enter "<<ele<<" numbers, one per line: "<<endl;
int arr[ele];
int count=0;
for(int i=0;i<ele;i++){

    int num;
    cin>>num;
    bool a_entered=false;
    for(int j=0;j<count;j++){
        if(arr[j]==num){
            a_entered=true;
        }

    }

    if(a_entered){
                cout<<"Already Entered: "<<count<<endl;
        }else{
        arr[count]=num;
        count++;
    }
}
cout<<"Unique numbers entered: ";
for(int i=0;i<count;i++){
    cout<<arr[i]<<" ";
}








}

