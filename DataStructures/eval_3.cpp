#include<iostream>

using namespace std;

struct node
{
    int key;
    int height;
    struct node* left;
    struct node* right;
};


struct node* new_node(int data)
{
    struct node* root = new node;
    root->key=data;
    root->left= root->right = NULL;
    return root;
}

int get_height(struct node* root)
{
    int h = 0;
    if((root->left=NULL) && (root->right=NULL))
        return 0;
    else if(root->left!=NULL)
    {
        h++;
        get_height(root->left);
        return h;
    }
    else if(root->right!=NULL)
    {
        h++;
        get_height(root->right);
        return h;
    }
}

int bal_factor(struct node *root)
{
    if (root == NULL)
        return 0;
    return get_height(root->left) - get_height(root->right);
}

struct node* insert(struct node* root, int key)
{
    if (root == NULL)
        return(new_node(key));

    if (key < root->key)
        root->left  = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    else
        return root;

    int balance = bal_factor(root);

    if(balance < -1 || balance > 1)
        cout<<"NOT a valid AVL Tree!";
}

main()
{
    struct node* root = NULL;

    root = insert(root,20);
    root = insert(root,10);
    root = insert(root,15);
    root = insert(root,18);
    root = insert(root,30);
    root = insert(root,25);
    root = insert(root,40);

    cout<<"Valid AVL Tree";

    return 0;
}
