#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

using namespace std;
class account
{
private:
   int num;
   int balance;
   int credit;
   int debit;
   int limit;
//An account has five parameters : its number, its balance, its credit, its debit and its limit.
public:
    account(int a, int b, int c, int d, int e) //The constructor of the class
    {
       num = a;
       balance = b;
       credit = c;
       debit = d;
       limit = e;
    }
//The methods see_... allow user to see the parameters of its account. They are more or less the same function with different names and printed sentences.
    void see_number()
    {
        cout << "\nYour number is " << num;
    }

     void see_balance()
    {
        cout << "\nYour balance is " << balance;
    }

     void see_credit()
    {
        cout << "\nYour total of credit is " << credit;
    }

     void see_debit()
    {
        cout << "\nYour total of debit is " << debit;
    }

     void see_limit()
    {
        cout << "\nYour limit is " << limit;
    }

    void modify_balance()  //to depose or take money = 2 cases.
    {
        int choice{0};

        while(choice != -1) //If you enter -1, you quit the menu
        {
            cout << "\nEnter 1 (credit) or 2 (debit) to continue or -1 to quit : ";
            cin >> choice;
            if (choice==1) //the user chooses credit
                {
                    int amount{0};
                    cout << "\nAmount ?";
                    cin  >> amount;

                    if (amount <= limit) //if the credit doesn't excess the limit
                        {
                            balance = balance - amount;
                            credit = credit + amount; //It's a credit, the parameter credit is modified
                        }
                    else
                        {
                            cout << "\nCredit Limit Exceeded";
                        }
                }
            else if (choice==2) //the user chooses debit
                {
                    int amount{0};
                    cout << "\nAmount ?";
                    cin  >> amount;

                    balance = balance + amount;
                    debit = debit + amount; //It's a debit, the parameter debit is modified
                }

    }

}};


#endif // ACCOUNT_H_INCLUDED
