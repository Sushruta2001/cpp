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

    void traversal(Node *root)   //single line traversal
    {
        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            Node *temp = q.front();
            cout << temp -> data << " ";
            q.pop();


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

void levelordertraversal(Node *root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);


    while(!q.empty())
    {   
        Node *temp = q.front();
        
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;

            if(!q.empty())
            {
                q.push(NULL);
            }
        }

        else{
            cout<< temp -> data << endl;
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

// tree creation
root = buildtree(root);

// traversal
cout << "the values are " << endl;
// traversal(root);  

levelordertraversal(root);



//3 5 6 7 -1 -1 8 -1 -1 9 11 -1 -1 12 -1 -1 19 17 -1 -1 18 -1 -1 



return 0;
}