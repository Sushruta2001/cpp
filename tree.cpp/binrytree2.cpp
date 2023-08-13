#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node *left;
    Node *right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

Node *createtree(Node *root)
{
    cout <<"enter data" << endl;
    int data;
    cin >> data;
    root = new Node(data);


    if(data == -1)
    {
        return NULL;
    }

    cout << "enter value for left of " << data << endl;
    root -> left = createtree(root -> left);
    cout << "enter value for right of" << data << endl;
    root -> right = createtree(root -> right);

    return root;


}





int main()
{



Node *root = NULL;

root = createtree(root);



return 0;
}