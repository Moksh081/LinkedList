//insert node 

/*
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

node* first = NULL;

void insert(int pos, int x) {
    node* t;
    if (pos == 0) {
        t = new node;
        t->data = x;
        t->next = first;
        first = t;
    } else if (pos > 0) {
        node* p = first;
        for (int i = 0; i < pos - 1 && p; i++) {
            p = p->next;
        }
        if (p) {
            t = new node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}

int main() {
    int A[] = {3, 5, 7, 10, 15};
    node* temp;
    node* last;

    first = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < 5; i++) {
        temp = new node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

    insert(3, 10);
    node* t = first;
    while (t != NULL) {
        cout << t->data << endl;
        t = t->next;
    }
    return 0;
}
*/

//make ld by inserting

/*
 #include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

node* first = NULL;
node* temp = NULL;
node* last = NULL;
   void create(){
   	int n;
   	first = new node;
   	cout<<"Enter no. of nodes you want to create : "<<endl;
   	cin >>n;
   	cout<<"Enter data in 1st node : "<<endl;
   	cin>>first->data;
   	first->next = NULL;
   	last = first;
   	for(int i=1; i<n;i++){
   		temp = new node;
   		cout<<"Enter data in "<<i+1<<" node :"<<endl;
   		cin>>temp->data;
        temp->next = NULL;
        last->next = temp;
        last = temp;
	   }
   }
   void display(){
   	node* t = first;
   	while (t != NULL) {
        cout << t->data << endl;
        t = t->next;
    }
   }
 int main(){
    create();
    display();
 	return 0;
 }

*/

//insert in sorted list

/*
 #include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
int main(){
	int A[] = {3, 5, 7, 10, 20};
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
	
	node *p = first;
	node* q = p-1;
	int key = 15;
	
	while(p !=NULL){
		if(p->data > key){
		  node* t = new node;
		  t->data = key;
		  t->next = p;
		  q->next = t;
			break;
		}else{
			p = p->next;
		}
	}
	node* t = first;
   	while (t != NULL) {
        cout << t->data << endl;
        t = t->next;
    }
	return 0;
}
*/

