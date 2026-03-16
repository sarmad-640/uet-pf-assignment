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









/* version 2 better logic 

#include<iostream>
using namespace std;

main()
{
    cout <<"Enter number [0 - 100]: ";
    int n;
    cin >> n;

    int tenth;
    tenth = n / 10;
    string a2;

    int ones;
    ones = n % 10;
    string a1;




    if(n == 0){ a1 = "Zero"; }
    if(ones == 1){ a1 = "One"; }
    if(ones == 2){ a1 = "Two";}
    if(ones == 3){ a1 = "Three";}
    if(ones == 4){ a1 = "Four"; }
    if(ones == 5){ a1 = "Five"; }
    if(ones == 6){ a1 = "Six";}
    if(ones == 7){ a1 = "Seven";}
    if(ones == 8){ a1 = "Eight";} 
    if(ones == 9){ a1 = "Nine";}
    if(n == 10){ a1 = "Ten";}

    if(n == 11){ a1= "Eleven";}
    if(n == 12){ a1= "Twelve";}
    if(n == 13){ a1= "Thirteen";}
    if(n == 14){ a1= "Fourteen";}
    if(n == 15){ a1= "Fiveteen";}
    if(n == 16){ a1= "Sixteen";}
    if(n == 17){ a1= "Seventeen";}
    if(n == 18){ a1= "Eighteen";}
    if(n == 19){ a1= "Nineteen";}

    if(tenth == 2){ a2 = "Twenty";}
    if(tenth == 3){ a2 = "Thirty";}
    if(tenth == 4){ a2 = "Forty"; }
    if(tenth == 5){ a2 = "Fivty"; }
    if(tenth == 6){ a2 = "Sixty";}
    if(tenth == 7){ a2 = "Seventy";}
    if(tenth == 8){ a2 = "Eighty";} 
    if(tenth == 9){ a2 = "Ninety";}
    if(tenth == 10){ a2= "Hundred";}

    cout <<a2<<" "<<a1;    
}


*/