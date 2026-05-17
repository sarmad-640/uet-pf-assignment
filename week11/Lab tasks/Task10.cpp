
#include <iostream>
using namespace std;

char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}
};
bool gravity = false;


void display_world()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void set_gravity_status(bool status)
{
    gravity = status;
}

void time_track(int times)
{
    if(gravity){


    while (times--)
    {
        // start from bottom so blocks dont overwrite incorrectly
        for (int row = 3; row >= 0; row--)     //Row 3 can move into row 4 Row 4 is ground → nothing below it
        {
            for (int col = 0; col < 5; col++)
            {
                if (objects[row][col] == '#')
                {
                    if (objects[row + 1][col] == '-')
                    {
                        // move block down
                        objects[row + 1][col] = '#';
                        objects[row][col] = '-';
                    }
                }
            }
        }
    }
        }
}

main()
{
    display_world();

    time_track(3);
    
    display_world();
    set_gravity_status(true);
    time_track(3);

    display_world();
}




