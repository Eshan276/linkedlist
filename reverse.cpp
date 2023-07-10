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

void reverse(Node *&head)
{
  Node *prev;
  prev = NULL;
  Node *current;
  current = head;
  Node *next;
  while (current != NULL)
  {
    next = current->next;
    current->next = prev; // changing//chnaging ta ho66e karon, current ptr ta nije oi node ta hoye jache i feeeelllll
    prev = current;
    current = next;
  }
  head = prev;
}

int main()
{
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);
  reverse(head);
  display(head);
  /*Node *lastElement = findLastElement(head);

  cout << "Last Element: " << lastElement->val << endl;*/

  return 0;
}
