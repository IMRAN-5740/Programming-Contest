//Create Node in link_list;

// #include<bits/stdc++.h>
// using namespace std;
//  struct Node{
//  	int data;
//  	struct Node *next;
//  };
//  int main(){
//  	struct Node * head=NULL;
//  	struct Node *second=NULL;
//  	struct Node *third= NULL;

//  	head =(struct Node *)malloc(sizeof(struct Node));
//  	second=(struct Node*)malloc(sizeof(struct Node));
//  	third = (struct Node*)malloc(sizeof(struct Node));
//  	head->data=1;
//  	head->next=second;
//  	second->data=2;
//  	second->next = third;
//  	third->data=3;
//  	third->next=NULL;
//  	cout<<head->data<<" "<<second->data<<" "<<third->data<<endl;
//  	//cout<<third->next<<endl;
//  	if(third->next==NULL){
//  		cout<<"lIST IS FINISH"<<endl;
//  	}
//  	return 0;
//  }


//Tavesal Linklist in below
// A simple C program for traversal of a linked list
#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

// This function prints contents of linked list starting from
// the given node
void printList(struct Node* n)
{
	while (n != NULL) {
		printf(" %d ", n->data);
		n = n->next;
	}
	cout<<"\n";
}

int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;

	// allocate 3 nodes in the heap
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with second

	second->data = 2; // assign data to second node
	second->next = third;

	third->data = 3; // assign data to third node
	third->next = NULL;

	printList(head);

	return 0;
}
