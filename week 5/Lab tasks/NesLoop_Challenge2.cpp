#include <iostream>
using namespace std;

main(){

string username,st_name, c_name;
int password, option, st_age;


for(int i=0; i<3; i++){
cout<<"Enter username: ";
cin>>username;
cout<<"Enter password: ";
cin>>password;
if(username =="admin" && password==1234){
    cout<<"Login Successful";

for(int i=0; i<5; i++){
    cout<<"\n----------University Management System-----------\n";
    cout<<"1. Add Student\n";
    cout<<"2. View Student\n";
    cout<<"3. Add Course\n";
    cout<<"4. Exit\n";

    cout<<"Choose an option: ";
    cin>>option;

    if(option == 1){
        cout<<"Enter student name and age: ";
        cin>>st_name>>st_age;

        cout<<"Data stored successfully";
    }
    else if(option == 2){
        if(st_name != "" ){
            cout<<"Student name: "<<st_name<<"\nStudent age: "<<st_age;
        }else{
            cout<<"No record found";
        }
    }
    else if(option == 3){
        cout<<"Enter course name: ";
        cin>>c_name;

        cout<<"Course added successfully";
    }
    else if(option == 4){
        cout<<"Program ends!";
        break;
    }
    else{
        cout<<"Invalid option";
    }
}

    break;
}else{
    cout<<"Wrong Username or Password try again!\n";
}

if(i==3 && (username!="admin" || password!=1234)){
    cout<<"Too many wrong attempts!";
        cout<<"Program ends!";

}
}




// while(option!=4){
//     cout<<"\n----------University Management System-----------\n";
//     cout<<"1. Add Student\n";
//     cout<<"2. View Student\n";
//     cout<<"3. Add Course\n";
//     cout<<"4. Exit\n";

//     cout<<"Choose an option";
//     cin>>option;

//     if(option == 1){
//         cout<<"Enter student name and age: ";
//         cin>>st_name>>st_age;

//         cout<<"Data stored successfully";
//     }
//     else if(option == 2){
//         if(st_name != "" ){
//             cout<<"Student name: "<<st_name<<"\nStudent age: "<<st_age;
//         }else{
//             cout<<"No record found";
//         }
//     }
//     else if(option == 3){
//         cout<<"Enter course name: ";
//         cin>>c_name;

//         cout<<"Course added successfully";
//     }
//     else if(option == 4){
//         cout<<"Program ends!";
//         break;
//     }
//     else{
//         cout<<"Invalid option";
//     }
// }

}