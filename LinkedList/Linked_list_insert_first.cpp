#include <bits/stdc++.h>
 
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* Insert(Node* head, int x){
	Node* temp = new Node();
	temp->data = x;
	temp->next = head;
	
	head = temp;
	
	return head;
}

void print(Node* head){
	while(head!=NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main() {
	Node* head = NULL;
	int n,i,x;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> x;
		head = Insert(head,x);
		print(head);
	}
	//cout << head->next->next->data;
}
