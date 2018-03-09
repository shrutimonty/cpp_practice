#include<iostream>
using namespace std;
struct tnode
{
	int data;
	struct tnode* left;
	struct tnode* right;
};
typedef struct tnode* TNODE;

TNODE create_node(int num)
{
   TNODE root= new struct tnode[1];
   root->left=NULL;
   root->right=NULL;
   root->data=num;
   return root;
}

/**************************
               12
        13           14
    15     17     18    19
  20  7
**************************/

TNODE* s=new TNODE [100];
int top=-1;
void push(TNODE num)
{
	s[++top]=num;
}
TNODE pop()
{
	return s[top--];
}
bool isempty()
{
	if(top==-1)
		return true;
	return false;
}
TNODE peek()
{
	return s[top];
}
void preorder(TNODE root)
{
	TNODE temp=root;
	push(temp);
	while(!isempty())
	{
		
		temp=pop();
		cout<<temp->data<<" ";
		if(temp->right!=NULL)
			push(temp->right);
		
		if(temp->left!=NULL)
			push(temp->left);
		
		
	}
}
void inorder(TNODE root)
{
	TNODE temp=root;
	while(1)
	{
		
		while(temp!=NULL)
		{
			push(temp);
			temp=temp->left;
			
		}
		while(temp==NULL & (!isempty()))
		{
			TNODE ele=pop();
			cout<<ele->data<<" ";
			temp=ele->right;
		}
		if(temp==NULL & (isempty()))
			break;
	}
	

}
void postorder(TNODE root)
{
	TNODE temp=root;
	do
	{
		while(temp!=NULL)
		{
			if(temp->right!=NULL)
			 push(temp->right);
			push(temp);
			temp=temp->left;
		}
		temp=pop();
		if(temp->right!=NULL & temp->right==peek())
		{
			TNODE ele=pop();
			//cout<<ele->data<<" ";
			push(temp);
			temp=temp->right;
		}
		else
		{
			cout<<temp->data<<" ";
			temp=NULL;
		}

	}while(!isempty());
	
}
int main()
{
	TNODE root=create_node(12);
	root->left=create_node(13);
	root->left->left=create_node(15);
	root->left->right=create_node(17);
	root->left->left->left=create_node(20);
	root->left->left->right=create_node(7);
	root->right=create_node(14);
	root->right->left=create_node(18);
	root->right->right=create_node(19);
	postorder(root);
}
