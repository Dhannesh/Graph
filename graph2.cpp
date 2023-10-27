#include<bits/stdc++.h>

using namespace std;

int main()
{
    int v,e;
    int a,b;
    cout<<"Enter total vertex and edges: ";
	cin>>v>>e;
	vector<int>adj[v];
	for(int i=0;i<e;i++){
		cout<<"Enter end points of edge"<<i+1<<": ";
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	cout<<"Adj list:"<<endl;
	for(int i=0;i<v;i++){
		cout<<i<<": ";
		for(auto j:adj[i]){
			cout<<j<<" ";
		}
		cout<<endl;
	}

    
}