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
    NODE n1=new struct node[1];
    n1->next=NULL;
    return n1;
}
void print( NODE n1)
{
    while(n1!=NULL)
    {
         cout<<n1->data<<" ";
         n1= n1->next;
    }
}
int main()
{

  NODE n1=create_node();
  NODE n2=create_node();
  n1->data=2;
  n1->next=n2;
  n2->data=3;
  print(n1);

}
