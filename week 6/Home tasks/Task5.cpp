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

cout<<"Enter a letter to check: ";
char ch;
cin>>ch;
int count=0;
for(int i=0;i<ele;i++){
    if(arr[i][0]==ch){
        count++;
    }
}
cout<<"Total names starting with '"<<ch<<"': "<<count;


}

