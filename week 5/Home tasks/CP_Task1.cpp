#include <iostream>
using namespace std;

main(){
    cout<<"Enter a number: ";
    int num;
    cin>>num;
  for(int i=1; i<=10; i++){
      cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
}