#include <iostream>
using namespace std;


void reverse(int *ptr,int size){

    // for(int i=0;i<size/2;i++){
    //     int temp=arr[i];
    //     arr[i]=arr[size-1-i];
    //     arr[size-1-i]=temp;
    // }
    for(int i=0;i<size/2;i++){
        int temp=*(ptr+i);
        *(ptr+i)=*(ptr+(size-1-i));
        *(ptr+(size-1-i))=temp;
    }



}


main() {

cout<<"Enter size of array: ";
int size;
cin>>size;

int arr[size];
int *ptr=arr;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

reverse(ptr,size);

cout<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}