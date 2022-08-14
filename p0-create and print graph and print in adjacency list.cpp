#include<bits/stdc++.h>
using namespace std;
int main(){
int v,e;  // take two variables for no. of vertex and edges
cin>>v>>e;  // take input from user for no. of vertex and edges
vector<int> g[v+1];  // make a graph of vertex v
for(int i=0;i<e;i++)
{
int x,y;  // no. of edges which are connected in undirected graph
cin>>x>>y;
g[x].push_back(y); // x connected to y, hence y connected to x in undirected graph
g[y].push_back(x);
}
// print the graph
for(int i=1;i<v+1;i++)
{
cout<<i<<"-->";
for(int j=0;j<g[i].size();j++)
  cout<<g[i][j]<<" ";
cout<<endl;
}
return 0;
}