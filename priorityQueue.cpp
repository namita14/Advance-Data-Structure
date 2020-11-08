#include<iostream>
#include<queue>
using namespace std;

/*
	function to display the priority queue content
*/
void displayPQ(priority_queue<int> temp){
	while(!temp.empty()){
		//printing the top element
		cout<<temp.top()<<" ";
		//remove the top element i.e. the element with highest priority
		temp.pop();
	}
	cout<<endl;
}

int main(){
	//create objects of priority_queue
	priority_queue<int> pq;
	
	//add some elements
	pq.push(10);
	pq.push(5);
	pq.push(20);
	pq.push(1);
	pq.push(100);
	pq.push(0);
	
	displayPQ(pq);
	
	return 0;
}
