#include<bits/stdc++.h>
using namespace std;

class dequeue{
    int *arr;
    int size;
    int front;
    int rear;

    public:

    dequeue(){
        size = 1000;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        if(front == -1 && rear == -1)
        return true;

        else return false;
    }

    bool isFull()
    {
        if((front == 0 && rear == size - 1) || (rear = (front -1)%(size - 1)))
        {
            return true;
        }
        else return false;
    }

  bool pushFront(int x)
    {
        if(isFull())
        {
            return false;
        }

        else if(front == -1 )
        {
            front =0;
            
        }
        else if(front == 0 && rear != size-1)
        {
            front = size - 1;
            
        }

        else {front-- ;}

        arr[front] = x;
        return true;
    }

    bool pushRear()
    {
        if(isFull())
        {
            return false;
        }

        else if(front = rear = -1)
        {
            front == 0;
            
        }

        else if((rear == size-1)&& front!=0)
        {
            rear = 0;
            
        }
        else {rear++;}

        arr[rear] = x;
        return true;


    }

    int popFront()
    {
        if(isEmpty()){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        
        int ans = arr[front];
        arr[front] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            front++;
        }
        return ans;
    }

    int popRear()
    {
         if(isEmpty()){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        
        int ans = arr[rear];
        arr[rear] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(rear == 0) {
            rear = size-1; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear--;
        }
        return ans;
    }


    int qfront(){
        if(isEmpty())
        return -1;

        else
        {
            cout << arr[front] << endl;
            return arr[front];
        }
    }

    int qrear(){
        if(isEmpty())
        return -1;

        else{
            cout << arr[rear] << endl;
            return arr[rear];
        }
    }



};




int main()
{

dequeue d;

d.isEmpty();




return 0;
}