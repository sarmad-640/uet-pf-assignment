#include <iostream>
#include <string>
#include <fstream>
#include <conio.h> // for getch()
using namespace std;

const int total = 100;
// int k = 0;

// ===== USERS =====
string Username[total];
string User_Password[total];
int user_count = 0;
void load_users()
{

    fstream file;
    file.open("users.txt", ios::in);
    string u, p;
    while (getline(file, u, ',') && getline(file, p))
    {
        Username[user_count] = u;
        User_Password[user_count] = p;
        user_count++;
    }
    file.close();
}

void save_user()
{
    fstream file;
    file.open("users.txt", ios::out);
    for (int i = 0; i < total; i++)
    {
        if (Username[i] != "")
        {
            file << Username[i] << "," << User_Password[i] << endl;
            // cout<<Username[i]<<","<<User_Password[i]<<endl;
        }
    }
    file.close();
}

// ===== DESTINATIONS =====
string Destination[total];
int Des_Price[total];
int des_count = 0;
void load_destinations()
{
    fstream getDes;
    getDes.open("destinations.txt", ios::in);
    string d;
    int p;
    while (getline(getDes, d, ',') && getDes >> p)
    {
        getDes.ignore(); // removes newline
        Destination[des_count] = d;
        Des_Price[des_count] = p;
        des_count++;
    }
    getDes.close();
}

void save_destination()
{
    fstream file;
    file.open("destinations.txt", ios::out);
    for (int i = 0; i < total; i++)
    {
        if (Destination[i] != "")
        {
            file << Destination[i] << "," << Des_Price[i] << endl;
        }
    }
    file.close();
}

// ===== OTHER =====
int current_user = 0;

// ===== BOOKINGS =====
string Booking[total][total] = {""};
int Booki_Price[total][total] = {0};
int booking_count[total] = {0};

void load_bookings()
{
    fstream file;
    file.open("bookings.txt", ios::in);
    string name, b;
    int bp;
    while (getline(file, name, ',') && getline(file, b, ',') && file >> bp)
    {
        file.ignore();
        for (int i = 0; i < total; i++)
        {
            if (name == Username[i])
            {
                int k=booking_count[i];
                Booking[i][k] = b;
                Booki_Price[i][k] = bp;
                booking_count[i]++;
                // break;
            }
        }
    }
    file.close();
}

void save_bookings()
{
    fstream file;
    file.open("bookings.txt", ios::out);
    for (int i = 0; i < total; i++)
    {
        for(int j=0;j<total;j++){
            if(Booking[i][j]!=""){
                file << Username[i] << ',' << Booking[i][j] << ',' << Booki_Price[i][j] << endl;

            }


        }
    }
    file.close();
}

// ===== DELETED BOOKINGS =====
string Deleted[total][total] = {""};
int Del_Price[total][total] = {0};

void load_deleted()
{
    fstream file;
    file.open("deleted.txt", ios::in);
    string name, b;
    int bp;
    while (getline(file, name, ',') && getline(file, b, ',') && file >> bp)
    {
        file.ignore();
        for (int i = 0; i < total; i++)
        {
            if (name == Username[i])
            {
                int k=booking_count[i];
                Deleted[i][k] = b;
                Del_Price[i][k] = bp;
                // del_count[i]++;
                // break;
            }
        }
    }
    file.close();
}
void save_deleted()
{
    fstream file;
    file.open("deleted.txt", ios::out);
    for (int i = 0; i < total; i++)
    {
        for(int j=0;j<total;j++){
            if(Deleted[i][j]!=""){
                file << Username[i] << ',' << Deleted[i][j] << ',' << Del_Price[i][j] << endl;

            }


        }
    }
    file.close();
}

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

void pause_and_return(string msg = "\n Press any key to return to previous menu!")
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
            cout << "\n Login successful!\n";
            pause_and_return(" Press any key to continue...\n");
            return true;
        }
        else // retry login
        {
            cout << "\n Invalid credentials.\n";
            loginAttemp++;
            pause_and_return(" Press any key to try again...\n");
        }
    }
    return false;
}

void view_users()
{
    cout << endl;
    int k = 0;
    for (int i = 0; i < user_count; i++)
    {
        if (Username[i] != "")
        {
            k++;
            cout << " User " << k << ": " << Username[i] << endl;
            cout << " Password for " << Username[i] << ": " << User_Password[i] << endl;
        }
    }
}

