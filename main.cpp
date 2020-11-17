#include <iostream>
using namespace std;


// stack by array implementation
class Stack{
  int values[5];
  int top = -1;
  public:
  bool isEmpty(){
    return top == -1;
  }
  void push(int value){
    if(sizeof(values) == top){
      cout << "Stack Is Fill";
      return;
    }

    values[++top] = value;
  }

  int pop(){
    return values[top--];
  }

  void display(){
    for (int i = 0; i <= top; i++){
      cout << values[i] << "\n";
    }
  }
};

// stack by linkedList implementation
class node{
    public:
     node *next;
     int value;
  };

class LinkedListStack{
  node *head, *top;

public:
  LinkedListStack(){
    top = NULL;
    head = NULL;
  }

  void push(int value){
    node *newNode;
    newNode = new node;
   if(head == NULL){
       newNode->next = NULL;
       head = newNode;
      
    }else{
      top->next=  newNode;
      
    }

    newNode->value = value;
    top = newNode;
   
  }

  void pop(){
    if(top == NULL){
      cout << "No item is present";
      return;
    }
    node *deleteNode = top;
    top= top->next;
    delete deleteNode;

  }

  void display(){
    node *temp = head;
    while(temp){
      cout << temp->value << "\n";
      temp = temp->next;
    }
  }


};

int main() {
   LinkedListStack *stack = new LinkedListStack;
   stack->push(2);
   stack->push(3);
   stack->display();
}