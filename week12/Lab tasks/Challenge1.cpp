#include <iostream>
using namespace std;


void swap_with_pointer(int *ptr1,int *ptr2){
int temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;

}


main() {
int a =10, b=20;

int *ptr1=&a;
int *ptr2=&b;

swap_with_pointer(&a,&b);

cout<<"Value of a after pointer modification: "<<a<<endl;
cout<<"Value of b after reference modification: "<<b<<endl;
}