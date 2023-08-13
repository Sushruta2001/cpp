#include<bits/stdc++.h>
using namespace std;

// struct Node{
//     int data;
//     Node *next;
// };

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    Node *front;
    Node *rear;

    public:

    Queue(){
        front = NULL;
        rear = NULL;
    }

    void push(int x)
    {
        Node *temp = new Node(x);

        if(front == NULL)
        {
            front = temp;
            rear = temp;
            return;
        }
        temp -> data = x;
        rear -> next = temp;
        
        rear = temp;
    }

    void pop(){
        if(front == NULL)
        {
            cout << "Nothing to pop" << endl;
            return;
        }

        Node *temp = front;
        front = front -> next;
        int val = temp -> data;
        free(temp);
        
        cout << "deleted element is  " << val << endl;
       


    }

   

};




int main()
{



Queue q;
q.push(3);
q.push(1);
q.push(2);
q.push(4);
q.push(5);
q.push(6);
q.push(7);
q.push(8);

q.pop();








return 0;
}