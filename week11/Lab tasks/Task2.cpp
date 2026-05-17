#include<iostream>
using namespace std;

void Print_arr(int arr[][5],int rows){
for(int i=0;i<rows;i++){
    for(int j=0;j<5;j++){
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}
}

main(){
    const int rows = 5;
    const int columns = 5;
    int carData[rows][columns] = {
        {10,7,12,10,4},
        {18,11,15,17,2},
        {23,19,12,16,14},
        {7,12,16,0,2},
        {3,5,6,2,1}
    };
    Print_arr(carData, rows);
}

