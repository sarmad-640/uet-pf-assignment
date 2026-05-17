#include<iostream>
using namespace std;

void check_identity(int arr[][3]){
    bool identity=true;

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i==j && arr[i][j]!=1){
            identity=false;
        }
        if(i!=j && arr[i][j]!=0){
            identity=false;
        }
    }
}
if(identity){
    cout<<"Identity matrix";
}else{
    cout<<"Not Identity matrix";
    
}

}
main(){


int arr[3][3];


cout<<"Enter the element of matrix: \n ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter the element at position ["<< i << "]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
cout<<"Your matrix: \n ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    check_identity(arr);

}

