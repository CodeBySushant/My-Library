#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

double calcReliablity(double base, int k){
    return 1.0 - pow(1.0 - base, k);
}

int main(){
    int n, budget;
    cout<<"Enter number of components: ";
    cin>>n;

    cout<<"Enter total bugdet: ";
    cin>>budget;

    vector<double> baseReliability(n);
    vector<int> cost(n);

    cout<<"Enter base reliability and cost for each components:\n";
    for(int i=0; i<n; i++){
        cout<<"Component "<<i+1<<"- Reliability (0 to 1): ";
        cin>>baseReliability[i];
        cout<<"Component "<<i + 1<<"- Cost per unit: ";
        cin>>cost[i];
    }

    vector<vector<double>> dp(n+1, vector<double>(budget + 1, -1e9));
    vector<vector<int>> red(n+1, vector<int>(budget + 1, 0));
    dp[0][0] = 0;

    for(int i=0; i<n; i++){
        for(int b=0; b<= budget; b++){
            if(int k =1; k<=10; k++)
        }
    }
    return 0;
}