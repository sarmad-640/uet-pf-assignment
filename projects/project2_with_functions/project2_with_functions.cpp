#include <iostream>
#include <string>
#include <conio.h> // for getch()
using namespace std;

const int total = 100;
// int k = 0;

void count_entries(string count_what[], int &count_var)
{
    for (int i = 0; i < total; i++)
    {
        if (count_what[i] != "")
        {
            count_var++;
        }
    }
}

void pause_and_return(string msg = "\nPress any key to return to previous menu!")
{
    cout << msg;
    getch();
}

bool admin_login()
{
    int loginAttemp = 0;
    for (int i = 0; i <= 3; i++) // limiting login attempts
    {

        system("CLS");
        if (loginAttemp > 0)
        {
            if (loginAttemp == 3)
            {
                cout << "Login attempt: " << loginAttemp << " out of 3...\n";
                cout << "All login attempt used...\n";
                pause_and_return();
                break;
            }
            else
            {
                cout << "\nLogin attempt: " << loginAttemp << " out of 3 used\n";
            }
        }

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
            return true;
        }
        else // retry login
        {
            cout << "Invalid credentials.\n";
            loginAttemp++;
            pause_and_return("Press any key to try again...\n");
        }
    }
    return false;
}

void view_users(string Username[], string User_Password[], int &user_count)
{
    int k = 0;
    for (int i = 0; i < user_count; i++)
    {
        if (Username[i] != "")
        {
            k++;
            cout << "User " << k << ": " << Username[i] << endl;
            cout << "Password for " << Username[i] << ": " << User_Password[i] << endl;
        }
    }
}

void delete_user(string Username[], string User_Password[], int &user_count)
{
    view_users(Username, User_Password, user_count);
    cout << "Enter the user name you want to delete: ";
    string user_name;
    cin >> user_name;
    for (int i = 0; i < total; i++)
    {
        if (user_name == Username[i])
        {
            Username[i] = "";
            User_Password[i] = "";
        }
    }
    cout << "User Deleted Successfully!";
}

void view_destiations(string Destination[], int Des_price[])
{
    int k = 0;
    for (int i = 0; i < total; i++)
    {
        if (Destination[i] != "")
        {
            k++;
            cout << k << ". " << Destination[i] << "   " << Des_price[i] << endl;
        }
    }
}

void addDestination(string Destination[], int Des_Price[], int des_count)
{
    cout << "Enter the number of Destinations to add: ";
    int add_count;
    cin >> add_count;
    for (int i = 0; i < add_count; i++)
    {
        cout << "Enter the destination name and price: ";
        cin >> Destination[des_count] >> Des_Price[des_count];
        des_count++;
    }
    cout << "Added successfully!";

    pause_and_return();
}

void delete_destination(string Destination[], int Des_Price[])
{
    cout << "Enter the Destination name to delete or to exit enter -1: ";
    string del_dest;
    cin >> del_dest;
    if (del_dest != "-1")
    {
        for (int i = 0; i < total; i++)
        {
            if (del_dest == Destination[i])
            {
                Destination[i] = "";
                Des_Price[i] = 0;
            }
        }
        cout << "Destination Deleted Successfully!";
    }
}

void viewAllBookings(string Username[], string Booking[][total])
{
    int k = 0;
    for (int i = 0; i < total; i++)
    {
        for (int j = 0; j < total; j++)
        {
            if (Username[i] != "")
            {
                if (Booking[i][j] != "")
                {
                    k++;
                    cout << "Record " << k << ": " << Username[i] << endl;
                    cout << "Bookings for " << Username[i] << ":" << Booking[i][j] << endl;
                }
            }
        }
    }
}

void delete_booking_by_admin(string Username[], string Booking[][total], int Booki_Price[][total])
{

    cout << "Enter user name followed by the booking naeme you want to delete: ";
    string temp_user;
    string temp_booking_name;
    cin >> temp_user >> temp_booking_name;

    int user, booking_name;
    for (int i = 0; i < total; i++)
    {
        if (temp_user == Username[i])
        {
            user = i;
        }
    }
    for (int i = 0; i < total; i++)
    {
        if (temp_booking_name == Booking[user][i])
        {
            booking_name = i;
        }
    }
    Booking[user][booking_name] = "";
    Booki_Price[user][booking_name] = 0;
    cout << "Successfully removed";
}

void viewTotalUsers(int &user_count)
{
    cout << "Total Users: " << user_count;
}

void view_total_bookings(string Booking[][total])
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

    cout << "Total Bookings: " << total_bookings << endl;
}

void register_user(string Username[], string User_Password[], int &user_count)
{
    cout << "Register username: ";
    cin >> Username[user_count];
    cout << "Register Password: ";
    cin >> User_Password[user_count];

    cout << "User " << Username[user_count] << " registered successfully!\n";
    user_count++;
}

