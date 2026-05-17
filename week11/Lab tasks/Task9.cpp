#include <iostream>
using namespace std;

void identical_rows(int arr[][3], int row_size)
{
    int identical =0 ;
    for(int i=0;i<row_size;i++){
        bool duplicate = false;
        for(int j=i+1;j<row_size;j++){
            bool t=true;
            for(int k=0;k<3;k++){
                if(arr[i][k]!=arr[j][k]){
                    t=false;
                    break;
                }
            }
            if(t){
                duplicate=true;
                break;
            }
        }
        if(duplicate){
            identical+=2;
        }
    }
    cout<<endl<<identical;
}
main()
{

    cout << "Enter row size:";
    int row_size;
    cin >> row_size;

    int arr[row_size][3];

    cout << "Enter the element of matrix: \n ";
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "Your matrix: \n ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    identical_rows(arr, row_size);
}
