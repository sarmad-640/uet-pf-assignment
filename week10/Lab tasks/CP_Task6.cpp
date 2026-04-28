#include <iostream>
using namespace std;

string checkAlphabetCase(char ch);

main(){
    char ch;
    cout<<"char A or a: ";
    cin>>ch;
    string result = checkAlphabetCase(ch);
    cout<<result;
}

string checkAlphabetCase(char ch){
    
    if(ch=='A'){
        return "You have entered Capital A";
    }
    else if(ch=='a'){
        return "You have entered small A";

    }
}