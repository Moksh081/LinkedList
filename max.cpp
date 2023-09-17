//max

//linked list

/*
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
int Max(node *p)
{
 int max=-32768;
 
 while(p)
 {
 if(p->data>max)
 max=p->data;
 p=p->next;
 }
 return max;
 
}
int RMax(node *p)
{
 int x=0;
 
 if(p==0)
 return -32768;
 x=RMax(p->next);
 if(x>p->data)
 return x;
 else
 return p->data;
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
	Max(first);
		return 0;
}
*/

