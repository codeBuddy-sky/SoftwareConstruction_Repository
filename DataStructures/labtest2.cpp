#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

void swap(struct node* root, struct node *child)
{
    struct node *temp = root;
    root=child;
    child=temp;
}

struct node* insert(struct node* ptr, int data)
{
    struct node *head = new node;
    if(ptr==NULL)
    {
        head=ptr;
        head->data=data;
        head->left=head->right=NULL;
    }

    else
    {
        if(ptr->left==NULL)
        {
           insert(ptr->left,data);
        }
        else if(ptr->right==NULL)
        {
            insert(ptr->right,data);
        }
        else
        {
            ptr=ptr->left;
            insert(ptr,data);
        }
    }

    return head;
}

void heapify(struct node *root)
{
    if(root==NULL)
    {
        cout << "Empty!";
        return;
    }
    else
    {
        struct node* greatestChild = root->left;
        if(root->left < root->right)
            greatestChild=root->right;

        if(root->data < greatestChild->data)
            swap(root,greatestChild);
    }
    heapify(root->left);
    heapify(root->right);
}

void display(struct node *root)
{
    if(root!=NULL)
        cout << root->data;
        display(root->left);
        display(root->right);
}


int main()
{
    struct node* root;
    insert(root,5);
}