bool login_user(string Username[], string User_Password[], int &user_count, int &current_user)
{
    bool a = false;
    cout << "Enter username: ";
    string username;
    cin >> username;
    cout << "Enter Password: ";
    string user_password;
    cin >> user_password;
    for (int i = 0; i < total; i++)
    {
        if (username == Username[i] && user_password == User_Password[i])
        {
            current_user = i;
            cout << "Login Successful! \n";
            pause_and_return("Press any key to continue...");
            a = true;
            return a;
        }
    }
    return a;
}

void view_profile(string Username[], string User_Password[], string Booking[][total], int booking_count[], int &current_user)
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
}

void viewBookingHistory(string Booking[][total], int Booki_Price[][total], string Deleted[][total], int Del_Price[][total], int &current_user)
{
    cout << "Current Bookings:-------------\n";
    int k = 0;
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
}

void change_password(string User_Password[], int &current_user)
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
}

void search_destination(string Destination[], int Des_Price[])
{
    int k = 0;
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
}

void bookTrip(string Destination[], int Des_Price[], string Booking[][total], int Booki_Price[][total], int &current_user)
{
    view_destiations(Destination, Des_Price);

    int empty_slot = -1;
    for (int i = 0; i < total; i++)
    {
        if (Booking[current_user][i] == "")
        {
            empty_slot = i;
            break;
        }
    }
    int select_pack;
    cout << "Enter the package number: ";
    cin >> select_pack;
    Booking[current_user][empty_slot] = Destination[select_pack - 1];
    Booki_Price[current_user][empty_slot] = Des_Price[select_pack - 1];
}

void view_my_bookings(string Booking[][total], int Booki_Price[][total], int &current_user)
{
    int k = 0;
    for (int i = 0; i < total; i++)
    {
        if (Booking[current_user][i] != "")
        {
            k++;
            cout << k << ". " << Booking[current_user][i] << "   " << Booki_Price[current_user][i] << endl;
        }
    }
}

void cancelBooking(string Deleted[][total], int Del_Price[][total], string Booking[][total], int Booki_Price[][total], int &current_user)
{
    string del_pack;
    cout << "Enter the name of the Booking to delete or to exit enter -1: ";
    cin >> del_pack;
    if (del_pack != "-1")
    {
        int empty_slot = -1;
        for (int i = 0; i < total; i++)
        {
            if (Deleted[current_user][i] == "")
            {
                empty_slot = i;
                break;
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
}

void manage_users_menu(string Username[], string User_Password[], int &user_count)
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
            view_users(Username, User_Password, user_count);
            pause_and_return("\nPress any key to continue...");
        }
        else if (Manage_UserOption == "2")
        {
            delete_user(Username, User_Password, user_count);
            pause_and_return("\nPress any key to continue...");
        }
        else if (Manage_UserOption == "3")
        {
            break;
        }
    }
}

void manageDestinationsMenu(string Destination[], int Des_Price[], int &des_count)
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
            addDestination(Destination, Des_Price, des_count);
        }
        else if (Manage_UsersOption == "2")
        {
            view_destiations(Destination, Des_Price);
            pause_and_return();
        }
        else if (Manage_UsersOption == "3")
        {
            view_destiations(Destination, Des_Price);
            delete_destination(Destination, Des_Price);

            pause_and_return();
        }
        else if (Manage_UsersOption == "4")
        {
            break;
        }
    }
}

void manageBookingsMenu(string Username[], string Booking[][total], int Booki_Price[][total])
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
            viewAllBookings(Username, Booking);
            pause_and_return();
        }
        else if (Manage_PackagesOption == "2")
        {

            viewAllBookings(Username, Booking);

            delete_booking_by_admin(Username, Booking, Booki_Price);

            pause_and_return();
        }
        else if (Manage_PackagesOption == "3")
        {
            break;
        }
    }
}

void statistics_menu(string Booking[][total], int &user_count)
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
            viewTotalUsers(user_count);
            pause_and_return();
        }
        else if (statsOption == "2")
        {
            view_total_bookings(Booking);
            pause_and_return("\nPress any key to continue...");
        }
        else if (statsOption == "3")
        {
            break;
        }
    }
}

void admin_panel(string Username[], string User_Password[], int &user_count,
                 string Destination[], int Des_Price[], int &des_count,
                 string Booking[][total], int Booki_Price[][total])
{
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
            manage_users_menu(Username, User_Password, user_count);
        }
        else if (adminOption == "2") // Manage Packages & Destinations
        {
            manageDestinationsMenu(Destination, Des_Price, des_count);
        }
        else if (adminOption == "3") // manage bookings
        {
            manageBookingsMenu(Username, Booking, Booki_Price);
        }
        else if (adminOption == "4") // view stats
        {
            statistics_menu(Booking, user_count);
        }
        else if (adminOption == "5") // logout admin
        {
            cout << "Logout Success!\n";
            pause_and_return("Press any key to return to main menu...\n");
            break;
        }
    }
}

void userDashboardMenu(string Username[], string User_Password[], string Booking[][total], int booking_count[], int Booki_Price[][total], string Deleted[][total], int Del_Price[][total], int &current_user)
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
            view_profile(Username, User_Password, Booking, booking_count, current_user);

            pause_and_return();
        }
        else if (DashboardOption == "2")
        {
            viewBookingHistory(Booking, Booki_Price, Deleted, Del_Price, current_user);

            pause_and_return();
        }
        else if (DashboardOption == "3")
        {
            change_password(User_Password, current_user);
            pause_and_return();
        }
        else if (DashboardOption == "4")
        {
            break;
        }
    }
}

