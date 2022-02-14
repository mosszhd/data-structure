#include <bits/stdc++.h>
 
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head;

void Insert(int value, int index){
	Node* temp1 = new Node();
	temp1->data = value;
	temp1->next = NULL;
	if(index==1){
		temp1->next = head;
		head = temp1;
		return;
		}
	Node* temp2 = head;
	for(int i=0;i<index-2;i++){
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}

void Print(){
	Node* temp = head;
	while(temp!=NULL){
		cout << temp->data << " ";
		temp = temp->next;
		}
	}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	head = NULL;
	Insert(3,1);
	Insert(2,1);
	Insert(2,1);
	Print();
}
