#include <iostream>
using namespace std;

main(){

//commented code is for debugging purpose

string s1;  
cout<<"Enter a string: ";
cin>>s1;

char c;
int ascii;
string s2;
char c2;
for(int i=0;s1[i]!='\0';i++){
c = s1[i];
ascii = c;
// cout << "The ASCII code for " << c << " is " <<ascii<< endl;
c2=ascii+1;
// cout << "The 2nd ASCII code for " << c2 << " is " <<ascii+1<< endl;
s2+=c2;
// cout<<"Shifted string: "<<endl<<s2[i];
}


cout<<"Shifted string: "<<s2;










}