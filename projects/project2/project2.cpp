#include <iostream>
#include <string>
#include <conio.h> // for getch()
using namespace std;

int main()
{
    const int total = 100;
    string Username[total] = {"test", "testttt"}, User_Password[total] = {"123", "456"};
    string Destination[total] = {"pakistan", "turkey", "saudi"}, Booking[total][total], Deleted[total][total];
    int Des_Price[total] = {100, 200, 300}, Booki_Price[total][total], Del_Price[total][total];
    int des_count = 0;
    int user_count = 0;
    int booking_count[total] = {0};
    int current_user = 0;
    int k = 0;

    Booking[0][0] = {"pakistan"};
    Booki_Price[0][0] = {100};
    Booking[1][0] = {"saudi"};
    Booki_Price[1][0] = {300};

    for (int i = 0; Username[i] != "\0"; i++)
    {
        user_count++;
    }
    while (true) // Travel Management System main menu
    {

        system("CLS");
        cout << "\n";
        cout << "=================================================\n";
        cout << "        Travel MANAGEMENT SYSTEM\n";
        cout << "=================================================\n\n";

        cout << "   [1] Admin Panel\n";
        cout << "   [2] User Panel\n";
        cout << "   [3] Exit\n\n";

        cout << "-------------------------------------------------\n";
        cout << " Enter your choice: ";

        string userOption;
        cin >> userOption;

        if (userOption == "1") // admin menu options
        {

            int loginAttemp = 0;
            for (int i = 0; i < 3; i++) // limiting login attempts
            {

                system("CLS");
                cout << "\n=========================================\n";
                cout << "              ADMIN LOGIN\n";
                cout << "=========================================\n\n";

                string username, password;
                cout << " Username : ";
                cin >> username;
                cout << " Password : ";
                cin >> password;

                if (username == "admin" && password == "123") // credential validation
                {
                    cout << "Login successful!\n";

                    while (true) // shows admin menu
                    {
                        system("CLS");
                        cout << "\n=========================================\n";
                        cout << "              ADMIN PANEL\n";
                        cout << "=========================================\n\n";

                        cout << "   [1] Manage Users\n";
                        cout << "   [2] Manage Packages & Destinations\n";
                        cout << "   [3] Manage Bookings\n";
                        cout << "   [4] View Statistics\n";
                        cout << "   [5] Logout\n\n";

                        cout << "-----------------------------------------\n";
                        cout << " Select option: ";
                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1") // Users
                        {
                            while (true)
                            {
                                system("CLS");
                                cout << "\n=========================================\n";
                                cout << "            USER MANAGEMENT\n";
                                cout << "=========================================\n\n";

                                cout << "   [1] View Users\n";
                                cout << "   [2] Delete User\n";
                                cout << "   [3] Back\n\n";

                                cout << "-----------------------------------------\n";
                                cout << " Select option: ";
                                string Manage_UserOption;
                                cin >> Manage_UserOption;
                                if (Manage_UserOption == "1")
                                {
                                    k=0;
                                    for (int i = 0; i < user_count; i++)
                                    {
                                        if (Username[i] != "")
                                        {
                                            k++;
                                            cout << "User " << k << ": " << Username[i] << endl;
                                            cout << "Password for " << Username[i] << ": " << User_Password[i] << endl;
                                        }
                                    }
                                    cout << "\nPress any key to continue...";
                                    getch();
                                }
                                else if (Manage_UserOption == "2")
                                {
                                    k=0;
                                    for (int i = 0; i < user_count; i++)
                                    {
                                        if (Username[i] != "")
                                        {
                                            k++;
                                            cout << "User " << k << ": " << Username[i] << endl;
                                        }
                                    }
                                    cout << "Enter the user name you want to delete: ";
                                    string user_name;
                                    cin >> user_name;
                                    for(int i=0;i<total;i++){
                                        if(user_name==Username[i]){
                                            Username[i] = "";
                                            User_Password[i] = "";

                                        }
                                    }
                                    cout<<"User Deleted Successfully!";
                                    cout << "\nPress any key to continue...";
                                    getch();
                                }
                                else if (Manage_UserOption == "3")
                                {
                                    break;
                                }
                            }
                        }
                        else if (adminOption == "2") // Manage Packages & Destinations
                        {
                            while (true)
                            {
                                system("CLS");
                                cout << "\n=========================================\n";
                                cout << "     DESTINATIONS & PACKAGES MANAGER\n";
                                cout << "=========================================\n\n";

                                cout << "   [1] Add Destination\n";
                                cout << "   [2] View Destinations\n";
                                cout << "   [3] Delete Destination\n";
                                cout << "   [4] Back\n\n";

                                cout << "-----------------------------------------\n";
                                cout << " Select option: ";
                                string Manage_UsersOption;
                                cin >> Manage_UsersOption;
                                if (Manage_UsersOption == "1")
                                {
                                    cout << "Enter the number of Destinations to add: ";
                                    int add_count;
                                    cin >> add_count;
                                    for (int i = 0; Destination[i] != "\0"; i++)
                                    {
                                        des_count++;
                                    }
                                    for (int i = 0; i < add_count; i++)
                                    {
                                        cout << "Enter the destination name and price: ";
                                        cin >> Destination[des_count] >> Des_Price[des_count];
                                        des_count++;
                                    }
                                    cout << "Added successfully!";

                                    cout << "\nPress any key to return to previous menu!";
                                    getch();
                                }
                                else if (Manage_UsersOption == "2")
                                {
                                    k=0;
                                    for (int i = 0; i < total; i++)
                                    {
                                        if (Destination[i] != "")
                                        {
                                            k++;
                                            cout <<k<<". "<< Destination[i] << "   " << Des_Price[i] << endl;
                                        }
                                    }

                                    cout << "\nPress any key to return to previous menu!";
                                    getch();
                                }
                                else if (Manage_UsersOption == "3")
                                {
                                    k=0;
                                    for (int i = 0; i < total; i++)
                                    {
                                        if (Destination[i] != "")
                                        {
                                            k++;
                                            cout <<k<<". "<< Destination[i] << "   " << Des_Price[i] << endl;
                                        }
                                    }
                                    cout << "Enter the Destination name to delete or to exit enter -1: ";
                                    string del_dest;
                                    cin >> del_dest;
                                    if (del_dest != "-1")
                                    {
                                        for(int i=0;i<total;i++){
                                            if(del_dest==Destination[i]){
                                                Destination[i] = "";
                                                Des_Price[i] = 0;

                                            }
                                        }
                                        cout<<"Destination Deleted Successfully!";
                                    }

                                    cout << "\nPress any key to return to previous menu!";
                                    getch();
                                }
                                else if (Manage_UsersOption == "4")
                                {
                                    break;
                                }
                            }
                        }
                        else if (adminOption == "3") // manage bookings
                        {
                            while (true)
                            {
                                system("CLS");
                                cout << "\n=========================================\n";
                                cout << "            BOOKING MANAGEMENT\n";
                                cout << "=========================================\n\n";

                                cout << "   [1] View User Bookings\n";
                                cout << "   [2] Delete User Booking\n";
                                cout << "   [3] Back\n\n";

                                cout << "-----------------------------------------\n";
                                cout << " Select option: ";
                                string Manage_PackagesOption;
                                cin >> Manage_PackagesOption;
                                if (Manage_PackagesOption == "1")
                                {
                                    k=0;
                                    for (int i = 0; i < total; i++)
                                    {
                                        for (int j = 0; j < total; j++)
                                        {
                                            if (Username[i] != "")
                                            {
                                                if (Booking[i][j] != "")
                                                {
                                                    k++;
                                                    cout << "User " << k << ": " << Username[i] << endl;
                                                    cout << "Bookings for " << Username[i] << ":" << Booking[i][j] << endl;
                                                }
                                            }
                                        }
                                    }
                                    cout << "\nPress any key to continue...";
                                    getch();
                                }
                                else if (Manage_PackagesOption == "2")
                                {
                                    k=0;
                                    for (int i = 0; i < user_count; i++)
                                    {
                                        for (int j = 0; j < user_count; j++)
                                        {
                                            if (Username[i] != "")
                                            {
                                                if (Booking[i][j] != "")
                                                {
                                                    k++;
                                                    cout << "User " << k << ": " << Username[i] << endl;
                                                    cout << "Bookings for " << Username[i] << ": " << Booking[i][j] << endl;
                                                }
                                            }
                                        }
                                    }

                                    cout << "Enter user name followed by the booking naeme you want to delete: ";
                                    string temp_user;
                                    string temp_booking_name;
                                    cin >> temp_user>>temp_booking_name;

                                    int user,booking_name;
                                    for(int i=0;i<total;i++){
                                        if(temp_user==Username[i]){
                                            user=i;
                                        }
                                    }
                                    for(int i=0;i<total;i++){
                                        if(temp_booking_name==Booking[user][i]){
                                            booking_name=i;
                                        }
                                    }
                                    Booking[user][booking_name] = "";
                                    Booki_Price[user][booking_name] = 0;
                                    cout<<"Successfully removed";

                                    cout << "\nPress any key to continue...";
                                    getch();
                                }
                                else if (Manage_PackagesOption == "3")
                                {
                                    break;
                                }
                            }
                        }
                        else if (adminOption == "4") // view stats
                        {
                            while (true)
                            {
                                system("CLS");
                                cout << "\n=========================================\n";
                                cout << "              STATISTICS PANEL\n";
                                cout << "=========================================\n\n";

                                cout << "   [1] Total Users\n";
                                cout << "   [2] Total Bookings\n";
                                cout << "   [3] Back\n\n";

                                cout << "-----------------------------------------\n";
                                cout << " Select option: ";
                                string statsOption;
                                cin >> statsOption;
                                if (statsOption == "1")
                                {
                                    cout << "Total Users: " << user_count;
                                    cout << "\nPress any key to continue...";
                                    getch();
                                }
                                else if (statsOption == "2")
                                {
                                    int total_bookings = 0;
                                    for (int i = 0; i < total; i++)
                                    {
                                        for (int j = 0; j < total; j++)
                                        {
                                            if (Booking[i][j] != "")
                                            {
                                                total_bookings++;
                                            }
                                        }
                                    }
                                    // for (int i = 0; i <= user_count; i++)
                                    // {

                                    //     total_bookings += booking_count[i];
                                    // }
                                    cout << "Total Bookings: " << total_bookings << endl;
                                    // cout << "Total Bookings: " << booking_count[current_user]<<endl;
                                    cout << "\nPress any key to continue...";
                                    getch();
                                }
                                else if (statsOption == "3")
                                {
                                    break;
                                }
                            }
                        }
                        else if (adminOption == "5") // logout admin
                        {
                            cout << "Logout Success!\n";
                            cout << "Press any key to return to main menu...\n";
                            getch(); // pause
                            break;
                        }
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
        else if (userOption == "2") // user registration options
        {
            while (true)
            {
                system("CLS");
                cout << "\n=========================================\n";
                cout << "              USER PORTAL\n";
                cout << "=========================================\n\n";

                cout << "   [1] Register\n";
                cout << "   [2] Login\n";
                cout << "   [3] Back\n\n";

                cout << "-----------------------------------------\n";
                cout << " Select option: ";
                string Register_UserOption;
                cin >> Register_UserOption;
                if (Register_UserOption == "1")
                { // register user
                    cout << "Register username: ";
                    cin >> Username[user_count];
                    cout << "Register Password: ";
                    cin >> User_Password[user_count];

                    cout << "User " << Username[user_count] << " registered successfully!\n";
                    user_count++;
                    cout << "\nPress any key to return to previous menu!";
                    getch();
                }
                else if (Register_UserOption == "2")
                { // login user
                    cout << "Enter username: ";
                    string username;
                    cin >> username;
                    cout << "Enter Password: ";
                    string user_password;
                    cin >> user_password;
                    for (int i = 0; i <= user_count; i++)
                    {
                        if (username == Username[i] && user_password == User_Password[i])
                        {
                            current_user = i;
                            cout << "Login Successful! \n";
                            cout << "Press any key to continue...";
                            getch();

                            while (true) // shows user menu
                            {
                                system("CLS");
                                cout << "\n=========================================\n";
                                cout << "        WELCOME, " << Username[i] << "\n";
                                cout << "=========================================\n\n";

                                cout << "   [1] Dashboard\n";
                                cout << "   [2] Packages & Booking\n";
                                cout << "   [3] Logout\n\n";

                                cout << "-----------------------------------------\n";
                                cout << " Select option: ";
                                string UserOption;
                                cin >> UserOption;
                                if (UserOption == "1") // show User Dashboard
                                {
                                    while (true)
                                    {
                                        system("CLS");
                                        cout << "\n=========================================\n";
                                        cout << "              USER DASHBOARD\n";
                                        cout << "=========================================\n\n";

                                        cout << "   [1] View Profile\n";
                                        cout << "   [2] Booking History\n";
                                        cout << "   [3] Change Password\n";
                                        cout << "   [4] Back\n\n";

                                        cout << "-----------------------------------------\n";
                                        cout << " Select option: ";
                                        string DashboardOption;
                                        cin >> DashboardOption;
                                        if (DashboardOption == "1")
                                        {
                                            cout << "Username: " << Username[current_user] << endl;
                                            cout << "Password: " << User_Password[current_user] << endl;
                                            int j = 0;
                                            for (int i = 0; i < total; i++)
                                            {
                                                if (Booking[current_user][i] != "")
                                                {
                                                    j++;
                                                    booking_count[current_user] = j;
                                                }
                                            }
                                            cout << "Total Bookings " << booking_count[current_user] << endl;

                                            cout << "\nPress any key to return to previous menu!";
                                            getch();
                                        }
                                        else if (DashboardOption == "2")
                                        {
                                            cout << "Current Bookings:-------------\n";
                                            k = 0;
                                            for (int i = 0; i < total; i++)
                                            {
                                                if (Booking[current_user][i] != "")
                                                {
                                                    k++;
                                                    cout << k << ". " << Booking[current_user][i] << "   " << Booki_Price[current_user][i] << endl;
                                                }
                                            }

                                            cout << "\nCanceled Bookings:-------------\n";
                                            k = 0;
                                            for (int i = 0; i < total; i++)
                                            {
                                                if (Deleted[current_user][i] != "")
                                                {
                                                    k++;
                                                    cout << k << ". " << Deleted[current_user][i] << "   " << Del_Price[current_user][i] << endl;
                                                }
                                            }

                                            cout << "\nPress any key to return to previous menu!";
                                            getch();
                                        }
                                        else if (DashboardOption == "3")
                                        {
                                            cout << "Enter current password: ";
                                            string temp_pass;
                                            cin >> temp_pass;
                                            if (temp_pass == User_Password[current_user])
                                            {
                                                string new_pass;
                                                cout << "Enter new password: ";
                                                cin >> new_pass;
                                                User_Password[current_user] = new_pass;
                                            }
                                            cout << "\nPress any key to return to previous menu!";
                                            getch();
                                        }
                                        else if (DashboardOption == "4")
                                        {
                                            break;
                                        }
                                    }
                                }
                                else if (UserOption == "2") // Packages and Booking
                                {
                                    while (true)
                                    {
                                        system("CLS");
                                        cout << "\n=========================================\n";
                                        cout << "         PACKAGES & BOOKINGS\n";
                                        cout << "=========================================\n\n";

                                        cout << "   [1] View All Packages\n";
                                        cout << "   [2] Search Destination\n";
                                        cout << "   [3] Book Trip\n";
                                        cout << "   [4] My Bookings\n";
                                        cout << "   [5] Cancel Booking\n";
                                        cout << "   [6] Back\n\n";

                                        cout << "-----------------------------------------\n";
                                        cout << " Select option: ";
                                        string Browse_PackageOption;
                                        cin >> Browse_PackageOption;
                                        if (Browse_PackageOption == "1")
                                        { // View All Packages
                                            k = 0;
                                            for (int i = 0; i < total; i++)
                                            {
                                                if (Destination[i] != "")
                                                {
                                                    k++;
                                                    cout << k << ". " << Destination[i] << "   " << Des_Price[i] << endl;
                                                }
                                            }

                                            cout << "\nPress any key to return to previous menu!";
                                            getch();
                                        }
                                        else if (Browse_PackageOption == "2")
                                        { // Search Destinations
                                            k = 0;
                                            string dest_name;
                                            cout << "Enter the name of the destination: ";
                                            cin >> dest_name;
                                            for (int i = 0; i < total; i++)
                                            {
                                                if (dest_name == Destination[i])
                                                {
                                                    k++;
                                                    cout << k << ". " << Destination[i] << "   " << Des_Price[i] << endl;
                                                }
                                            }
                                            cout << "\nPress any key to return to previous menu!";
                                            getch();
                                        }
                                        else if (Browse_PackageOption == "3")
                                        { // Book Trip
                                            k = 0;
                                            for (int i = 0; i < total; i++)
                                            {
                                                if (Destination[i] != "")
                                                {
                                                    k++;
                                                    cout << k << ". " << Destination[i] << "   " << Des_Price[i] << endl;
                                                }
                                            }
                                            int empty_slot = -1;
                                            for (int i = 0; i < total; i++)
                                            {
                                                if (Booking[current_user][i] == "")
                                                {
                                                    empty_slot = i;
                                                }
                                            }
                                            int select_pack;
                                            cout << "Enter the package number: ";
                                            cin >> select_pack;
                                            Booking[current_user][empty_slot] = Destination[select_pack - 1];
                                            Booki_Price[current_user][empty_slot] = Des_Price[select_pack - 1];

                                            cout << "\nPress any key to return to previous menu!";
                                            getch();
                                        }
                                        else if (Browse_PackageOption == "4")
                                        { // View My Bookings
                                            k = 0;
                                            for (int i = 0; i < total; i++)
                                            {
                                                if (Booking[current_user][i] != "")
                                                {
                                                    k++;
                                                    cout << k << ". " << Booking[current_user][i] << "   " << Booki_Price[current_user][i] << endl;
                                                }
                                            }

                                            cout << "\nPress any key to return to previous menu!";
                                            getch();
                                        }
                                        else if (Browse_PackageOption == "5")
                                        { // Cancel My Bookings
                                            k = 0;
                                            for (int i = 0; i < total; i++)
                                            {
                                                if (Booking[current_user][i] != "")
                                                {
                                                    k++;
                                                    cout << k << ". " << Booking[current_user][i] << "   " << Booki_Price[current_user][i] << endl;
                                                }
                                            }
                                            string del_pack;
                                            cout << "Enter the name of the Booking to delete or to exit enter -1: ";
                                            cin >> del_pack;
                                            if (del_pack != "-1")
                                            {
                                                int empty_slot = 0;
                                                for (int i = 0; i < total; i++)
                                                {
                                                    if (Deleted[current_user][i] == "")
                                                    {
                                                        empty_slot = i;
                                                    }
                                                }
                                                for (int i = 0; i < total; i++)
                                                {
                                                    if (del_pack == Booking[current_user][i])
                                                    {
                                                        cout << "Booking for " << Booking[current_user][i];
                                                        Deleted[current_user][empty_slot] = Booking[current_user][i];
                                                        Booking[current_user][i] = "";
                                                        Del_Price[current_user][empty_slot] = Booki_Price[current_user][i];
                                                        Booki_Price[current_user][i] = 0;
                                                        cout << " Cancelled Successfully! ";
                                                    }
                                                }
                                            }

                                            cout << "\nPress any key to return to previous menu!";
                                            getch();
                                        }
                                        else if (Browse_PackageOption == "6")
                                        {
                                            break;
                                        }
                                    }
                                }
                                else if (UserOption == "3") // logout user
                                {
                                    cout << "Logout Success!\n";
                                    cout << "Press any key to return to main menu...\n";
                                    getch(); // pause
                                    break;
                                }
                            }
                        }
                    }
                }
                else if (Register_UserOption == "3")
                { // back
                    break;
                }
            }
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
