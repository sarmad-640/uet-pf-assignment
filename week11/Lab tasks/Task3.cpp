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
void Print_toyota_blue(int arr[][5]){
    cout<<"Toyota blue"<<arr[2][4];
    cout<<endl;
    
}
void Print_all_red(int arr[][5]){
    int sum=0;
    for(int j=0;j<5;j++){
        sum+=arr[0][j];
    }
    cout<<sum;
    cout<<endl;
}
void Print_all_of_color(int arr[][5], string color){
    int row;
    if(color=="red"){
        row = 0;
    }
    else if(color=="black"){
        row = 1;
        
    }
    else if(color=="brown"){
        row = 2;
        
    }
    else if(color=="blue"){
        row = 3;
        
    }
    else if(color=="gray"){
        row = 4;

    }
    int sum=0;
    for(int j=0;j<5;j++){
        sum+=arr[row][j];
    }
    cout<<sum;
    cout<<endl;
}
void rows_to_coll(int arr[][5], int rows){
for(int i=0;i<rows;i++){
    for(int j=0;j<5;j++){
        cout<<arr[j][i]<<"\t";
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
    Print_toyota_blue(carData);
    Print_all_red(carData);
    
    string color;
    cout<<"Enter car color: ";cin>>color;
    Print_all_of_color(carData, color);
    
    rows_to_coll(carData, rows);

}

