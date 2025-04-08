#include<iostream>
#include<vector>
using namespace std;
const int INF = 1e9;

int minCoinsUnlimited(int amount, vector<int> &coins){
    vector<int> dp(amount + 1, INF);
    dp[0] = 0;
    for(int i=1; i<=amount; i++){
        for(int coin: coins){
            if(i>= coin && dp[i-coin] != INF){
                dp[i] = min(dp[i], dp[i-coin]+1);
            }
        }
    }
    return dp[amount] == INF? -1: dp[amount];
}

int minCoinsLimited(int amount, vector<int> &coins, vector<int> &counts){
    vector<int> dp(amount + 1, INF);
    dp[0] = 0;

    for(size_t i=0; i<coins.size(); i++){
        for(int j=amount; j>=0; j--){
            if(dp[j]!=INF){
                for(int k=1; k<=counts[i]; k++){
                    int next = j + k * coins[i];
                    if(next<=amount){
                        dp[next] = min(dp[next], dp[j] + k);
                    }
                }
            }
        }
    }
    return dp[amount] == INF ? -1: dp[amount];
}

int main(){
    vector<int> coins = {1, 5, 10, 20, 50};
    int amount;
    cout<<"Enter the amount(in paise): ";
    cin>>amount;

    int resultUnlimited = minCoinsUnlimited(amount, coins);
    if(resultUnlimited != -1)
        cout<<"Minimum coins needed (Unlimited Supply): "<<resultUnlimited<<endl;
    else
        cout<<"Cannot make change with unlimited coins."<<endl;

    vector<int> counts = {5, 2, 2, 1, 1};
    int resultLimited = minCoinsLimited(amount, coins, counts);
    if(resultLimited != -1)
        cout<<"Minimum coins needed (Limited Supply): "<<resultLimited<<endl;
    else
        cout<<"Cannot make change with limited coins."<<endl;

    return 0;
}
