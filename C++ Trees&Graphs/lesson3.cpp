#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];

vector<vector<int>> conn_comp;

vector<int> curr_conn_comp;

bool vis[N];
// O(V+E) is the time complexity

/*  void dfs(int vertex){
        // Take action on vertex after entering the vertex.
        // cout << vertex << endl;
        vis[vertex] = true;
        curr_conn_comp.push_back(vertex);
        for(int child : g[vertex]){
            cout << "Par" << vertex << ", Child: " << child << endl; 
            if(vis[child]) continue;
            // Take action on child before entering the child node.
            dfs(child);
            // Take action on child after exiting the child node.
        }
        // Take action on vertex before exiting the vertex.
}
*/

/*  DFS code to count connected component    */
/*  int main(){
    int no_of_vertices = 8, no_of_edges = 5;
    for(int i = 0; i < no_of_edges; i++){
        int v1,v2;
        cin >> v1 >> v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int count = 0;
    for(int i = 1; i <=no_of_vertices ; i++){
        if(vis[i]) continue;
        dfs(i);
        count++;
    }
    cout << count << endl;*/
/*  DFS code to store connected component    
int main(){
    int no_of_vertices = 8, no_of_edges = 5;
    for(int i = 0; i < no_of_edges; i++){
        int v1,v2;
        cin >> v1 >> v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int count = 0;
    for(int i = 1; i <=no_of_vertices ; i++){
        if(vis[i]) continue;
        curr_conn_comp.clear();
        dfs(i);
        conn_comp.push_back(curr_conn_comp);
        count++;
    }
    cout << conn_comp.size() << endl;
        for(auto curr_cc : conn_comp){
            for(int vertex : curr_cc){
                cout << vertex << " ";
            }
            cout << endl;
        }

}*/
/*****   Cycle Detection in DFS   *****/
bool dfs(int vertex, int par){
    
    vis[vertex] = true;
    bool isLoopExists = false;
    for(int child : g[vertex]){
        if(vis[child] && child == par) continue;
        if(vis[child]) return true;

        isLoopExists |= dfs(child,vertex);
    }
    return isLoopExists;
}
int main(){
    int no_of_vertices = 8, no_of_edges = 5;
    for(int i = 0; i < no_of_edges; i++){
        int v1,v2;
        cin >> v1 >> v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);        
    }
    bool isLoopExists = false;
    for(int i = 1; i < no_of_vertices; i++){
        if(vis[i]) continue;
        if(dfs(i,0)){
            isLoopExists = true;
            break;
        }
    }
    cout << isLoopExists;
}
