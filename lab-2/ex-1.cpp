/*Suppose you have a Savings Account with an initial amount of 500 and you
have to add some more amount to it. Create a class ’AddMoney’ with a data
member named ’amount’ with an initial value of 500. Now make a constructor 
of a class without any parameter*/

#include<iostream>
using namespace std;

class AddMoney{
    private :
        double amount;
    public :
        AddMoney() {
            amount = 500;
        }

        AddMoney(double additionalAmount){
            amount = 500 + additionalAmount;
        }
        void displayAmount() {
            cout<<"Final amount : "<<amount<<endl;
        }
};

int main()
{
    //object without any added amount
    AddMoney account1;
    account1.displayAmount();

    //object with an added amount
    AddMoney account2(200);
    account2.displayAmount();

    return 0;
}