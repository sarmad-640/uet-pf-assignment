#include <iostream>
using namespace std;


main(){



cout<<"Enter names of 5 stuents, one per line: "<<endl;
string arr[5];
for(int i=0;i<5;i++){
    cin>>arr[i];
}
cout<<"Student names are: "<<endl;
for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
}


}


