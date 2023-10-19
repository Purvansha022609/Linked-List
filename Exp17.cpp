/*Name-Purvansha Gehlod
PRN-22070123088
Exp-17(Part-A)
Program to implement Singly Linked List in C++ using Class
*/
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;

    Node(int data){
        val = data;
        next = NULL;
    }

};
int main(){
    Node*n=new Node(1);
    cout<<n->val<<" "<<n->next<<endl;
    return 0;
}
/*Output
1 0
*/

/*
Name-Purvansha Gehlod
PRN-22070123088
Exp-17(Par-B)
*/
#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;  // Use '=' instead of '*'
        next = NULL;
    }
};

void insertAtHead(Node*& head, int val) {
    Node* new_node = new Node(val);
    new_node->next = head;  // Update the new node's next pointer
    head = new_node;  // Update the head to point to the new node
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    display(head);
    return 0;
}
/*Output
2 -> NULL
1 -> 2 -> NULL
*/
