#include <iostream>

using namespace std;

class Account
{
private:
string accountName,accType,accNo;
int balance;
public:
     Account(string accountName, string accType, string accNo, int balance)
    {
        this->accountName = accountName;
        this->accType = accType;
        this->accNo = accNo;
        this->balance = balance;
    }
    Account()
    {
        cout<<"This is a non-parameterized constructor"<<endl;
    }



    void set_values(string accountName, string accType, string accNo, int balance)
    {
        this->accountName = accountName;
        this->accType = accType;
        this->accNo = accNo;
        this->balance = balance;
    }



    void get_values()
    {
        cout<<accountName<<'\t'<<accType<<'\t'<<accNo<<'\t'<<balance<<endl;
    }



    void deposit(int amount)
    {
        balance = balance+amount;
    }
    void withdraw(int amount)
    {
        balance = balance-amount;
    }
    void showAccDetails()
    {
        cout<<"Account Name : "<<accountName<<endl;
        cout<<"Account No : "<<accNo<<endl;
        cout<<"Account type : "<<accType<<endl;
        cout<<"Account Balance : "<<balance<<endl;



    }



        ~Account()
    {
        cout<<"This is a destructor"<<endl;
    }



};



int main()
{
    Account obj1("Amin","Student","1a2",5000);
    obj1.deposit(500);
    obj1.withdraw(1300);
    obj1.showAccDetails();




}