void packagesMenu(string Destination[], int Des_Price[], string Booking[][total], int Booki_Price[][total], string Deleted[][total], int Del_Price[][total], int &current_user)
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
            view_destiations(Destination, Des_Price);

            pause_and_return();
        }
        else if (Browse_PackageOption == "2")
        { // Search Destinations
            search_destination(Destination, Des_Price);
            pause_and_return();
        }
        else if (Browse_PackageOption == "3")
        { // Book Trip
            bookTrip(Destination, Des_Price, Booking, Booki_Price, current_user);

            pause_and_return();
        }
        else if (Browse_PackageOption == "4")
        { // View My Bookings
            view_my_bookings(Booking, Booki_Price, current_user);

            pause_and_return();
        }
        else if (Browse_PackageOption == "5")
        { // Cancel My Bookings
            view_my_bookings(Booking, Booki_Price, current_user);

            cancelBooking(Deleted, Del_Price, Booking, Booki_Price, current_user);

            pause_and_return();
        }
        else if (Browse_PackageOption == "6")
        {
            break;
        }
    }
}

void user_menu(string Username[], string User_Password[], string Destination[], int Des_Price[], string Booking[][total], int booking_count[], int Booki_Price[][total], string Deleted[][total], int Del_Price[][total], int &current_user, int &user_count)
{
                       
                        while (true) // shows user menu
                        {
                            system("CLS");
                            cout << "\n=========================================\n";
                            cout << "        WELCOME, " << Username[current_user] << "\n";
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
                                userDashboardMenu(Username, User_Password, Booking, booking_count, Booki_Price, Deleted, Del_Price, current_user);
                            }
                            else if (UserOption == "2") // Packages and Booking
                            {
                                packagesMenu(Destination, Des_Price, Booking, Booki_Price, Deleted, Del_Price, current_user);
                            }
                            else if (UserOption == "3") // logout user
                            {
                                cout << "Logout Success!\n";
                                pause_and_return();
                                break;
                            }
                        }
                    
}
void user_portal(string Username[], string User_Password[], string Destination[], int Des_Price[], string Booking[][total], int booking_count[], int Booki_Price[][total], string Deleted[][total], int Del_Price[][total], int &current_user, int &user_count)
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
                    register_user(Username, User_Password, user_count);

                    pause_and_return();
                }
                else if (Register_UserOption == "2")
                { // login user
 if (login_user(Username, User_Password, user_count, current_user))
                    {
user_menu(Username, User_Password, Destination, Des_Price, Booking, booking_count, Booki_Price, Deleted, Del_Price, current_user, user_count);
                    }else{
        cout << "Wrong login credentials! \n";
        pause_and_return("Try again...");
                    }
                }
                else if (Register_UserOption == "3")
                { // back
                    break;
                }
            }
}

int main()
{

    // ===== USERS =====
    string Username[total] = {"ali", "ahmed", "sara"};
    string User_Password[total] = {"111", "222", "333"};
    int user_count = 0;

    // ===== DESTINATIONS =====
    string Destination[total] = {"Pakistan", "Turkey", "Saudi", "Dubai", "Malaysia"};
    int Des_Price[total] = {100, 200, 300, 400, 500};
    int des_count = 0;

    // ===== BOOKINGS =====
    string Booking[total][total] = {""};
    int Booki_Price[total][total] = {0};

    // ===== DELETED BOOKINGS =====
    string Deleted[total][total] = {""};
    int Del_Price[total][total] = {0};

    // ===== OTHER =====
    int booking_count[total] = {0};
    int current_user = 0;

    // ===== PRE-FILLED BOOKINGS =====

    // ali bookings
    Booking[0][0] = "Pakistan";
    Booki_Price[0][0] = 100;

    Booking[0][1] = "Dubai";
    Booki_Price[0][1] = 400;

    // ahmed bookings
    Booking[1][0] = "Saudi";
    Booki_Price[1][0] = 300;

    // sara bookings
    Booking[2][0] = "Turkey";
    Booki_Price[2][0] = 200;

    // sara cancelled booking
    Deleted[2][0] = "Malaysia";
    Del_Price[2][0] = 500;

    count_entries(Username, user_count);
    count_entries(Destination, des_count);

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
            if (admin_login())
            {
                admin_panel(Username, User_Password, user_count,
                            Destination, Des_Price, des_count,
                            Booking, Booki_Price);
            }
        }
        else if (userOption == "2") // user registration options
        {
           user_portal(Username, User_Password, Destination, Des_Price, Booking, booking_count, Booki_Price, Deleted, Del_Price, current_user, user_count);

        }
        else if (userOption == "3") // exit loop
        {
            break; // exit loop
        }
        else // option invalidity
        {
            pause_and_return();
        }
    }

    cout << "Thanks for using this software!";
    return 0;
}
