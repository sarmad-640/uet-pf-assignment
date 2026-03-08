#include <iostream>
using namespace std;

main(){

int h;
cout<<"Holidays: ";
cin>>h;

int w_days = 365-h;
int t_f_games = (w_days*63)+(h*127);
int diff_f_norm = 30000 - t_f_games;

//method 1 to convert negative to positive
if (diff_f_norm<0){
    diff_f_norm = -1*diff_f_norm;
}
int hours = diff_f_norm / 60;
int minutes = diff_f_norm % 60;

//method 2 which we havent studied yet
// int hours = abs(diff_f_norm) / 60;
// int minutes = abs(diff_f_norm) % 60;

int dis;
if(diff_f_norm >= 0){
cout<<"Tom sleeps well \n";
cout<<hours<<" hours and "<<minutes<< " minutes less for play";
}
else{
    cout<<"Tom will run away \n";
cout<<hours<<" hours and "<<minutes<< " minutes for play";
}








}