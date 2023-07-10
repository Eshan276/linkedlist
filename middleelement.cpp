#include <iostream>
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

Node *findmiddleElement(Node *head)
{
  Node *slow = head;
  Node *fast = head;

  while (fast != NULL && fast->next != NULL)
  {
    fast = fast->next->next;
    slow = slow->next;
  }

  return slow;
}



int main()
{
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);
 
  Node *middleElement =findmiddleElement(head);

  cout << "MIddle Element: " <<middleElement->val << endl;

  return 0;
}
