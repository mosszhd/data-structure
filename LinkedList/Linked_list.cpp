#include <bits/stdc++.h>
 
using namespace std;
struct Node{
	int data;
	Node* link;
};


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	Node* A;
	A = NULL;
	
	Node* temp = new Node();
	temp->data  = 2;
	temp->link = NULL;
	
	A = temp;
	
	temp = new Node();
	temp->data = 3;
	temp->link = NULL;
	
	Node* temp1 = A;
	
	while(temp1->link != NULL){
		temp1 = temp1->link;
		}
	temp1->link = temp;
	cout << temp->data;
}
