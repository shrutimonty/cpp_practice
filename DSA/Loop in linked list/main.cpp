#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node* next;
};
typedef struct node* NODE;

NODE create_node(int num)
{
    NODE root=new struct node[1];
    root->data=num;
    return root;
}
void print(NODE root)
{
    while(root!=NULL)
    {
        cout<<root->data<<endl;
        root=root->next;
    }
    cout<<endl;
}
void detect(NODE root)
{
    NODE fast=root;
    NODE slow=root;
    do
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {

            slow=root;
            while(slow->next!=fast->next)
            {
                slow=slow->next;
                fast=fast->next;
            }

            fast->next=NULL;
            print(root);
            return;

        }

    }while((fast!=NULL)&(slow!=NULL)&(fast->next!=NULL));
    cout<<"NOT LOOPED";
    return;
}


int main()
{
  NODE n1=create_node(1);
  NODE n2=create_node(2);
  NODE n3=create_node(3);
  NODE n4=create_node(4);
  NODE n5=create_node(5);
  n1->next=n2;
  n2->next=n3;
  n3->next=n4;
  n4->next=n5;
  n5->next=n2;
  detect(n1);
}
