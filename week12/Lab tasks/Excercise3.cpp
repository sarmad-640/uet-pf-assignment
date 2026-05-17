#include <iostream>
using namespace std;
main() {
int y=20;
int x=1;
int &ref=y;
cout<<"Original value of y: "<<y<<endl;
ref=30;
cout<<"Modified value of y: "<<y<<endl;
cout<<"ref: "<<ref<<endl;
cout<<"&ref: "<<&ref<<endl;
ref=x;
// &ref=x; //invalid
cout<<"ref: "<<ref<<endl;
cout<<"&ref: "<<&ref<<endl;
}