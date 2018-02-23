#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node* next;
};
typedef struct node* NODE;

NODE create_node()
{
    NODE root=new struct node[1];
    return root;
}
NODE insert_end(NODE root,int num)
{
    NODE new_node=create_node();
    new_node->data=num;
    new_node->next=NULL;
    NODE temp=root;

    if(root==NULL)
        return new_node;

    while(temp!=NULL)
    {

        if(temp->next==NULL)
        {
            temp->next=new_node;
            return root;

        }
        temp=temp->next;
    }
}
void print_list(NODE root)
{
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->next;
    }
    cout<<endl;
}
NODE reverse_list(NODE root)
{
    NODE prev=NULL;
    NODE current=root;
    while(current!=NULL)
    {
        NODE after=current->next;
        current->next=prev;
        prev=current;
        current=after;

    }
    return prev;
}


int main()
{
    NODE root=NULL;
    int size;
    cout<<"Enter count of nodes ";
    cin>>size;
    while(size--)
    {
        cout<<"Enter data ";
        int  num;
        cin>>num;
        root=insert_end(root,num);
        print_list(root);


    }
    root=reverse_list(root);
    print_list(root);
}

