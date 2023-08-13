#include<bits/stdc++.h>
using namespace std;

class circularqueue{
    int *arr;
    int size;
    int front ;
    int rear;
    
    public:

circularqueue(){
    size = 10000;
    arr = new int[size];
    front = -1;
    rear = -1;
}

bool isEmpty(){
    if(front == -1 && rear== -1){
    cout<<"queue is empty" << endl;
    return 1;
    }

    else return 0;
}

bool isFull(){
    if((front == 0 && rear == size - 1) || (rear == (front-1)%(size - 1))){
    cout<<"queue is full" << endl;
    return 1;
    }
    else return 0;
}

void enqueue(int x)
{
    if(isFull())
    {
        cout<<"queue full" << endl;
        return;
    }

    else{

        if(front == -1)
        {
            front = rear = 0;
            arr[rear] = x;
        }
        else if((rear == size -1)&&(front !=0))
        {
            rear++;
            arr[rear] = x;
        }

        else
        {
            rear++;
            arr[rear] = x;
        }
    }

}

int dequeue()
{
    if(isEmpty())
    {
        cout<<"queue empty"<<endl;
        return -1;
    }

    else{

        if(front == rear)
        {
            front = rear = -1;
            
        }

        else if(front == size - 1)
        {
            front = 0;
            
        }

        else{
            front ++;
            
        }


        cout << arr[front] << endl;

    }

    return arr[front];
}

int qfront()
{
    if(isEmpty())
    {
        cout << "nothing to display" << endl;
        return -1;
    }

    else
    {   
        
        cout << arr[front] << endl;
        return arr[front];
    }
}

};







int main()
{



circularqueue q;

// q.isEmpty();
q.enqueue(10);
q.enqueue(15);
q.enqueue(12);
q.enqueue(13);
q.enqueue(14);
q.enqueue(16);
q.enqueue(17);
q.enqueue(18);
q.enqueue(19);
q.enqueue(20);
q.qfront();

q.dequeue();
q.qfront();



return 0;
}
