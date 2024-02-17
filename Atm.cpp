//write a program to impliment atm
#include<iostream>
#include<windows.h>
using namespace std;
class temp1
{
    public:
    void menu()
    {
        system("color 17");
        cout<<endl<< "***********  Welcome to ATM ************" << endl;
        cout<<endl<<"1->Balance\t\t";
        cout<<"2->WithDraw"<<endl;
        cout<<"3->User details\t\t";
        cout<<"4->Update Number"<<endl;
        cout<<"5->Exit"<<endl;
        cout<< "****************************************" << endl;
    }
};
class atm
{
    long long phNumber;
    string name;
    int pin;
    long balance;
    long long acNumber;
    public:
    atm();
    
    atm(long long phNUmber1,long long acNumber1,string name1,int pin1,long balance1);
   
    void chBalance();
    void withCash();
    void userDetails();
    void updateNumber();
    long long acNumreturn();
    int pinreturn();
};

long long atm::acNumreturn()
{
    return acNumber;
}

int atm:: pinreturn()
{
    return pin;
}
atm::atm()
{
    phNumber=0000000000;
    acNumber=0000000000;
    name="Not found";
    pin=0000;
    balance=0;
}

atm::atm(long long phNumber1,long long acNumber1,string name1,int pin1,long balance1)
{
    phNumber=phNumber1;
    acNumber=acNumber1;
    name=name1;
    pin=pin1;
    balance=balance1;
}
void atm::chBalance()
{
    cout<<"Balance:"<<balance;
}

void atm::withCash()
{
    long value;
    cout<<"Amount:";
    cin>>value;
    cout<<"Collect Cash"<<endl;
    balance=balance-value;
    cout<<"Balance:"<<balance<<endl;
}

void atm::userDetails()
{
    cout<<"User details:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Account Number:"<<acNumber<<endl;
    cout<<"Phone Number:"<<phNumber<<endl;
}


void atm::updateNumber()
{
    long long phNumberValidation;
    cout<<"Enter Previous Number:";
    cin>>phNumberValidation;
    if(phNumber==phNumberValidation)
    {
        cout<<"Enter new number:";
        cin>>phNumber;
    }
    else
    {
        cout<<"Invalid number..."<<endl;
    }
    
}

int main()
{
    system("color 4");
    system("cls");
    atm data1(7082955076,1212213011024,"shushant",1111,54000);
    temp1 datatemplate;
    long long acNumberValidation=0;
    int choice;
    int pinValidation=0;
    cout<<"Enter Account number:";
    cin>>acNumberValidation;
    cout<<"Enter pin:";
    cin>>pinValidation;
    system("cls");
    if((data1.acNumreturn()==acNumberValidation) && (data1.pinreturn()==pinValidation))
    {
        do
        {
            datatemplate.menu();

            cout<<"Enter your choice:";
            cin>>choice;
            system("cls");
            switch(choice)
            {
                case 1:
                    data1.chBalance();               
                break;

                case 2:
                    data1.withCash();
                break;

                case 3:
                    data1.userDetails();
                break;

                case 4:
                    data1.updateNumber();
                break;

                case 5:
                exit(0);
                break;

                default:
                cout<<"Invalid operation...";
                break;
            }

        } while (choice!=5);
    }   
    else
    {
        cout<<endl;
        cout<<"Invalid account number or password...";
        cout<<endl;
    }
    
}