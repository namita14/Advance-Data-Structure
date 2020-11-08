/*
	WAP to demonstrate constructing binary search tree from given preorder and inorder sequence
*/
#include<iostream>
using namespace std;

typedef struct Binary_Search_Tree{
	struct Binary_Search_Tree *left;
	char data;
	struct Binary_Search_Tree *right;
}BST;

BST *newNode(char data){
	//create a new node
	BST *nnd = new BST;
	nnd->left = NULL;
	nnd->right = NULL;
	nnd->data = data;
	return nnd;
}

/*
	Function to print inorder traversal
*/
void inorder(BST *curr){
	if(curr != NULL){
		inorder(curr->left);
		cout<<curr->data<<" ";
		inorder(curr->right);		
	}
}

int search(char in[], int inStrt, int inEnd, char data){
	for(int i = inStrt; i <= inEnd; i++){
		if(in[i] == data)
			return i;
	}
}

BST *buildTree(char in[], char pre[], int inStrt, int inEnd){
	//for root element in the tree
	static int preIndex = 0;
	
	if(inStrt > inEnd){
		return NULL;
	}
	//create a new node with root element
	BST *tnode = newNode(pre[preIndex++]);
	//check if no child is there
	if(inStrt == inEnd)
		return tnode;
		
	//this code will look for data in inorder array and return the index
	int inIndex = search(in, inStrt, inEnd, tnode->data);
	//construct the tree using the left part of inorder array to inIndex
	tnode->left = buildTree(in, pre, inStrt, inIndex - 1);
	//construct the tree using the right part of inorder array to inIndex
	tnode->right = buildTree(in, pre, inIndex + 1, inEnd);
	return tnode;
}

int main(){
	char in[] = {'A','B','C','D','E','F','G'};
	char pre[] = {'D','B','A','C','F','E','G'};
	int len = sizeof(in)/sizeof(in[0]);
	BST *root = buildTree(in, pre, 0, len - 1);
	inorder(root);
	return 0;
}