void delete_user()
{
    cout << "\n All Users:------------------------------";
    view_users();
    cout << "\n Enter the user name you want to delete: ";
    string user_name;
    cin >> user_name;
    bool del = false;
    for (int i = 0; i < user_count; i++)
    {
        if (user_name == Username[i])
        {
            for (int j = i; j < user_count; j++)
            {
                Username[j] = Username[j + 1];
                User_Password[i] = User_Password[j + 1];
            }
            del = true;
            user_count--;
        }
    }
    if (del)
    {
        cout << " User Deleted Successfully!";
        save_user();
    }
    else
    {
        cout << "\n User Deletion Unsuccessful!";
        cout << "\n Check if you entered correct user name and try...";
    }
}

void view_destiations()
{
    cout << endl;
    int k = 0;
    cout << " Destinations                   Price\n";
    for (int i = 0; i < total; i++)
    {
        if (Destination[i] != "")
        {
            k++;
            cout << " " << k << ". " << Destination[i] << "                   " << Des_Price[i] << "pkr" << endl;
        }
    }
}

void addDestination()
{
    cout << "\n Enter the number of Destinations to add: ";
    int add_count;
    cin >> add_count;
    for (int i = 0; i < add_count; i++)
    {
        cout << " Enter the destination name and price: ";
        cin >> Destination[des_count] >> Des_Price[des_count];
        des_count++;
    }
    cout << " Added successfully!\n";
    save_destination();

    pause_and_return();
}

void delete_destination()
{
    cout << "\n Enter the Destination name to delete or to exit enter -1: ";
    string del_dest;
    cin >> del_dest;
    if (del_dest != "-1")
    {
        for (int i = 0; i < des_count; i++)
        {
            if (del_dest == Destination[i])
            {
                for (int j = i; j < des_count; j++)
                {
                    Destination[j] = Destination[j + 1];
                    Des_Price[j] = Des_Price[j + 1];
                }
                des_count--;
            }
        }
        cout << " Destination Deleted Successfully!\n";
        save_destination();
    }
}

void viewAllBookings()
{
    cout << endl;
    int k = 0;
    cout << " Users                  Bookings" << endl;

    for (int i = 0; i < total; i++)
    {
        for (int j = 0; j < total; j++)
        {
            if (Username[i] != "")
            {
                if (Booking[i][j] != "")
                {
                    k++;
                    // cout << " Record " << k << ": " << Username[i] << endl;
                    // cout << " Bookings for " << Username[i] << ":" << Booking[i][j] << endl;
                    cout << " " << k << ". " << Username[i] << "                   " << Booking[i][j] << endl;
                }
            }
        }
    }
}

void delete_booking_by_admin()
{

    cout << "\n Enter user name followed by the booking name you want to delete: ";
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
    bool del = false;
    for (int i = 0; i < total; i++)
    {
        if (temp_booking_name == Booking[user][i])
        {
            booking_name = i;
            del = true;
            break;
        }
        else
        {
            del = false;
        }
    }
    if (del)
    {
        Booking[user][booking_name] = "";
        Booki_Price[user][booking_name] = 0;
        cout << " Successfully removed!\n";
        save_deleted();
        save_bookings();
    }
    else
    {
        cout << " Operation unuccessfull check if the record exist!\n";
    }
}

void viewTotalUsers()
{
    cout << " Total Users: " << user_count;
}

void view_total_bookings()
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

    cout << " Total Bookings: " << total_bookings << endl;
}

void register_user()
{
    cout << endl;
    cout << " Register username: ";
    cin >> Username[user_count];
    cout << " Register Password: ";
    cin >> User_Password[user_count];

    cout << " User " << Username[user_count] << " registered successfully!\n";
    user_count++;

    save_user();
}

bool login_user()
{
    cout << endl;
    bool a = false;
    cout << " Enter username: ";
    string username;
    cin >> username;
    cout << " Enter Password: ";
    string user_password;
    cin >> user_password;
    for (int i = 0; i < total; i++)
    {
        if (username == Username[i] && user_password == User_Password[i])
        {
            current_user = i;
            cout << "\n Login Successful! \n";
            pause_and_return(" Press any key to continue...");
            a = true;
            return a;
        }
    }
    return a;
}

