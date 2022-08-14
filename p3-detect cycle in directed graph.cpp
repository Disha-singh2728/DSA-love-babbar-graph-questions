//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool solve(int src,vector<int> &vis,vector<int>&order,vector<int>adj[]){
    vis[src]=1; // start from source node and make it visisted and order as true
    order[src]=1;
    for(auto x:adj[src]){ // traverse  adjacent nodes of source 
     if(!vis[x]) // if not visited
      {
       bool conf=solve(x,vis,order,adj); // check if cycle present or not
       if(conf==true) // if cycle present return tru
        return true;
      }
      else if(order[x]) return true; // if visited and order is also true i.e cycle is there
    }
    order[src]=0; // if order is not true for adjacent nodes  i.e we need to go back from this path , hence make order as false for source
    return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
    vector<int>vis(V,0);
    vector<int>order(V,0);
    for(int i=0;i<V;i++) // for all the vertices of graph
    {
      if(!vis[i]){  //check if visited is false
       bool c=solve(i, vis,order,adj); //the check if it is cycle or not
       if(c==true) // if cycle is true
        return true;// return true
      }
    }
    return false;// else false
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends