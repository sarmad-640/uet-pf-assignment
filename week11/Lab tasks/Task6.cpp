#include<iostream>
using namespace std;

string check_splash_boom(string arr[][5], string coordinate){


//can also be done by using ascii
//int row = coordinate[0] - 'A';   // A->0, B->1, C->2...
//int column = coordinate[1] - '1'; // 1->0, 2->1...




string r;
r = coordinate[0];
int row;
if(r=="A"){
    row=0;
}else if(r=="B"){
    row=1;

}
else if(r=="C"){
    row=2;

}
else if(r=="D"){
    row=3;

}
else if(r=="E"){
    row=4;

}
string c;
c=coordinate[1];
int column;
column =  stoi(c)-1;

// cout<<row<<column<<arr[row][column];

if(arr[row][column]=="."){
    return "splash";
}else if(arr[row][column]=="*"){
    return "BOOM";
    
}

}
main(){


string arr[5][5]={
{".", ".", ".", "*", "*"},
{".", "*", ".", ".", "."},
{".", "*", ".", ".", "."},
{".", "*", ".", ".", "."},
{".", ".", "*", "*", "."},
};


cout<<"Enter coordinate to fire torpedo(e.g. , A1, B3, E5): ";
string coordinate;
cin>>coordinate;

    cout<<check_splash_boom(arr, coordinate);

}

