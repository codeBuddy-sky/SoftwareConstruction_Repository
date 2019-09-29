#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node* left;
    node* center;
    node* right;
};

void insert(node* root, int x, int count)
{
    node* newnode = new node;
    newnode->data = x;
    newnode->left = newnode->center = newnode->right = NULL;

    if (count == 0)
        {root->left = newnode;
        count++;}
    else if (count == 1)
        {root->center = newnode;
        count++;}
    else if (count == 2)
        {root->right = newnode;
        count = 0;}
}

void display(node* root)
{

}

int sumLeaf(node *root)
{
    int sum = 0;
    sum = sum + (root->left->data);
    sum = sum + (root->center->data);
    sum = sum + (root->right->data);
    return sum;
}

main()
{
    static int count = 0;
    node* root;
    root->data=10;
    root->left = root->center = root->right = NULL;

    insert(root,15,count);
    insert(root,20,count);
    insert(root,5,count);

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->center->data;
    //int sum = sumLeaf(root);
    //cout << sum;


}
