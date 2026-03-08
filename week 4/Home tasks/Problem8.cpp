#include <iostream>
using namespace std;

main(){

int num;
cout<<"Enter number [0-100]: ";
cin>>num;
int num1 = num % 10;
string t1 = "",t2 = "";

if(num == 0){t1 = "zero";}

if(num1 == 1){t1 = "one";}
if(num1 == 2){t1 = "two";}
if(num1 == 3){t1 = "three";}
if(num1 == 4){t1 = "four";}
if(num1 == 5){t1 = "five";}
if(num1 == 6){t1 = "six";}
if(num1 == 7){t1 = "seven";}
if(num1 == 8){t1 = "eight";}
if(num1 == 9){t1 = "nine";}

if(num == 10){t1 = "ten";}
if(num == 11){t1 = "eleven";}
if(num == 12){t1 = "twelve";}
if(num == 13){t1 = "thirteen";}
if(num == 14){t1 = "fourteen";}
if(num == 15){t1 = "fifteen";}
if(num == 16){t1 = "sixteen";}
if(num == 17){t1 = "seventeen";}
if(num == 18){t1 = "eighteen";}
if(num == 19){t1 = "nineteen";}


if(num >= 20){t2 = "twenty";}
if(num >= 30){t2 = "thirty";}
if(num >= 40){t2 = "fourty";}
if(num >= 50){t2 = "fifty";}
if(num >= 60){t2 = "sixty";}
if(num >= 70){t2 = "seventy";}
if(num >= 80){t2 = "eighty";}
if(num >= 90){t2 = "ninghty";}

if(num == 100){t2 = "one hundred";}


cout<<t2<<" "<<t1;

}