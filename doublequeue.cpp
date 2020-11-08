/*
	WAP to demonstrate dequeue
*/
#include<iostream>
#include<queue>	//header file for queue and deque is same
using namespace std;

int main(){
	//create an object of deque
	deque<int> dq;
	dq.push_back(10);
	dq.push_front(5);
	dq.push_back(20);
	dq.push_front(1);
	dq.push_back(30);
	dq.push_front(0);
	
	for(auto it:dq){
		cout<<it<<" ";
	}
	cout<<endl;
	
	return 0;
}

