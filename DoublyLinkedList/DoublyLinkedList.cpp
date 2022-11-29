#include <bits/stdc++.h>
 
using namespace std;

struct Node{
	int data;
	Node* next;
	Node* prev;
};

struct Node* head;

struct Node* GetNewNode(int x){
	Node *newNode = new Node();
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

void InsertAtHead(int x){
	Node *newNode = GetNewNode(x);
	if(head == NULL){
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
	}

void Print(){
	struct Node* temp = head;
	while(temp != NULL){
		cout << temp->data << endl;
		temp = temp->next;
		}
	}

void ReversePrint(){
		struct Node* temp = head;
		if(temp == NULL) return;
		while(temp->next != NULL){
			temp = temp->next;
			}
		while(temp != NULL){
			cout << temp->data << endl;
			temp = temp->prev;
		}
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	head = NULL;
	InsertAtHead(2);
	InsertAtHead(5);
	InsertAtHead(7);
	cout << "Forward Print: " << endl;
	Print();
	cout << "Reverse Print: " << endl;
	ReversePrint();
	
}
