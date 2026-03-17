#include <iostream>
using namespace std;

main(){
 
while(true){

   cout<<"-----MAIN MENU-----"<<endl;
   cout<<"1. Hello"<<endl;
   cout<<"2. Goodbye"<<endl;
   cout<<"3. Exit"<<endl;

   int choice;
   cout<<"Enter choice: ";
   cin>>choice;

   if(choice == 1){
      cout<<"Hello\n";
   }
   else if(choice == 2){
      cout<<"Goodbye\n";
   }
   else if(choice == 3){
      cout<<"Program end!\n";
      break;
   }
   else{
      cout<<"Enter a valid choice!\n";
   }
}





}
