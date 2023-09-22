//merging 

/*
 #include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
node *first = NULL;
	node *second = NULL;
 void merg(){
 	node* third;
 	node* last;
 	if(first->data < second->data){
 		third = first;
 		last = first;
 		first = first->next;
 		last->next = NULL;
	 }else{
	 	third = second;
	 	last = second;
	 	second = second->next;
	 	last->next = NULL;
	 }
	 while(first!=NULL && second!=NULL){
	 	if(first->data<second->data){
	 		last->next = first;
	 		last = first;
	 		first = first->next;
	 		last->next = NULL;
		 }else{
		 		last->next = second;
	 		last = second;
	 		second = second->next;
	 		last->next = NULL;
		 }
	 }
	 if(first!=NULL){
	 	last->next = first;
	 }else{
	 	last->next = second;
	 }
 }
int main(){
	int A[] = {3, 5, 7, 10, 15};
	int arr[] = {5,6,7,3};
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
	
		second = new node;
	second->data = arr[0];
	second->next = NULL;
	last = second;
	
	for(int i=1; i<4;i++){
		temp = new node;
		temp->data = arr[i];
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
	node*p = first;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next = second;
	second = NULL;
	node *m = first;
	while(m!=NULL){
		cout << m->data <<endl;
        m = m->next;
	}
	return 0;
}

*/

