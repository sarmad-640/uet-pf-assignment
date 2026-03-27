#include <iostream>
using namespace std;

main(){

cout<<"Enter the number of elements for the first array (must be 2): ";
int ele1;
cin>>ele1;
cout<<"Enter "<<ele1<<" elements for the first array, one per line: "<<endl;
int arr1[ele1];
cin>>arr1[0];
cin>>arr1[1];
// for(int i=0;i<ele1;i++){
//     cin>>arr1[i];
// }

cout<<"Enter the number of elements for the second array: ";
int ele2;
cin>>ele2;
cout<<"Enter "<<ele2<<" elements for the second array, one per line: "<<endl;
int arr2[ele2];
for(int i=0;i<ele2;i++){
    cin>>arr2[i];
}

int temp=arr1[1];
for(int i=1;i<=ele2;i++){
    arr1[i]=arr2[i-1];
}
arr1[ele2+1]=temp;

cout<<"Resulting array: ";
cout<<"[ ";
for(int i=0;i<ele2+2;i++){
    cout<<arr1[i]<<" ";
}
cout<<"]";





}









//slightly better approch
/*

#include <iostream>
using namespace std;

int main() {

    int arr1[2];
    cout << "Enter 2 elements for the first array:\n";
    for(int i = 0; i < 2; i++){
        cin >> arr1[i];
    }

    int ele2;
    cout << "Enter the number of elements for the second array: ";
    cin >> ele2;

    int arr2[100]; // fixed size (basic approach)
    cout << "Enter " << ele2 << " elements:\n";
    for(int i = 0; i < ele2; i++){
        cin >> arr2[i];
    }

    // Result array
    int result[102];

    // Step 1: first element
    result[0] = arr1[0];

    // Step 2: copy arr2
    for(int i = 0; i < ele2; i++){
        result[i + 1] = arr2[i];
    }

    // Step 3: last element of arr1
    result[ele2 + 1] = arr1[1];

    // Output
    cout << "Resulting array: [ ";
    for(int i = 0; i < ele2 + 2; i++){
        cout << result[i] << " ";
    }
    cout << "]";

    return 0;
}
    */