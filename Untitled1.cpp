// tree traversal
#include<iostream>
using namespace std;
class node{
	public:
	
	int data;
	node* left;
	node* right;
	node(int d){
		this->data=d;
		this->left= NULL;
		this->right= NULL;
	}
};
	node* buildtree(node* root){
		
		cout<<"enter element "<<endl;
		int data;
		cin>>data;
		root = new node(data);
		if(data==-1){
			return NULL;
		}
		cout<<"enter the data for inserting in left of:"<<data<<endl;
		root->left=buildtree(root->left);//recursion call
		cout<<"enter the data for inserting  in right of:"<<data<<endl;
		root->right=buildtree(root->right);//recursion call right
		return root;
		
	}
	void levelorder(node* root){
		queue<node*> q;
		q.push(root);
		while(!q.empty()){
			node* temp = q.front();
			cout<<temp->data<<" ";
			q.pop();
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
	

int main(){
	node* root =NULL;
		root = buildtree(root);
		//levelorder
		//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
		levelorder(root);
		return 0;
}
