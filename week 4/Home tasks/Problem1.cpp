#include <iostream>
using namespace std;

main(){

string name;
int dis, tic;
cout<<"Country: ";
cin>>name;
cout<<"Ticket Price: ";
cin>>tic;

if(name == "Ireland"){
    dis = tic * 0.10;
}
else{
    dis = tic * 0.05;
}
int dis_tic = tic-dis;
    cout<<"Discounted Price "<< dis_tic;








}