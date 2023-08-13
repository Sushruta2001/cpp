#include<bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int size;
    int front ;
    int rear;
    
    public:

Queue(){
    size = 100;
    arr = new int[size];
    front = -1;
    rear = -1;
}

bool isEmpty()
{
    if ( front == rear)
    return 1;
    else return 0;
}

void enqueue(int x)
{
    if(rear == size - 1)
    {
        cout << "queue full" << endl;
        return;
    }

    arr[rear] = x;
    rear++;
}

int dequeue()
{
    if(isEmpty())
    {
        cout << " Nothing to pop" << endl;
        return -1;
    }

    int ans = arr[front];
    arr[front] = -1;
    front ++;
    if(front == rear)
    {
        front = 0;
        rear = 0;
    }

    cout << ans << endl;
    return 1;

}

int qfront()
{
    if(front == rear){
        cout << " nothing present" << endl;
        return -1;
    }

    int print = arr[front];
    cout << print << endl;
    return 1;
}

};





int main()
{



Queue q;
q.enqueue(10);
q.enqueue(15);

q.dequeue();

q.dequeue();
q.dequeue();

q.qfront();

return 0;
}