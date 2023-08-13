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

    Node *buildtree(Node *root){

        cout << " enter  value" << endl ;
        int data;
        cin >>data;
        root = new Node(data);

        if(data == -1)
        {
            return NULL;
        }


        cout << "enter value for left of" << data << endl;
        root -> left = buildtree(root -> left);
        cout << "enter value for right of" << data << endl;
        root -> right = buildtree(root -> right);

        return root;




    }


    void inorder(Node *root)    //L-N-R (LEFT - NODE - RIGHT)
    {
        //base case

        if(root == NULL)
        {
            return;
        }

        inorder(root -> left);              //L
        cout << root -> data <<" ";         //N
        inorder(root -> right);             //R


    }


    void preorder(Node *root)        //N-L-R(NODE - LEFT - RIGHT)
    {
        //base case
        if(root == NULL)
        {   
            return;
        }

        cout << root -> data << " ";        //N
        preorder(root->left);               //L
        preorder(root->right);              //R

    }

    void postorder( Node *root)             //L - N - R (LEFT - RIGHT - NODE)
    {
        //base case 
        if(root == NULL)
        {
            return;
        }

        postorder(root -> left);            //L
        postorder(root -> right);           //R 
        cout << root -> data << " ";        //N



    }



int main()
{


Node *root = NULL;

root = buildtree(root);


    cout << "inorder traversal is" ;
inorder(root);
    cout << endl << "preorder traversal is" ;
preorder(root);
    cout << endl << "postorder traversal is ";
postorder(root);

// 3 5 6 7 -1 -1 8 -1 -1 9 11 -1 -1 12 -1 -1 19 17 -1 -1 18 -1 -1
return 0;
}