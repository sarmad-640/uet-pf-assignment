#include <iostream>
#include <string>
#include <conio.h> // for getch()
using namespace std;

int main()
{
    const int totalStudents = 100;
    string names[totalStudents] = {"1", "2", "3"}, pref1[totalStudents] = {"1", "2", "2"}, pref2[totalStudents] = {"1", "2", "2"}, pref3[totalStudents] = {"1", "2", "2"};
    int ages[totalStudents] = {1, 2, 3};
    float matric[totalStudents] = {1, 2, 3}, fsc[totalStudents] = {1, 2, 3}, ecat[totalStudents] = {1, 2, 3}, aggrigate[totalStudents];
    int index = 3; // keeps track of current student indexing in array starts from 0 for 1st student

    while (true)     //University Management System main menu
    {

        system("CLS"); // clear screen
        cout << "=============================================\n";
        cout << "=======University Management System==========\n";
        cout << "=============================================\n";
        cout << "1. Admin\n";
        cout << "2. Student\n";
        cout << "3. Exit\n";
        cout << "Choose option: ";

        string userOption;
        cin >> userOption;

        if (userOption == "1") // admin menu options
        {

            int loginAttemp = 0;
            for (int i = 0; i < 3; i++) // limiting login attempts
            {
                system("CLS");
                cout << "=== Admin Menu ===\n";
                string username, password;
                cout << "Enter Username: ";
                cin >> username;
                cout << "Enter Password: ";
                cin >> password;

                if (username == "admin" && password == "123") // credential validation
                {
                    cout << "Login successful!\n";

                    while (true) // shows admin menu
                    {
                        system("CLS");
                        cout << "1 Show all students " << endl;
                        cout << "2 Search Student " << endl;
                        cout << "3 Update student record " << endl;
                        cout << "4 Generate Merit List " << endl;
                        cout << "5 Delete student record" << endl;
                        cout << "6 Logout" << endl;
                        cout << "Choose the option: ";
                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1") // show students record
                        {
                            // show students record
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (names[i] != "")
                                {
                                    cout << names[i] << "\t" << ages[i] << "\t" << matric[i] << "\t" << fsc[i] << "\t" << ecat[i] << "\t" << pref1[i] << "\t" << pref2[i] << "\t" << pref3[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == "2") // searsh student by name function;
                        {

                            cout << "Enter the student name you want to search ";
                            string name;
                            cin >> name;
                            bool recFound = false;
                            // int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (names[i] == name)
                                {
                                    // foundindex = i;
                                    // break;        if we want to show the first occurence of the name then use break if last occurence then dont use break

                                    cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                    cout << names[i] << "\t" << ages[i] << "\t" << matric[i] << "\t" << fsc[i] << "\t" << ecat[i] << "\t" << pref1[i] << "\t" << pref2[i] << "\t" << pref3[i] << endl;
                                    cout << endl;
                                    recFound = true;
                                }
                            }
                            if (recFound == false)
                            {
                                cout << "No record found for name " << name << endl;
                            }
                            /*
                            //used when we want to display just a single occurence of the name
                            else
                            {
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                            cout << names[foundindex] << "\t" << ages[foundindex] << "\t" << matric[foundindex] << "\t" << fsc[foundindex] <<
                            <<ecat[i] << "\t" << pref1[foundindex] <<< "\t" << pref2[foundindex] << "\t" << pref3[foundindex] << endl;
                            }
                            */
                        }
                        else if (adminOption == "3") // update student record;
                        {
                            cout << "Enter the student name you want to update ";
                            string name;
                            cin >> name;
                            bool recFound = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (names[i] == name)
                                {
                                    foundIndex = i;
                                    // break;        if we want to show the first occurence of the name then use break if last occurence then dont use break

                                    recFound = true;
                                }
                            }
                            if (recFound == false)
                            {
                                cout << "No record found for name " << name << endl;
                            }

                            // used when we want to display just a single occurence of the name
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << names[foundIndex] << "\t" << ages[foundIndex] << "\t" << matric[foundIndex] << "\t" << fsc[foundIndex] << "\t" << ecat[foundIndex] << "\t" << pref1[foundIndex] << "\t" << pref2[foundIndex] << "\t" << pref3[foundIndex] << endl;
                                cout << endl;
                                cout << "Update Name: ";
                                cin >> names[foundIndex];
                                cout << "Update Age: ";
                                cin >> ages[foundIndex];
                                cout << "Update Matric Marks: ";
                                cin >> matric[foundIndex];
                                cout << "Update FSC Marks: ";
                                cin >> fsc[foundIndex];
                                cout << "Update ECAT Marks: ";
                                cin >> ecat[foundIndex];
                                cout << "Update First Preference (CS/SE/IT): ";
                                cin >> pref1[foundIndex];
                                cout << "Update Second Preference (CS/SE/IT): ";
                                cin >> pref2[foundIndex];
                                cout << "Update Third Preference (CS/SE/IT): ";
                                cin >> pref3[foundIndex];

                                cout << "\nYour data has been saved!\n";
                            }
                        }
                        else if (adminOption == "4") // generte merit list
                        {
                            for (int i = 0; i < index; i++)     //aggregate calc
                            {
                                float aggri = matric[i] / 1050.0 * 100.0 * 0.30 + fsc[i] / 1100.0 * 100.0 * 0.4 + ecat[i] / 400.0 * 100.0 * 0.3;
                                aggrigate[i] = aggri;
                            }
                            //sorting
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    // swap
                                    if (aggrigate[i] < aggrigate[j])
                                    {
                                        // swaping of name
                                        string tempName = names[i];
                                        names[i]=names[j];
                                        names[j]=tempName;
                                        // swapping matric
                                        float tempMatric = matric[i];
                                        matric[i]=matric[j];
                                        matric[j]=tempMatric;
                                        // swaping of fsc
                                        float tempFsc = fsc[i];
                                        fsc[i]=fsc[j];
                                        fsc[j]=tempFsc;
                                        // swaping of ecat
                                        float tempEcat = ecat[i];
                                        ecat[i]=ecat[j];
                                        ecat[j]=tempEcat;
                                        // swaping of prefl
                                        string tempPref1 = pref1[i];
                                        pref1[i]=pref1[j];
                                        pref1[j]=tempPref1;
                                        // swaping of pref2
                                        string tempPref2 = pref2[i];
                                        pref2[i]=pref2[j];
                                        pref2[j]=tempPref2;
                                        // swaping of pref3
                                        string tempPref3 = pref3[i];
                                        pref3[i]=pref3[j];
                                        pref3[j]=tempPref3;
                                        // swaping of aggriagte
                                        float tempAggrigate = aggrigate[i];
                                        aggrigate[i]=aggrigate[j];
                                        aggrigate[j]=tempAggrigate;
                                    }
                                }
                            }
                              // show students aggrigate sorted
                            cout << "Name\tMatric\tFSC\tEcat\tAggrigate" << endl;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (names[i] != "")
                                {
                                    cout << names[i] << "\t" << matric[i] << "\t" << fsc[i] << "\t" << ecat[i] << "\t" << aggrigate[i] << endl;
                                }
                            }
                        //code to be added in future for admit student into dep based on pref,seats and aggregate  
                        }
                        else if (adminOption == "5") // delete student record
                        {
                            cout << "Enter the student name you want to delete ";
                            string name;
                            cin >> name;
                            bool recFound = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (names[i] == name)
                                {
                                    foundIndex = i;
                                    // break;        if we want to show the first occurence of the name then use break if last occurence then dont use break

                                    recFound = true;
                                }
                            }
                            if (recFound == false)
                            {
                                cout << "No record found for name " << name << endl;
                            }

                            // used when we want to display just a single occurence of the name
                            else
                            {
                                names[foundIndex] = "";
                                ages[foundIndex] = 0;
                                matric[foundIndex] = 0;
                                fsc[foundIndex] = 0;
                                ecat[foundIndex] = 0;
                                pref1[foundIndex] = "";
                                pref2[foundIndex] = "";
                                pref3[foundIndex] = "";

                                cout << "\nName " << name << " record has been deleted!\n";
                            }
                        }
                        else if (adminOption == "6") // logout admin
                        {
                            cout << "Logout Success!\n";
                            cout << "Press any key to return to main menu...\n";
                            getch(); // pause
                            break;
                        }
                        cout << "Press any key to return to admin menu...\n"; // after exiting a conditional statement this will be executed
                        getch();                                              // pause
                    }
                }
                else // retry login
                {
                    cout << "Invalid credentials.\n";
                    cout << "Press any key to try again...\n";
                    getch(); // pause
                }
                loginAttemp++;
                break;
            }
        }
        else if (userOption == "2") // student registration options
        {
            system("CLS");
            cout << "=== Student Registration ===\n";
            cout << "Enter Name: ";
            cin >> names[index];
            cout << "Enter Age: ";
            cin >> ages[index];
            cout << "Enter Matric Marks: ";
            cin >> matric[index];
            cout << "Enter FSC Marks: ";
            cin >> fsc[index];
            cout << "Enter ECAT Marks: ";
            cin >> ecat[index];
            cout << "Enter First Preference (CS/SE/IT): ";
            cin >> pref1[index];
            cout << "Enter Second Preference (CS/SE/IT): ";
            cin >> pref2[index];
            cout << "Enter Third Preference (CS/SE/IT): ";
            cin >> pref3[index];

            cout << "\nYour data has been saved!\n";
            index++; // move to next student slot
            cout << "Press any key to return to main menu...\n";
            getch();
        }
        else if (userOption == "3") // exit loop
        {
            // cout << "Thanks for using this software!\n";
            break; // exit loop
        }
        else // option invalidity
        {
            cout << "Invalid option. Press any key to Try again.\n";
            getch();
        }
    }

    cout << "Thanks for using this software!";
    return 0;
}
