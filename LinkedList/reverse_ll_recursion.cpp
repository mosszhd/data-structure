#include <bits/stdc++.h>
 
using namespace std;
 
struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

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

void Print(Node* head){
	while(head != NULL){
		cout << head -> data << endl;
		head = head -> next;
		}
	}

void Reverse(struct Node* p){
		if(p->next == NULL){
			head = p;
			return;
		}
		Reverse(p->next);
		struct Node* q = p->next;
		q->next = p;
		p->next = NULL;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	head = NULL;
	head = Insert(head,2);
	head = Insert(head,6);
	head = Insert(head,7);
	Print(head);
	Reverse(head); //reverse the list
	cout << "List after reversing: " << endl;
	Print(head); //list after reversing 
}
