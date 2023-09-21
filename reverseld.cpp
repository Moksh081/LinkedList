// reverse the ld

/*
 #include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
node* first = NULL;

int main(){
	int A[] = {3, 5, 7,10, 15,};
	int arr[5];
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
	node* p = first;
	int i=0;
	while(p!=NULL){
		arr[i] = p->data;
		p = p->next;
		i++;
	}
	p = first; i--;
	while(p!=NULL){
		p->data = arr[i];
		p= p->next;
		i--;
	}
	node* m = first;
   	while (m != NULL) {
        cout<<m->data<<endl;
        m = m->next;
    }
	return 0;
}


*/
