#include <iostream>
using namespace std;

void largest_column_first(int arr[][5], int row_size)
{

    int largest = 0;
    int largest_column;

    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < row_size; j++)
        {
            sum += arr[j][i];
        }
        if (largest < sum)
        {
            largest = sum;
            largest_column = i;
        }
    }


    for(int i=0;i<row_size;i++){
        int temp;
        temp=arr[i][0];
        arr[i][0]=arr[i][largest_column];
        arr[i][largest_column]=temp;
    }

        cout << "matrix after largest column moved to first: \n ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

}
main()
{

    cout << "Enter row size:";
    int row_size;
    cin >> row_size;

    int arr[row_size][5];

    cout << "Enter the element of matrix: \n ";
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter the element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "Your matrix: \n ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    largest_column_first(arr, row_size);
}
