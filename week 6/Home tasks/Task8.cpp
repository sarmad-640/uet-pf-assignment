#include <iostream>
using namespace std;


main(){

cout<<"Enter the number of flights: ";
int ele;
cin>>ele;


string destination[ele];
int flightNumber[ele];
int seatsAvailable[ele];


// string arr[ele];
for(int i=0;i<ele;i++){
    cout<<endl;
    cout<<"Enter flight number for flight "<<i+1<<": ";
    cin>>flightNumber[i];
    cout<<"Enter destination for flight "<<flightNumber[i]<<": ";
    cin>>destination[i];
    cout<<"Enter seats available "<<flightNumber[i]<<": ";
    cin>>seatsAvailable[i];

}

cout<<"\nFlight Information: ";
cout<<"\n---------------------------\n";
for(int i=0;i<ele;i++){
    cout<<"Flight "<<flightNumber[i]<<" to "<<destination[i]<<" has "<<seatsAvailable[i]<<" seats available."<<endl;
}

cout<<"\nFlights with less than 5 seats available: ";
cout<<"\n----------------------------------------\n";
for(int i=0;i<ele;i++){
    if(seatsAvailable[i]<5){

        cout<<"Flight "<<flightNumber[i]<<" to "<<destination[i]<<" has only "<<seatsAvailable[i]<<" seats left!."<<endl;
    }
}

}

