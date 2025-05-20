#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node()
  {
    next = NULL;
  }
};

class Stack
{
private:
  Node *top;

public:
  Stack()
  {
    top = NULL;
  }

  int push(int value)
  {
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << "Push Value : " << value << endl;
    return value;
  }

  void pop()
  {
    if (isEmpty())
    {
      cout << "Stack is Empty" << endl;
    }

    cout << "Popped Value: " << top->data << endl;
    top = top->next;
  }

  void peek()
  {
    
  }
};

int main()
{
}