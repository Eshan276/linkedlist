#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
void insertatHead(Node *&head, int val)
{ //&head , callby refrence this will let us change stuff in it
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void display(Node *head)
{ // call by value wont let us chang stuff
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{
    Node *head;
    // insertatHead(head, 2);
    for (int i = 0; i < 10; i++)
    {
        insertatHead(head, i);
    }
    display(head);

    // Given the head of a linked lis
    return 0;
}
