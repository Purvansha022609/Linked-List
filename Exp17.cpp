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