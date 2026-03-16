#include <iostream>
using namespace std;
#include <iomanip>

main(){
   cout<<"Enter number count: ";
   int num_count=1;
   cin>>num_count;
int range1=0,range2=0,range3=0,range4=0,range5=0;
if(num_count>=1 && num_count<=1000){
   for(int i=0; i<num_count;i++){
         int num;
         cout<<"Enter a number: ";
         cin>>num;

         if(num>=1 && num<=199){
            range1++;
         }
         else if(num>=200 && num<=399){
            range2++;
         }
         else if(num>=400 && num<=599){
            range3++;
         }
         else if(num>=600 && num<=799){
            range4++;
         }
         else if(num>=800 && num<=1000){
            range5++;
         }
      }
   }

float percentage1 = (range1*100.0)/num_count; //converting the numenator to float value as both the variables are integers otherwise we could have done like (range1/num_count)*100
float percentage2 = (range2*100.0)/num_count;
float percentage3 = (range3*100.0)/num_count;
float percentage4 = (range4*100.0)/num_count;
float percentage5 = (range5*100.0)/num_count;

cout << fixed << setprecision(2);
cout<<percentage1<<"%"<<endl;
cout<<percentage2<<"%"<<endl;
cout<<percentage3<<"%"<<endl;
cout<<percentage4<<"%"<<endl;
cout<<percentage5<<"%"<<endl;
   


/*
fixed stops scientific notation and keeps decimal form.

setprecision(2)
With fixed: it sets the number of digits after the decimal point.

Without fixed: it sets the total number of significant digits.
*/

}
