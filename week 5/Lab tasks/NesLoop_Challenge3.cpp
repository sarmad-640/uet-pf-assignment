#include <iostream>
using namespace std;

main(){

string st_name, c_name;
int pin, option, st_age, c_ballance=0, deposit, withdraw;


for(int i=0; i<3; i++){
cout<<"Enter PIN: ";
cin>>pin;
if(pin==1234){
    cout<<"Login Successful";
    for(int i=0; i<5; i++){
    cout<<"\n----------University Management System-----------\n";
    cout<<"1. Check Balace\n";
    cout<<"2. Deposit money\n";
    cout<<"3. Withdraw money\n";
    cout<<"4. Exit\n";

    cout<<"Choose an option: ";
    cin>>option;

    if(option == 1){
        cout<<"Current Balance: " <<c_ballance<<" Rs";

    }
    else if(option == 2){
        cout<<"Deposit amount: ";
        cin>>deposit;
        c_ballance+=deposit;

                    cout<<"Deposit Successfull";

    }
    else if(option == 3){
                    cout<<"withdraw amount: ";
            cin>>withdraw;
        if(withdraw<=c_ballance){


            c_ballance-=withdraw;
            cout<<"Widrawal Successfull";
        }else{
            cout<<"Insufficient balance";
        }
    }
    else if(option == 4){
        cout<<"Program ends!";
        break;
    }
    else{
        cout<<"Invalid option";
    }
}

    break;
}else{
    cout<<"Wrong PIN try again!\n";
}

if(i==3 && (pin!=1234)){
    cout<<"Too many wrong attempts!";
        cout<<"Program ends!";

}
}










}