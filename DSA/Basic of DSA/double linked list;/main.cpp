#include <iostream>

using namespace std;
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};
typedef struct node* NODE;

NODE create_node()
{
    NODE root=new struct node[1];
    return root;
}

void print_dl(NODE root)
{
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->next;
    }
    cout<<endl;

}
NODE insert_front(NODE root,int num)
{
    NODE new_node=create_node();
    new_node->data=num;
    new_node->next=root;
    new_node->prev=NULL;
    if(root==NULL)
        return new_node;
    root->prev=new_node;
    return new_node;
}

NODE insert_end(NODE root,int num)
{
    NODE new_node=create_node();
    new_node->data=num;
    if(root==NULL)
    {
         new_node->next=root;
         new_node->prev=NULL;
         return new_node;
    }
    NODE temp=root;
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        {
            temp->next=new_node;
            new_node->prev=temp;
            new_node->next=NULL;
            return root;
        }
        temp=temp->next;
    }
}
NODE insert_pos(NODE root,int num,int pos)
{


    if(root==NULL)
    {
          return insert_front(root,num);
    }
    if(pos==1)
    {
        return insert_front(root,num);
    }
    pos=pos-2;
    NODE temp=root;
    while(pos--)
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        return insert_end(root,num);
    }
    NODE new_node=create_node();
    new_node->data=num;
    NODE after=temp->next;
    temp->next=new_node;
    new_node->prev=temp;
    new_node->next=after;
    after->prev=new_node;
    return root;
}

int del_front(NODE* root)
{

    NODE temp=*root;
    int pop;
    if(temp==NULL)
    {
        cout<<"LIST IS EMPTY ";
        cout<<endl;
        return 0;
    }
    if(temp->next==NULL)
    {
        pop=temp->data;
        *root=NULL;
        return pop;
    }
    pop=temp->data;
    *root=temp->next;
    (*root)->prev=NULL;
    return pop;
}
int del_end(NODE* root)
{
    NODE temp=*root;
    if(root==NULL)
    {
        return del_front(root);
    }
    while(temp!=NULL)
    {
        if(temp->next->next==NULL)
        {
            int pop=temp->next->data;
            temp->next=NULL;
             return pop;

        }
        temp=temp->next;
    }
}
int del_pos(NODE* root_dp,int pos)
{
    int pop;
    NODE root=*root_dp;
    if(root==NULL)
    {

        pop=del_front(root_dp);
        return pop;
    }
    if(pos==1)
    {
        pop=del_front(root_dp);
        return pop;
    }
    int count=pos-2;
    NODE temp=root;
    while(count--)
    {
        temp=temp->next;
    }

    NODE n2=temp->next->next;
    if(n2==NULL)
    {
        return del_end(root_dp);
    }
    pop=temp->next->data;
    temp->next=n2;
    n2->prev=temp;
    return pop;
}
int count_list(NODE root)
{
    int count=0;
    while(root!=NULL)
    {
        root=root->next;
        count++;
    }
    return count;
}
bool node_search(NODE root,NODE key)
{
    while(root!=NULL)
    {
        if(root==key)
            return true;
        root=root->next;

    }
    return false;
}
int main()
{
   NODE root=NULL;
  int tc=100;   //TESTECASE
  cout<<" CHOOSE AMONG THE FOLLOWING "<<endl;
  cout<<"1.INSERT FRONT"<<endl<<"2.INSERT END"<<endl<<"3.INSERT AT POS"<<endl;
  cout<<"4.DELETE FRONT"<<endl<<"5.DELETE END"<<endl<<"6.DELETE AT POS"<<endl<<"7.COUNT"<<endl<<"8.SEARCH"<<endl;
  while(tc--)
  {

  int choice;
  cout<<"ENTER CHOICE ";
  cin>>choice;
  int num; //data to be entered
  int pop,count;
  NODE* root_dp=&root;
  switch(choice)
  {
      case 1: cout<<"Enter the data ";
              cin>>num;
              root= insert_front(root,num);
              print_dl(root);
              break;
      case 2: cout<<"Enter the data ";
              cin>>num;
              root=insert_end(root,num);
              print_dl(root);
              break;
      case 3: int pos;
              cout<<"Enter the data ";
              cin>>num;
              cout<<"Enter the position ";
              cin>>pos;
              root=insert_pos(root,num,pos);
              print_dl(root);
              break;
      case 4: pop=del_front(root_dp);
              cout<<"POPPED ELEMENT "<<pop<<endl;
              print_dl(root);
              break;
      case 5: pop=del_end(root_dp);
              cout<<"POPPED ELEMENT "<<pop<<endl;
              print_dl(root);
              break;

      case 6: cout<<"Enter the position to delete data ";
              cin>>pos;
              pop=del_pos(root_dp,pos);
              cout<<"POPPED ELEMENT "<<pop<<endl;
              print_dl(root);
              break;
       case 7:count=count_list(root);
              cout<<"NUMBER OF NODES ARE: "<<count<<endl;
              break;
       case 8:if(node_search(root,root->next))
                  cout<<"FOUND"<<endl;
                  else
                    cout<<"NOT FOUND"<<endl;
                break;

      default : cout<<" WRONG CHOICE"<<endl;
                break;

  }
  }
}
