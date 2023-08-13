#include<bits/stdc++.h>
using namespace std;



void solve(stack<int> &inputStack , int count , int size)
{
    if(count == size/2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack , count + 1 , size);
    inputStack.push(num);
}


void deleteMiddle(stack<int> &inputStack , int size)
{
    int count = 0;

    solve(inputStack , count , size);
}

int main()
{



stack<int> inputStack;
int size = inputStack.size();

inputStack.push(4);
inputStack.push(5);
inputStack.push(6);
inputStack.push(7);
inputStack.push(8);
inputStack.push(9);
inputStack.push(1);
inputStack.push(2);
inputStack.push(3);



deleteMiddle(inputStack , size);

 while(!inputStack.empty())
    {
        cout << inputStack.top() <<" ";
        inputStack.pop();
    }
    cout << endl;





return 0;
}