#include <iostream>
using namespace std;

// Node structure declaration
struct Node { 
	int data; Node* next; 
}; 

// Method to create a new node with data
// in it, and return it.
Node *newNode(int x) { 
	Node* node = new Node; 
	node->data = x; node->next = NULL; 
	return node; 
} 

// Method to find out middle element in Linked List
// Since we can't start from the end (Singly LL), we
// make a pointer `step` that takes one step while another
// pointer `hop` takes two steps. When `hop` reaches the 
// end of the list, `step` is in the middle.
Node* findMiddleNode(Node* left, Node* right) { 
  // if no node present, return
	if (left == NULL)
		return NULL;

  // pointers declared to find the middle
	Node* step = left; 
	Node* hop = left -> next; 
  
	while (hop != right) { 
    // step to next node
		hop = hop -> next; 
    // if this node is not the end of the list
		if (hop != right) { 
      // take another step, `hop` has taken 2 steps now
      hop = hop -> next; 
      // `step` takes one step
			step = step -> next; 
		} 
	} 
  // `step` is now pointing to the middle, return `step`
	return step; 
} 

// Function for implementing the Binary 
// Search on linked list
Node* LLBinarySearch(Node *head, int value) { 
	Node* left = head; Node* right = NULL; 

	do { 
    // Find middle
		Node* midNode = findMiddleNode(left, right);
    
    // If middle is empty
		if (midNode == NULL) 
			return NULL; 
    // If value is present at middle 
		if (midNode -> data == value) 
			return midNode; 
    // If value is more than mid 
		else if (midNode -> data < value) 
			left = midNode -> next; 
    // If the value is less than mid.
		else
			right = midNode; 

	} while (right != left || right == NULL); 
  // value not present 
	return NULL; 
}

// Testing Code 
int main() { 
	Node *head = newNode(1); 
  head->next = newNode(4); 
	head->next->next = newNode(7); 
	head->next->next->next = newNode(8); 
	head->next->next->next->next = newNode(9); 
	head->next->next->next->next->next = newNode(10); 
	int value = 7; 
  Node* node = LLBinarySearch(head, value);
	if(node == NULL) 
		cout << "Value not present" << endl; 
	else
		cout << "Value " << node->data  << " is present!"<< endl; 
	return 0; 
} 
