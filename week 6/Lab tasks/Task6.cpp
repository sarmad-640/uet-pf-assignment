#include <iostream>
using namespace std;

main(){

int numbers[5]={1,2,3,4,5};

int sum=0;
for(int i=0;i<5;i++){
sum+=numbers[i];
}
float avg = sum/5;
cout<<"Sum: "<<sum<<endl;
cout<<"Avg: "<<avg;


}