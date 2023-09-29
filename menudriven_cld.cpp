//MENU DRIVEN FOR CLD :
 
 #include<iostream>
 using namespace std;
 class node{
 	public:
 	int data;
 	node* next;
 };
 node* first = NULL;
 class ld{
 	private:
 		int* A;
 		int n;
 		public:
 			ld(int n){
 				this->n = n;
 				A = new int[n];
 				cout<<"Enter "<<n<<" elements :"<<endl;
 				for(int i=0;i<n;i++){
 					cin>>A[i];
				 }
			 }
			 ~ld(){
			 	delete[] A;
			 }
			 void create(){
			 	node* temp = NULL;
        node* last = NULL;
        first = new node; 
        first->data = A[0];
        first->next = NULL;
        last = first;
        for (int i = 1; i < n; i++) {
            temp = new node;
            temp->data = A[i];
            temp->next = NULL;
            last->next = temp;
            last = temp;
        }
    }
			 void display(){
			 	node* p = first;
			 	int flag = 0;
			 	while(p != first || flag==0){
			 		flag++;
			 		cout<<p->data<<endl;
			 		p=p->next;
				 }
			 }
			 void insert(int pos , int x){
			 	if(pos==0){
			 		node* t = new node;
			 		t->next = first;
			 		t->data = x;
			 		first = t;
				 }else if(pos>0){
				 	node*p = first;
				 	for(int i=0; i<pos-1 && p ; i++){
				 	p=p->next;
					 }if(p){
					 	 node* t = new node;
            t->data = x;
            t->next = p->next;
            p->next = t;
					 }
				 }
		}
		void search(int x){
			node* p = first;
			int count = 0;
			while(p!=NULL){
				count++;
				if(p->data==x){
					cout<<count;
				}else{
					p=p->next;
				}
			}
		}
			 void delet(int pos){
			 	if(pos==0){
			 		node* p = first;
			 		int x = first->data;
			 		first = first->next;
			 		delete p;
				 }else if(pos>0){
				 	node* p=first;
	            	node* q = NULL;
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
       
 };
 int main(){
 	int n;
 	cout<<"No. of elements you want to add in ld : "<<endl;
			          cin>>n;
 			          ld l(n);
					  l.create();
    int t = 1; 
    do {
        cout << "2. INSERT " << endl << "3. DELETE " << endl << "5. DISPLAY " << endl << "6. SEARCH "<<endl;
       cin>>t;
        switch (t) {
            case 2:
                int pos, x;
                cout << "No. and position you want to add : " << endl;
                cin >> x >> pos;
                l.insert(pos, x);
                break;
            case 3:
                int poss;
                cout << "Enter position you want to delete : " << endl;
                cin >> poss;
                l.delet(poss);
                break;
            case 5:
                l.display();
                break;
            case 6:
            	int key;
                cout << "enter element you want to search "<<endl;
                cin>>key;
                l.search(key);
                break;
            default:
                cout << "Error !" << endl;
                break;
        }
    } while (t != 6);
    return 0;
}
 
