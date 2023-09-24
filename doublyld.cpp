//doubly ld
 
 /*
 #include<iostream>
 using namespace std;
 class node{
 	public:
 	node* prev;
 	int data;
 	node* next;
 };
 int main(){
 	int a[] = {1,2,3,4,5,6};
 	int i;
 	node* first = NULL;
 	node* t = NULL;
 	node* last = NULL;
 	first = new node;
 	first->data = a[0];
 	first->prev = NULL;
 	first->next = NULL;
 	last = first;
 	for(i=1;i<6;i++){
 		t = new node;
 		t->data = a[i];
 		t->next = last->next;
 		t->prev = last;
 		last->next = t;
 		last = t;
	 }
	node *current = first;
while(current != NULL){
    cout << current->data << endl;
    current = current->next;
}

 	return 0;
 }
 */
