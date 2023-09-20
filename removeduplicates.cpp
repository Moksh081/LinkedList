//removing duplicates from sorted ?

/*
 #include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
node* first = NULL;

  void duplicate(){
  	node* p = first;
  	node* q = first->next;
  while(q != NULL){
  		if(p->data == q->data){
  		p->next = q->next;
  		delete q;
  		q = p->next;
	  }else{
	  	p=q;
	  	q = q->next;
	  }
  }
  }
int main(){
	int A[] = {3, 5, 7, 7,10, 15,};
	int arr[15];
	node *temp;
	node *last;
	
	first = new node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	
	for(int i=1; i<6;i++){
		temp = new node;
		temp->data = A[i];
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
	duplicate();
	node* m = first;
   	while (m != NULL) {
        cout<<m->data<<endl;
        m = m->next;
    }
	return 0;
}
*/

