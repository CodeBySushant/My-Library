#include<iostream>
#include<vector>
using namespace std;
unsigned long long catalan(int n){
    vector<unsigned long long> dp(n + 1, 0);
    dp[0] = 1;

    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }
    return dp[n];
}

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Catalan Number for n = "<<n<<" is "<<catalan(n)<<endl;
    return 0;
}