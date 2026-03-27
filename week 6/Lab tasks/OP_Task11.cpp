#include <iostream>
using namespace std;

main(){

string arg;
cout<<"Enter a string: ";
getline(cin, arg );

string neew;
for(int i=0;arg[i]!='\0';i++){
    if(arg[i]!='a'&&arg[i]!='e'&&arg[i]!='i'&&arg[i]!='o'&&arg[i]!='u'&&arg[i]!='A'&&arg[i]!='E'&&arg[i]!='I'&&arg[i]!='O'&&arg[i]!='U'){
        neew+=arg[i];
    }
}
cout<<"String with vowels removed: "<<neew;
}




