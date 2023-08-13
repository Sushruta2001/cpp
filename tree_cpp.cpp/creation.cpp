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

        cout << " enter  value" ;
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








int main()
{

Node *root = NULL;


root = buildtree(root);



//code goes here



return 0;
}