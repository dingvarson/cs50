#include <cs50.h>
#include <stdio.h>
#include <math.h>

const int COUNT = 4;
int calculate_coins(int cents);
float get_change_amount ();
    int coin_value[] = {25, 10, 5, 1};



int main(void)
{
    float change=0;
    change = get_change_amount();
    // Convert change into in cents - round funtion didnt work. 
    int total_number_coins = 0; 
    int cents = change * 100;
    printf("%f %i \n", change, cents);
    total_number_coins = calculate_coins(cents);
    printf("total number of coins: %i \n", total_number_coins);
}
// 
float get_change_amount () 
{
    float change1 = 0;
    do
    {
        //prompt user for change
        change1 = get_float("how much change is owed: ");
    }
    while(change1 < 0);
    printf("%f \n", change1);
    return change1;
}
// Use array to control loop of coin values  
int calculate_coins(int cents) 
{       
    int n=0; 
    // Loop through the array 
    for(int i=0; i < COUNT; i++)
    {
        n = n + (cents / coin_value[i]);
        cents = cents % coin_value[i];     
        printf("%i %i %d \n", cents, n, coin_value[i]);
    }
    return n;
 
}
 
