#include <iostream>

using namespace std;
struct node
{
    struct node* lchild;
    int data;
    struct node* rchild;
};
typedef struct node* NODE;
NODE create_node(int num)
{
    NODE root=new struct node[1];
    root->data=num;
    return root;
}
void preorder(NODE root)
{

    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->lchild);
        preorder(root->rchild);
    }

}

void postorder(NODE root)
{

    if(root!=NULL)
    {

        postorder(root->lchild);
        postorder(root->rchild);
        cout<<root->data<<" ";
    }

}
void inorder(NODE root)
{
    if(root!=NULL)
    {
        inorder(root->lchild);
        cout<<root->data<<" ";
        inorder(root->rchild);
    }
}

int main()
{
   NODE n1=create_node(1);
   NODE n2=create_node(2);
   NODE n3=create_node(3);
   NODE n4=create_node(4);
   NODE n5=create_node(5);
   NODE n6=create_node(6);
   NODE n7=create_node(7);

   n1->lchild=n2;
   n2->lchild=n3;
   n3->lchild=NULL;
   n3->rchild=NULL;
   n2->rchild=n4;
   n4->lchild=NULL;
   n4->rchild=NULL;

   n1->rchild=n5;
   n5->lchild=n6;
   n6->lchild=NULL;
   n6->rchild=NULL;
   n5->rchild=n7;
   n7->rchild=NULL;
   n7->lchild=NULL;

   preorder(n1);
   cout<<endl;
   postorder(n1);
   cout<<endl;
   inorder(n1);
}
