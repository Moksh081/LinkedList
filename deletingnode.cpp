//deleteing from ld

/*
  #include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
node* first = NULL;

 void Delete(int pos){
 	node* p;
 	node* q;
 	if(pos==1){
 		int x = first->data;
 		p=first;
 		first=first->next;
 		delete p;
	 }else{
	 	p=first;
	 	q = NULL;
	 	for(int i=0; i<pos-1 && p ;i++){
	 		q=p;
	 		p=p->next;
		 }
		 if(p){
		 	q->next = p->next;
		 	int x = p->data;
		 	delete p;
		 }
	 }
 }
int main(){
	int A[] = {3, 5, 7, 10, 20};
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
	Delete(3);
	node* m = first;
   	while (m != NULL) {
        cout << m->data << endl;
        m = m->next;
    }
	return 0;
}
*/

