#include <iostream>
using namespace std;
main()
{
    int correctPass = 1234;
    string correctUser="admin";
    string usernames[3]; // Array to store PIN attempts
    int choice;
    bool login = false;
    int password;





string stu_name[3];
int stu_age[3];
string cou_name[3];
int j=0,k=0;
    // PIN attempts using for loop
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Username: ";
        cin >> usernames[i];
        cout << "Enter Password: ";
        cin >> password;

        if (usernames[i] == correctUser && password==correctPass)
        {
            login = true;
            cout << "Login Successful\n";
            break;
        }
        else
        {
            cout << "Incorrect Username or Password\n";
        }
    }
    // If login successful
    if (login == true)
    {
        while (true)
        {
            cout << "\n--- University Management System ---\n";
            cout << "1. Add Student\n";
            cout << "2. View Student\n";
            cout << "3. Add course\n";
            cout << "4. View Course\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice == 1)
            {
                if(j>2){
                    cout<<"Maximum number of students are already added";
                }else{
                    cout << "Enter student name: ";
                    cin>>stu_name[j];
                    cout << "Enter student age: ";
                    cin>>stu_age[j];
                    j++;

                }

            }
            else if (choice == 2)
            {
                for(int i=0;i<3;i++){
                    cout<<"Student "<<i+1<<": "<<stu_name[i]<<" Age: "<<stu_age[i]<<endl;
                }
            }
            else if (choice == 3)
            {
                if(k>2){
                    cout<<"Maximum number of courses are already added";
                }else{
                    cout << "Enter course name: ";
                    cin>>cou_name[k];
                    k++;

                }               
            }
            else if (choice == 4)
            {
                for(int i=0;i<3;i++){
                    cout<<"Course "<<i+1<<": "<<cou_name[i]<<endl;
                }
            }
            else if (choice == 5)
            {
                cout << "Exiting University Management System!\n";
                break; // Exit the loop
            }
            else
            {
                cout << "Invalid Choice\n";
            }
        }
    }
    else
    {
        cout << "Too many incorrect attempts. Access Denied.\n";
    }
}
