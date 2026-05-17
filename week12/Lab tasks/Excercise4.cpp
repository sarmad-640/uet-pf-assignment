#include <iostream>
using namespace std;


void modify_with_pointer(int *p){
    *p=50;
}
void modify_with_reference(int &r){
    r=100;
}

main() {
int a =10, b=20;

modify_with_pointer(&a);
modify_with_reference(b);

cout<<"Value of a after pointer modification: "<<a<<endl;
cout<<"Value of b after reference modification: "<<b<<endl;
}