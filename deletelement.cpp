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

int main()
{
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  // display(head);
  /*Node *lastElement = findLastElement(head);

  cout << "Last Element: " << lastElement->val << endl;*/
  // DELETEING A ELEMENT 
  int num = 3, j = 1;
  Node *temp;
  temp = head;
  while (j <= num - 1)
  {
    if (j == num - 1)
    {
      temp->next = temp->next->next;
      break;
    }
    else
    {
      temp = temp->next;
      j++;
    }
  }
  display(head);

  return 0;
}
