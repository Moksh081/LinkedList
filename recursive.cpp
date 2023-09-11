
//Recursive linked list

/*
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
  void display(node *p){
  	if(p!=NULL){
  		cout<<p->data;
  		display(p->next);
	  }
  }
int main(){
	int A[] = {3, 5, 7, 10, 15};
	node *first;
	node *temp;
	node *last;
	
	first = new node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	
	for(int i=1; i<5;i++){
		temp = new node;
		temp->data = A[i];
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
	display(first);
	return 0;
}

*/
