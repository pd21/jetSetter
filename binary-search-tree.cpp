#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* create(int data){
	Node* temp = new Node();
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void insert(Node* &root,int data){
	if(root == NULL){
		root = create(data);
	}
	else if( data > root->data){
		insert(root->right,data);
	}
	else{
		insert(root->left,data);
	}
}

void display(Node* root){
	if (root != NULL)
	{
		display(root->left);
		cout << root->data;
		display(root->right);
	}
}

int main() {
	// your code goes here
	Node* root = NULL;
	int n;
	cin >> n;
    int num;
    
    for(int j=0;j < n;j++){
    	cin >> num;
    	insert(root,num);
    }
	
	display(root);
	
	return 0;
}