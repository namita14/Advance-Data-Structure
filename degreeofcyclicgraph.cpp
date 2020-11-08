#include <bits/stdc++.h> 
using namespace std; 
  
// function that calculates the 
// number of Edge in a cycle graph. 
int getnumberOfEdges(int numberOfVertices) 
{ 
    int numberOfEdges = 0; 
  
    // The numberOfEdges of the cycle graph 
    // will be same as the numberOfVertices 
    numberOfEdges = numberOfVertices; 
  
    // return the numberOfEdges 
    return numberOfEdges; 
} 
  
// function that calculates the degree 
int getDegree(int numberOfVertices) 
{ 
    int degree; 
  
    // The degree of the cycle graph 
    // will be twice the numberOfVertices 
    degree = 2 * numberOfVertices; 
  
    // return the degree 
    return degree; 
} 
  
// Driver code 
int main() 
{ 
  
    // Get the number of vertices 
    int numberOfVertices; 
    cin>>numberOfVertices;
  
    // Find the numberOfEdges and degree 
    // from the numberOfVertices 
    // and print the result 
    cout << "For numberOfVertices = "<< numberOfVertices ;
    cout<< "\nDegree = "<<getDegree(numberOfVertices);
    cout<< "\nNumber of Edges = "<< getnumberOfEdges(numberOfVertices); 
  
    return 0; 
} 
