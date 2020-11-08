/*
Problem: Given a undirected Graph of N vertices 1 to N and M edges in form of 2D array 
arr[][] whose every row consists of two numbers X and Y which denotes that there is an 
edge between X and Y, the task is to write C program to create Adjacency Matrix of the 
given Graph.

Input: N = 5, M = 4, arr[][] = { { 1, 2 }, { 2, 3 }, { 4, 5 }, { 1, 5 } }

Output:
0 1 0 0 1
1 0 1 0 0
0 1 0 0 0
0 0 0 0 1
1 0 0 1 0
*/
#include<iostream>
using namespace std;
#define N 5	//for number of vertices
int M;	//for number of edges

/*
	function to create adjacency matrix from array
*/
void createAdjMat(int Adj[][N+1], int arr[][2]){
	//Adj is a matricx of N x N order
	//first initialize everything with 0
	for(int i = 0; i <= N; i++){
		for(int j = 0; j <= N; j++){
			Adj[i][j] = 0;
		}
	}
	
	//set data according to the edges
	for(int i = 0;i < M; i++){
		int start = arr[i][0];
		int end = arr[i][1];
		
		Adj[start][end] = 1;
		Adj[end][start] = 1;
	}
}

/*
	
*/
void diaplyArr(int Adj[][N+1]){
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			cout<<Adj[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int arr[][2] = { { 1, 2 }, { 2, 3 }, { 4, 5 }, { 1, 5 } };
	M = sizeof(arr)/sizeof(arr[0]);
	
	//Create an adjacency matrix here
	int Adj[N+1][N+1];
	
	createAdjMat(Adj, arr);
	diaplyArr(Adj);
	
	return 0;
}
