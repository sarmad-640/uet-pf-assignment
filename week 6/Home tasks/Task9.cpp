#include <iostream>
using namespace std;

main(){

string b_name[100],borow_b[100];
int choice;

int k=0,book_count=0;
while(true){


    cout<<"\n----------Library Management System-----------\n";
    cout<<"1. Add Book\n";
    cout<<"2. View Book\n";
    cout<<"3. Borrow Book\n";
    cout<<"4. View Borrowed Book\n";
    cout<<"5. Exit\n";

    cout<<"Enter choice(1-5): ";
    cin>>choice;


    if(choice == 1){
        cout<<"Book Name: ";
        cin>>b_name[book_count];
        cout<<"You added a book: "<<b_name[book_count];
        book_count++;
    }
    else if(choice == 2){
        for(int j=0;j<book_count;j++){
            cout<<"Book "<<j+1<<": " <<b_name[j]<<endl;

        }

    }
    else if(choice == 3){
        cout<<"Available Books:"<<endl;
        for(int j=0; j<book_count;j++){
            cout<<"Book "<<j+1<<": " <<b_name[j]<<endl;

        }
        cout<<"Enter the name of the book you want to borrow: ";
        cin>>borow_b[k];
        for(int j=0; borow_b[j]!="\0";j++){
            if(borow_b[k]==b_name[j]){
                cout<<"Book "<<b_name[j]<<" borrowed!"<<endl;
                k++;
            }

        }       

    }
    else if(choice == 4){
        cout<<"Borrowed Books:"<<endl;
        for(int j=0; borow_b[j]!="\0";j++){
            cout<<"Book "<<borow_b[j]<<" was borrowed."<<endl;

        }
    }
    else if(choice == 5){
        cout<<"Exiting Library Management System. Goodbye!";
        break;
    }


    
}









}