void view_profile()
{
    cout << " Username: " << Username[current_user] << endl;
    cout << " Password: " << User_Password[current_user] << endl;
    int j = 0;
    for (int i = 0; i < total; i++)
    {
        if (Booking[current_user][i] != "")
        {
            j++;
            booking_count[current_user] = j;
        }
    }
    cout << " Total Bookings " << booking_count[current_user] << endl;
}

void viewBookingHistory()
{
    cout << "\n Current Bookings:-------------\n";
    int k = 0;
    cout << " Destination                  Price" << endl;
    for (int i = 0; i < total; i++)
    {
        if (Booking[current_user][i] != "")
        {
            k++;
            cout << " " << k << ". " << Booking[current_user][i] << "                   " << Booki_Price[current_user][i] << endl;
        }
    }

    cout << "\n Canceled Bookings:-------------\n";
    k = 0;
    cout << " Destination                  Price" << endl;

    for (int i = 0; i < total; i++)
    {
        if (Deleted[current_user][i] != "")
        {
            k++;
            cout << " " << k << ". " << Deleted[current_user][i] << "                   " << Del_Price[current_user][i] << endl;
        }
    }
}

void change_password()
{
    cout << "\n Enter current password: ";
    string temp_pass;
    cin >> temp_pass;
    if (temp_pass == User_Password[current_user])
    {
        string new_pass;
        cout << " Enter new password: ";
        cin >> new_pass;
        User_Password[current_user] = new_pass;
    }
    else
    {
        cout << "\n Current password is not correct try again!\n ";
    }
}

void search_destination()
{
    int k = 0;
    string dest_name;
    cout << "\n Enter the name of the destination: ";
    cin >> dest_name;
    for (int i = 0; i < total; i++)
    {
        if (dest_name == Destination[i])
        {
            k++;
            cout << " " << k << ". " << Destination[i] << "   " << Des_Price[i] << endl;
        }
    }
}

void bookTrip()
{
    view_destiations();

    // int empty_slot = -1;
    // for (int i = 0; i < total; i++)
    // {
    //     if (Booking[current_user][i] == "")
    //     {
    //         empty_slot = i;
    //         break;
    //     }
    // }
    string name;
    cout << "\n Enter the name of the destination to book: ";
    cin >> name;
    bool found=false;
for(int i=0;i<total;i++){
    if(name==Destination[i]){
        Booking[current_user][booking_count[current_user]]=Destination[i];
        Booki_Price[current_user][booking_count[current_user]]=Des_Price[i];
        booking_count[current_user]++;
        found=true;
    }
}
if(found){
    cout << " Booking Successfull!\n";
    save_bookings();

}else{
    cout << " Select a valid destination!\n";

}



    // if (Destination[select_pack - 1] != "")
    // {
    //     Booking[current_user][empty_slot] = Destination[select_pack - 1];
    //     Booki_Price[current_user][empty_slot] = Des_Price[select_pack - 1];
    // }
    // else
    // {
    // }
}

void view_my_bookings()
{
    cout << " Booking                  Price" << endl;

    int k = 0;
    for (int i = 0; i < total; i++)
    {
        if (Booking[current_user][i] != "")
        {
            k++;
            cout << " " << k << ". " << Booking[current_user][i] << "                   " << Booki_Price[current_user][i] << "pkr" << endl;
        }
    }
}

void cancelBooking()
{
    string del_pack;
    cout << " Enter the name of the Booking to delete or to exit enter -1: ";
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
                cout << "\n Booking for " << Booking[current_user][i];
                Deleted[current_user][empty_slot] = Booking[current_user][i];
                Booking[current_user][i] = "";
                Del_Price[current_user][empty_slot] = Booki_Price[current_user][i];
                Booki_Price[current_user][i] = 0;
                cout << " Cancelled Successfully! ";
                save_deleted();
                save_bookings();
            }
        }
    }
}

void manage_users_menu()
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
            view_users();
            pause_and_return("\n Press any key to continue...");
        }
        else if (Manage_UserOption == "2")
        {
            delete_user();
            pause_and_return("\n\n Press any key to continue...");
        }
        else if (Manage_UserOption == "3")
        {
            break;
        }
        else // option invalidity
        {
            pause_and_return("\n Invalid option selected press any key to try again! ");
        }
    }
}

