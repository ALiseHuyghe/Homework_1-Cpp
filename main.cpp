#include <iostream>
#include <iomanip>
#include "account.h"


int main()
{
    account myAccount = account(1, 100, 0, 0, 20); //we define an object of type account
    // parameters : number = 1, balance = 100, credit = 0, debit = 0, limit = 20
    myAccount.see_number();
    myAccount.modify_balance(); //the function to modify the account balance
    myAccount.see_balance();
    myAccount.see_credit();
    myAccount.see_debit();
    myAccount.see_limit();
    return 0;
}

