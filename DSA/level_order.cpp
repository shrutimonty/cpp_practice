#include<iostream>
using namespace std;

struct tnode
{
	int data;
	struct tnode* left;
	struct tnode* right;
};
typedef struct tnode* TNODE;

/**************************
               12
        13           14
    15     17     18    19
  20  7



**************************/

TNODE create_node(int num)
{
   TNODE root= new struct tnode[1];
   root->left=NULL;
   root->right=NULL;
   root->data=num;
   return root;
} 

TNODE *q=new TNODE [1000];
int front=-1;
int rear=-1;

void push(TNODE num)
{
	q[++rear]=num;
}
TNODE pop()
{
	return q[++front];
}
bool isempty()
{
	if(front==rear)
		return true;
	else
		return false;
}
void level_order(TNODE root)
{
	TNODE temp_node=root;
	while(temp_node!=NULL)
	{
		cout<<temp_node->data<<" ";
		push(temp_node->left);
		push(temp_node->right);
		temp_node=pop();
	}

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
	level_order(root);

    
}