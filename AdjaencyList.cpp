#include<iostream> 
#include<vector> 
using namespace std; 

//function to add edge in graph
void addEdge(vector<int> adj[], int u, int v){ 
	adj[u].push_back(v);
	adj[v].push_back(u);
} 

//function to display edge in graph
void showGraph(vector<int> adj[], int V){ 
	for (int i = 0; i < V; ++i){ 
		cout<<"\n Adjacency list of vertex "<<i<< "\n head "; 
		for (auto x : adj[i]) 
			cout << "-> " << x; 
		cout<<endl;
	} 
} 

int main(){
	//assume that we have four verices
	int V = 4; 
	//create an array of vector
	vector<int> adj[V]; 
	//calling the add edge function
	addEdge(adj, 0, 1); 
	addEdge(adj, 0, 2); 
	addEdge(adj, 0, 3); 
	addEdge(adj, 1, 2); 
	showGraph(adj, V); 
	return 0; 
}
