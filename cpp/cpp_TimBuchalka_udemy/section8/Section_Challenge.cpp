/* Section 8 Challenge

For this program I will be using US dollars anf cents.

Write a program that asks the user to enter the following:
An interger representing the number of cents

You may assume that the number of cents entered is greater than or equal to zero

The program should then display how to provide that change to the user.

In the US:
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents, and
    1 penny is 1 cents

Here is a sample run:

Enter an amount in cents: 92

You can provide this change as follows:
dollars  : 0
quarters : 3
dimes    : 1
nickels  : 1
pennies  : 2

Fell free to use your own cyrrency system.
Also, think of how you might solve the problem using the modulo operator.

Have fun and test yout program!!
*/

#include <iostream>

using namespace std;

int main() {

    const int dollar_is_cents = 100;
    const int quarter_is_cents = 25;
    const int dime_is_cents = 10;
    const int nickel_is_cents = 5;
    const int penny_is_cents = 1;

    int change_amount;

    cout << "\nEnter an amount in cents: ";
    cin >> change_amount;

    int balance, dollars, quarters, dimes, nickels, pennies;

    dollars = change_amount / dollar_is_cents;
    balance = change_amount - (dollars * dollar_is_cents);

    quarters = balance / quarter_is_cents;
    balance -= quarters * quarter_is_cents;

    dimes = balance / dime_is_cents;
    balance -= dimes * dime_is_cents;

    nickels = balance / nickel_is_cents;
    balance -= nickels * nickel_is_cents;

    pennies = balance;

    cout << "\nYou can provide this change as follows:" << endl;
    cout << "dollars : " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes   : " << dimes << endl;
    cout << "nickels : " << nickels << endl;
    cout << "pennies : " << pennies << endl;

    cout << endl;
    return 0;
}
