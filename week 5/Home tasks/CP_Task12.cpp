#include <iostream>
using namespace std;

main(){

string b_name, b_address ;
int choice,b_serial,c_time, b_id;


while(true){



    cout<<"\n----------Library Management System-----------\n";
    cout<<"1. Add Book\n";
    cout<<"2. View Book\n";
    cout<<"3. Borrow Book\n";
    cout<<"4. Issue Book\n";
    cout<<"5. Exit\n";

    cout<<"Enter choice(1-5): ";
    cin>>choice;


    if(choice == 1){
        cout<<"Book Name: ";
        cin>>b_name;
        // cout<<"Book Serial: ";
        // cin>>b_serial;
        cout<<"You added a book: "<<b_name;
    }
    else if(choice == 2){
        cout<<"Book Name: " <<b_name;
        // cout<<"Book Serial: " <<b_serial;


    }
    else if(choice == 3){
        cout<<"Borrower ID: ";
        cin>>b_id;
        cout<<"Book name: ";
        cin>>b_name;
    }
    else if(choice == 4){
        cout<<"Current Time: ";
        cin>>c_time;
        cout<<"Borrower ID: ";
        cin>>b_id;
        cout<<"Borrower Address: ";
        cin>>b_address;
        cout<<"Book name: ";
        cin>>b_name;
    }
    else if(choice == 5){
        cout<<"Exiting Library Management System. Goodbye!";
        break;
    }


    

}









}