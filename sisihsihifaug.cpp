

# include<iostream>
using namespace std;

class Node{
int key;
int data;
Node*next;
	Node(){
		key = 0;
		data = 0;
		next = NULL;
	}
	
	Node(int k, int d){
		
		key = k;
		data = d;
	}
	
	Node *nodeExists(int k){
		
		Node*temp = NULL;
		Node *ptr = NULL;
		while(ptr!=NULL){
			if(ptr->key = k){
				temp = ptr;
			}
			ptr = ptr->next;
		}
		return temp;
	}
};

int main(){
	return 0;
}