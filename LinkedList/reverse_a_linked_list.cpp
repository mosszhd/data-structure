#include <bits/stdc++.h>
 
using namespace std;
 
struct Node{
	int data;
	struct Node* next;
};

struct Node* Insert(struct Node* head, int data){
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if(head == NULL) head = temp;
	else {
		Node* temp1 = head;
		while(temp1 -> next != NULL) temp1 = temp1 -> next;
		temp1->next = temp;
		}
		return head;
}

struct Node* Reverse(struct Node* head){
		struct Node *current,*prev,*next;
		current = head;
		prev = NULL;
		while(current != NULL){
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
			}
			head = prev;
			return head;
}

void Print(Node* head){
	while(head != NULL){
		cout << head -> data << endl;
		head = head -> next;
		}
	}
	
int main() {
	struct Node* head = NULL; //local variable
	head = Insert(head,2);
	head = Insert(head,4);
	Print(head);
	head = Reverse(head);
	cout << "List after reversing: " << endl;
	Print(head);
}
