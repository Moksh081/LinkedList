//linear search 

/*
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
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
	
	node *p = first;
	int key = 15;
	while(p !=NULL){
		if(p->data == key){
			cout<<p;
			break;
		}else{
			p = p->next;
		}
	}
	return 0;
}
*/

//Linear search by move to head 

/*
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

node* LSearch(node* first, int key) {
    node* p = first;
    node* q = NULL;

    while (p != NULL) {
        if (key == p->data) {
            if (q !=NULL) {
                q->next = p->next;
                p->next = first;
                first = p;
            }
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

node* RSearch(node* p, int key) {
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return RSearch(p->next, key);
}

int main() {
    int A[] = {3, 5, 7, 10, 15};
    node* first = NULL;
    node* temp = NULL;
    node* last = NULL;

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

    node* t = LSearch(first, 5);
    node* x = RSearch(first, 5);

    if (t != NULL)
        cout << t->data << endl;
    else
        cout << "Element not found using LSearch" << endl;

    if (x !=NULL)
        cout << x->data << endl;
    else
        cout << "Element not found using RSearch" << endl;

    return 0;
}

*/

