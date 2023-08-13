#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100
class Queue{
    
private:
   
    int arr[MAX_SIZE];
    int front = -1;
    int rear = -1;



public:
void enqueue(int data)
{
    if(rear == MAX_SIZE - 1)
    {
        cout << "queue is full" << endl;
        return;
    }

    else
    rear ++;
    arr[rear] = data;
    
}

int dequeue()
{
    if(front == rear)
    {
        cout << " Queue is empty" << endl;
        return -1;
       
    }

    else{
        int ans = arr[front];
        arr[front] = -1;
        front ++;

        if(front == rear)
        {
            front = 0;
            rear = 0;
        }

      
       return arr[front];
    }
}

void display(){
    if(front == rear)
    {
        cout<< " no elements to show" << endl;
    
    }
    else
    {
        for (int i = front + 1 ; i <= rear; i++) {
        cout << arr[i] << " ";
        }
        cout << endl;
    }
}

};

int main()
{

Queue q;


q.enqueue(100);
q.enqueue(500);
q.enqueue(200);
q.display();

int data = q.dequeue();
cout<<"dequeued element is " << data << endl;
q.display();




return 0;
}