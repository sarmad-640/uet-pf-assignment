#include<iostream>
using namespace std;

void Print_sum(int arr[][3], int rows){
    int sum=0;
for(int i=0;i<rows;i++){
    for(int j=0;j<3;j++){
        sum+=arr[j][i];
    }
}
cout<<"Sum: "<<sum;
}
main(){
    cout<<"Enter rows: ";
    int rows;
    cin>>rows;

int arr[rows][3];


cout<<"Enter the element of matrix: \n ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the element at position ["<< i << "]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    Print_sum(arr,rows);

}

