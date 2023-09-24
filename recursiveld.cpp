//recursive circular ld 

/*
 #include<iostream>
 using namespace std;
 class node{
 	public:
 	int data;
 	node* next;
 };
 class ld{
 	private:
 		node* head = NULL;
 		public:
 			int arr[] = {2,3,4,5,6};
 			void insert(){
 				node *temp;
	node *last;
	node *first;
	first = new node;
	first->data = arr[0];
	first->next = NULL;
	last = first;
	
	for(int i=1; i<5;i++){
		temp = new node;
		temp->data = arr[i];
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
			 }
 			void display(){
 				int flag=0;
 				node* p=head;
 				if(p!=head || flag=0){
 					flag++;
 					cout<<p->data<<endl;
 					p=p->next;
				 }
			 }
 };
 */
 
