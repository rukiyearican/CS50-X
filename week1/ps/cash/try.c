#include <cs50.h>
#include <stdio.h>
#include <math.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = (quarters + dimes + nickels + pennies);

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int c;
    do
    {
        c = get_int("Enter the cents: ");
    }
    while (c < 0);
    return c;
}

int calculate_quarters(int cents)
{
    int quarters;
    quarters = cents / 25;
    printf("%i\n",quarters);
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes;
    dimes = cents / 10;
    printf("%i\n",dimes);
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickles;
    nickles = cents / 5;
    printf("%i\n",nickles);
    return nickles;
}

int calculate_pennies(int cents)
{
    int pennies;
    pennies = cents / 1;
    printf("%i\n",pennies);
    return pennies;
}