void manageDestinationsMenu()
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
            addDestination();
        }
        else if (Manage_UsersOption == "2")
        {
            view_destiations();
            pause_and_return();
        }
        else if (Manage_UsersOption == "3")
        {
            view_destiations();
            delete_destination();

            pause_and_return();
        }
        else if (Manage_UsersOption == "4")
        {
            break;
        }
        else // option invalidity
        {
            pause_and_return("\n Invalid option selected press any key to try again! ");
        }
    }
}

void manageBookingsMenu()
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
            viewAllBookings();
            pause_and_return();
        }
        else if (Manage_PackagesOption == "2")
        {

            viewAllBookings();

            delete_booking_by_admin();

            pause_and_return();
        }
        else if (Manage_PackagesOption == "3")
        {
            break;
        }
        else // option invalidity
        {
            pause_and_return("\n Invalid option selected press any key to try again! ");
        }
    }
}

void statistics_menu()
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
            viewTotalUsers();
            pause_and_return();
        }
        else if (statsOption == "2")
        {
            view_total_bookings();
            pause_and_return("\nPress any key to continue...");
        }
        else if (statsOption == "3")
        {
            break;
        }
        else // option invalidity
        {
            pause_and_return("\n Invalid option selected press any key to try again! ");
        }
    }
}

void admin_panel()
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
            manage_users_menu();
        }
        else if (adminOption == "2") // Manage Packages & Destinations
        {
            manageDestinationsMenu();
        }
        else if (adminOption == "3") // manage bookings
        {
            manageBookingsMenu();
        }
        else if (adminOption == "4") // view stats
        {
            statistics_menu();
        }
        else if (adminOption == "5") // logout admin
        {
            cout << "\n Logout Success!\n";
            pause_and_return(" Press any key to return to main menu...\n");
            break;
        }
        else // option invalidity
        {
            pause_and_return("\n Invalid option selected press any key to try again! ");
        }
    }
}

void userDashboardMenu()
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
            view_profile();

            pause_and_return();
        }
        else if (DashboardOption == "2")
        {
            viewBookingHistory();

            pause_and_return();
        }
        else if (DashboardOption == "3")
        {
            change_password();
            pause_and_return();
        }
        else if (DashboardOption == "4")
        {
            break;
        }
        else // option invalidity
        {
            pause_and_return("\n Invalid option selected press any key to try again! ");
        }
    }
}

void packagesMenu()
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
            view_destiations();

            pause_and_return();
        }
        else if (Browse_PackageOption == "2")
        { // Search Destinations
            search_destination();
            pause_and_return();
        }
        else if (Browse_PackageOption == "3")
        { // Book Trip
            bookTrip();

            pause_and_return();
        }
        else if (Browse_PackageOption == "4")
        { // View My Bookings
            view_my_bookings();

            pause_and_return();
        }
        else if (Browse_PackageOption == "5")
        { // Cancel My Bookings
            view_my_bookings();

            cancelBooking();

            pause_and_return();
        }
        else if (Browse_PackageOption == "6")
        {
            break;
        }
        else // option invalidity
        {
            pause_and_return("\n Invalid option selected press any key to try again! ");
        }
    }
}

void user_menu()
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
            userDashboardMenu();
        }
        else if (UserOption == "2") // Packages and Booking
        {
            packagesMenu();
        }
        else if (UserOption == "3") // logout user
        {
            cout << " Logout Success!\n";
            pause_and_return();
            break;
        }
        else // option invalidity
        {
            pause_and_return("\n Invalid option selected press any key to try again! ");
        }
    }
}
void user_portal()
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
            register_user();

            pause_and_return();
        }
        else if (Register_UserOption == "2")
        { // login user
            if (login_user())
            {
                user_menu();
            }
            else
            {
                cout << "Wrong login credentials! \n";
                pause_and_return("Try again...");
            }
        }
        else if (Register_UserOption == "3")
        { // back
            break;
        }
        else // option invalidity
        {
            pause_and_return("\n Invalid option selected press any key to try again! ");
        }
    }
}

int main()
{

    load_users();
    load_destinations();
    load_bookings();
    load_deleted();
    // ===== PRE-FILLED BOOKINGS =====

    // ali bookings

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
                admin_panel();
            }
        }
        else if (userOption == "2") // user registration options
        {
            user_portal();
        }
        else if (userOption == "3") // exit loop
        {
            break; // exit loop
        }
        else // option invalidity
        {
            pause_and_return("\n Invalid option selected press any key to try again! ");
        }
    }

    cout << "Thanks for using this software!";
    return 0;
}
