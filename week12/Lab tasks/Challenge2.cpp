#include <iostream>
using namespace std;


void swap_with_ref(int &a,int &b){
int temp=a;
a=b;
b=temp;

}


main() {
int a =10, b=20;



swap_with_ref(a,b);

cout<<"Value of a after : "<<a<<endl;
cout<<"Value of b after : "<<b<<endl;
}