#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,m;          //no. of nodes = n; no. of edges = m
    cin >> n >> m;

    int a,b;
    vector<vector<bool>> adjm(n,vector<bool>(n,0));         //adjacency matrix
    // Space Complexity: O(n*n); 
    vector<vector<int>> adjl(n);                            //adjacency list
    // Space Complexity: less than O(n*n), around O(m) as only required space is there not unnecessary ones

    for(int i=0;i<m;i++){
        cin >> a >> b;      //edge vertices
        adjm[a][b]=adjm[b][a]=1;
        adjl[a].push_back(b);
        adjl[b].push_back(a);
    }
}