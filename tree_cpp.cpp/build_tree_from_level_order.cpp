#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int d){
        this -> data =d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

Node* buildtreefromorder(Node *root)
{
    queue<Node*> q;
    cout <<" enter data for root " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "enter data for left of " << temp -> data << endl;
        int leftdata;
        cin >> leftdata;

        if(leftdata != -1)
        {
            temp -> left = new Node(leftdata);
            q.push(temp -> left);
        }

        cout << "enter data for right of " << temp -> data << endl;
        int rightdata;
        cin >> rightdata;

        if(rightdata != -1)
        {
            temp -> right = new Node(rightdata);
            q.push(temp -> right);
        }

    }

    return root;



}


void levelordertraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout << endl;

            if(!q.empty())
            {
                q.push(NULL);
            }
        }

        else{
            cout << temp -> data << endl;

            if(temp -> left)
            {
                q.push(temp -> left);
            }

            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }

    }

}

int main()
{


Node *root = NULL;
root = buildtreefromorder(root);
levelordertraversal(root);


return 0;
}