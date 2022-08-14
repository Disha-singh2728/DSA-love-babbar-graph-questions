#include<bits/stdc++.h>
using namespace std;
int main(){
int v,e;
cin>>v>>e;
int g[v+1][v+1]; // take a 2D matrix of v*v
for(int i=1;i<v+1;i++){   // intalize matrix with 0
  for(int j=1;j<v+1;j++)
    g[i][j]=0;
}
for(int i=0;i<e;i++){ // for edges which are connected make value at 1
  int x,y;
  cin>>x>>y;
  g[x][y]=1;
  g[y][x]=1;
}
for(int i=1;i<v+1;i++){  // print adjacency matrix
  cout<<i<<"-->";
  for(int j=1;j<v+1;j++)
    cout<<g[i][j]<<" ";
cout<<endl;
}
}