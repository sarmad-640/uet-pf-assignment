#include <iostream>
using namespace std;
main(){

int Matric;
int FSc;
int ECAT;
float Aggregate;
cout<<"Input Your Matric, FSc, ECAT Numbers : ";
cin>>Matric>> FSc>> ECAT;



// UET aggregate is calculated by combining Matric, FSc, and ECAT scores with specific weightages: 25% Matric, 45% FSc, and 30% ECAT.

Aggregate = ((0.50 * ECAT/400)+ (0.40 * FSc/550) + (0.10 * Matric/1100) )*100;


cout<<"Your Aggregate is : "<<Aggregate;










}