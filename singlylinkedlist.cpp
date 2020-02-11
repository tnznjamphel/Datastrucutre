//singly linked list
#include<iostream>
using namespace std;
 
class Node{
	public:
	int data;
	Node *next;
	
};
class Llist{
	int length;
	Node* head;
	public:
	Llist(){
		this->length=0;
		this->head=NULL;
	}
	//list insertion
	void insert(int data){
		Node *node=new Node();
		Node *temp;
		node->data=data;
		if(head==NULL){
			head=node;
			node->next=NULL;
			//cout<<"headvalue is changed to "<<head->data;
		}
		else{
			temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=node;
		}
		//cout<<"check node values:"<<node->data<<" ";
    	this->length++;
    	//delete temp;
	}
	//list trqversal
	void traversal(){
		Node *temp;
		temp=head;
		if(head==NULL)
			cout<<"list is empty";
		else{
            cout<<"traversal of the singly linked list: ";
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
		}
		}
		//delete temp;
	}
    void reverse() 
    { 
        // Initialize current, previous and 
        // next pointers 
        Node* current = head; 
        Node *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            // Store next 
            next = current->next; 
  
            // Reverse current node's pointer 
            current->next = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
        } 
        head = prev; 
    } 
};
int main()
{
    Llist list1 = Llist();
    //insertion of list
    list1.insert(10);
    list1.insert(20);
    list1.insert(30);
    //list reverse
    list1.reverse();
    list1.traversal();
    return 0;
}
