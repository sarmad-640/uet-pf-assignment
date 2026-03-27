#include <iostream>
using namespace std;

main(){

char word[100];
cout<<"Enter a word: ";
cin>>word;


int len=0;
for(int i=0;word[i]!='\0';i++){
    len++;
}
for(int i=len-1;i>=0;i--){
        cout<<word[i];

}











}