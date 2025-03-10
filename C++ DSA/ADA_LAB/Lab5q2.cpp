/* Q2> Write a program to implement Change – making problem using a greedy algorithm when (1) the cashier has only a limited number of coins. (2) the cashier has an unlimited supply of coins. The value of coins will be like (1,5,10,20,50…paise)*/

#include <iostream>
#include <vector>
using namespace std;

// Function to find the minimum number of coins needed (Unlimited Supply)
void changeMakingUnlimited(vector<int>& coins, int n, int amount) {
    cout << "\nChange Making Problem (Unlimited Coins)\n";
    cout << "Amount to change: " << amount << " paise\n";

    vector<int> count(n, 0);

    for (int i = n - 1; i >= 0; i--) {
        if (coins[i] <= amount) {
            count[i] = amount / coins[i];
            amount = amount % coins[i];
        }
    }

    if (amount != 0) {
        cout << "Change cannot be given with the available denominations!\n";
        return;
    }

    cout << "\nCoins used:\n";
    for (int i = n - 1; i >= 0; i--) {
        if (count[i] != 0)
            cout << coins[i] << " paise coin(s): " << count[i] << endl;
    }
}
