#include <iostream>
using namespace std;

string timeTravel(int Hours, int Minutes);

main()
{
    int Hours;
    cout << "Hours: ";
    cin >> Hours;
    int Minutes;
    cout << "Minutes: ";
    cin >> Minutes;
    string result = timeTravel(Hours, Minutes);
    cout << result;
}

string timeTravel(int Hours, int Minutes)
{

    if (Minutes + 15 > 59)
    {
        Minutes = Minutes + 15 - 60;
        Hours++;

        if (Hours > 23)
        {
            Hours=0;
        }
    }
    else
    {
        Minutes += 15;
    }
    string final_hour = to_string(Hours);
    string final_minute = to_string(Minutes);
    return final_hour + ":" + final_minute;
}