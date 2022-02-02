#include <iostream>
using namespace std;
int main() 
{
 //variable definition
int penny_input;
int dollar_amount;
int dollar_rem;


//request penny input from the user
cout << "Please enter the penny amount: " << endl;
cin >> penny_input;

//process the users penny input
dollar_amount = penny_input / 100;
dollar_rem = penny_input % 100;

//Begin calculation for quarters
int quarter_amount = dollar_rem / 25;
int quarter_rem = dollar_rem % 25;

//begin calculation for dimes
int dime_amount = quarter_rem / 10;
int dime_rem = quarter_rem % 10;

//begin calculation for nickels
int nickel_amount = dime_rem / 5;
int nickel_rem = dime_rem % 5;

//begin calculation for pennies
int penny_amount = nickel_rem;

//display output
cout << "The dollar amount is = " << dollar_amount << endl;
cout << "The quarter amount is = " << quarter_amount << endl;
cout << "The dime amount is = " << dime_amount << endl;
cout << "The nickel amount is = " << nickel_amount << endl;
cout << "The pennies amount is = " << penny_amount << endl;


return 0;

   
}