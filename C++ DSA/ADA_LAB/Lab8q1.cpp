#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>graph;
    graph = {{0,1,2,0,0,0}, {0, 0, 0, 3, 4, 0}, {0, 0, 0, 0, 0, 6}, {0, 0, 0, 0, 0, 1}, {0, 0, 0, 0, 0, 2}};
    int n = graph.size();
    vector<int>cost(n, INT_MAX);
    vector<int>path(n, -1);
    cost[n-1] = 0;
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<n; j++){
            if(graph[i][j]!=0 && cost[j]!=INT_MAX){
                int newcost = graph[i][j] + cost[j];
                if(new < cost[i]){
                    cost[i] = newcost;
                    path[i] = j;
                }
            }
            cout<<"Min cost from source to destination: "<<cost[0]<<endl;
            cout<<"Path : ";
            int node =0;
            while(node!=-1){
                cout<<node;
                if(path[node]!=-1){
                    cout<<"->";
                    node = path[node];
                }
            }
        }
        return 0;
    }
}