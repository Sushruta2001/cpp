#include<bits/stdc++.h>
using namespace std;
// struct Node {
//     int data;
//     Node *next;
// };


class Node {
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }

};
class Stack {

    Node *top;

public:

Stack(){
    top = NULL;
}

void push(int x)
{
    Node *newNode = new Node(x);
    if(newNode == NULL)
    {
        cout << "stack overflow" << endl;
    }
    newNode -> data = x;
    newNode -> next = top;
    top = newNode;
}

int pop()
{
    if(top == NULL)
    {   
        cout << "nothing to pop" << endl;
        return 0;
    }

    
    Node *temp = top;
    int val = temp -> data;
    top = top -> next;
    free(temp);
    cout << "deleted value is" << val << endl;
    return temp->data;


}

int peek()
{
    if(top == NULL)
    {   
        cout << "nothing to show" << endl;
        return -1;
    }

    else 
    {           int ans = top -> data;
                cout << "the top element is" << ans << endl;
                return top -> data;
    }

}


void print()
{
    Node *temp = top;
    while(temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> next;
    }
}

};


int main()
{
    Stack s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    
  
   
  s.print();

    s.pop();
    s.peek();
    s.print();

//code goes here



return 0;
}