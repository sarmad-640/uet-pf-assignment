#include <iostream>
#include <cstdlib>

using namespace std;

main()
{

    
        cout << "Enter choice(1-6): ";
        int choice;
        cin >> choice;

    while (choice!=6)
    {

        cout << "\n----------Library Management System-----------\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Clear Screen\n";
        cout << "6. Exit\n";

        cout << "Enter choice(1-6): ";
        cin >> choice;

        if (choice == true)
        {
            cout << "Enter first number: ";
            int num1;
            cin >> num1;
            cout << "Enter second number: ";
            int num2;
            cin >> num2;

            int result;
            if (choice == 1)
            {
                result = num1 + num2;
            }
            else if (choice == 2)
            {
                result = num1 - num2;
            }
            else if (choice == 3)
            {
                result = num1 * num2;
            }
            else if (choice == 4)
            {
                result = num1 / num2;
            }
            else if (choice == 5)
            {
                system("cls"); // clears terminal
                cout << "Screen cleared!";
            }
            else if (choice == 6)
            {
                cout << "Exiting Calculator. Goodbye!";
                break;
            }
        }
    }
}