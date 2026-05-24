/* DFS */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool vis[N];
// O(V+E) is the time complexity
void dfs(int vertex){
    // Take action on vertex after entering the vertex.
    // cout << vertex << endl;
    vis[vertex] = true;
    for(int child : g[vertex]){
        cout << "Par" << vertex << ", Child: " << child << endl; 
        if(vis[child]) continue;
        // Take action on child before entering the child node.
        dfs(child);
        // Take action on child after exiting the child node.
    }
    // Take action on vertex before exiting the vertex.
}

int main(){
    int no_of_vertices = 6, no_of_edges = 9;
    for(int i = 0; i < no_of_edges; i++){
        int v1,v2;
        cin >> v1 >> v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
}