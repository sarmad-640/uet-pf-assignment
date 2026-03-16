#include <iostream>
using namespace std;

main(){
    int sum = 0;
    for(int i=1; i<=100; i++){
        sum = sum + i;
    }
    cout << "Sum using for loop: "<<sum <<endl;
    
    
    sum=0;
    int i=1;
    while(i<=100){
        sum+=i;
        i++;
    }
    cout << "Sum using while loop: "<<sum <<endl;
}