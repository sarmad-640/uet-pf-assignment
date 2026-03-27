#include <iostream>
using namespace std;

main(){

cout<<"Enter the size of the array: ";
int size;
cin>>size;


cout<<"Enter "<<size<<" chords, one per line: "<<endl;
string chord[size];
for(int i=0;i<size;i++){
    cin>>chord[i];
}

for(int i=0;i<size;i++){
    int len=0;
    for(int j=0;chord[i][j]!='\0';j++){
        len++;
    }
    // cout<<chord[i][len-1]<<endl;        //for debugging purpose

    if(chord[i][len-1]!='7'){      //checks if the end of the 
        chord[i]+='7';
    }
}

cout<<"Jazzified chords: ";
cout<<"[ ";
for(int i=0;i<size;i++){
    cout<<chord[i]<<" ";
}
cout<<"]";
}

