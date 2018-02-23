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
void print_cl(NODE root)
{
    if(root==NULL)
        cout<<"EMPTY LIST"<<endl;

   else
    {
        NODE temp=root;
        do
        {
            cout<<temp->data<<" ";
            temp=temp->next;

        }while(temp!=root);

        cout<<endl;
    }
}

NODE insert_front(NODE root,int num)
{
    NODE new_node=create_node();
    new_node->data=num;
    if(root==NULL)
    {
        new_node->next=new_node;
        return new_node;
    }
    NODE temp=root;
    while(temp->next!=root)
    {
        temp=temp->next;
    }
    new_node->next=root;
    temp->next=new_node;
    return new_node;


}
NODE insert_end(NODE root,int num)
{
    NODE new_node=create_node();
    new_node->data=num;
    if(root==NULL)
        return insert_front(root,num);
    NODE temp=root;
    while(temp->next!=root)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=root;
    return root;


}
NODE insert_pos(NODE root,int num,int pos)
{
   NODE new_node=create_node();
   new_node->data=num;
   if(root==NULL)
        return insert_front(root,num);
    if(pos==1)
            return insert_front(root,num);
   int count=pos-2;
   NODE temp=root;
   while(count--)
   {
       temp=temp->next;
   }
   if(temp->next==root)
   {
       return insert_end(root,num);
   }
   NODE n1=temp->next;
   temp->next=new_node;
   new_node->next=n1;
   return root;
}
int del_front(NODE *root)
{
    int pop;
    if(root==NULL)
    {
        return 0;
    }
    NODE temp=*root;
    if(temp->next==temp)
    {
        pop=temp->data;
        (*root)=NULL;
        return pop;
    }

    while(temp->next!=(*root))
    {
        temp=temp->next;
    }

    NODE end=temp;
    NODE n1=(*root)->next;
    pop=(*root)->data;
    (*root)=n1;
    end->next=n1;
    return pop;
}
int del_end(NODE* root)
{
    int pop;

    NODE temp=(*root);
    if(temp==NULL)
    {
        return 0;
    }
    if(temp->next==temp)
    {
        pop=temp->data;
        (*root)=NULL;
        return pop;

    }
    while(temp->next->next!=(*root))
    {
        temp=temp->next;
    }
    NODE n1=temp;
    pop=temp->next->data;
    n1->next=(*root);
    return pop;

}
int del_pos(NODE* root,int pos)
{
    int pop;
    NODE temp=(*root);
    if(temp==NULL)
    {
        return 0;
    }
    if(pos==1)
    {
       return del_front(root);
    }
   int count=pos-2;

   while(count--)
   {
       temp=temp->next;
   }
   NODE after=temp->next->next;
   pop=temp->next->data;
   temp->next=after;
   return pop;

}
int count_cl(NODE root)
{
    int count=0;\
    NODE temp=root;
    do
    {
        temp=temp->next;
        count++;
    }while(temp!=root);
    return count;
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
              print_cl(root);
              break;
      case 2: cout<<"Enter the data ";
              cin>>num;
              root=insert_end(root,num);
              print_cl(root);
              break;
     case 3: int pos;
              cout<<"Enter the data ";
              cin>>num;
              cout<<"Enter the position ";
              cin>>pos;
              root=insert_pos(root,num,pos);
              print_cl(root);
              break;
      case 4: pop=del_front(root_dp);
              cout<<"POPPED ELEMENT "<<pop<<endl;
              print_cl(root);
              break;
     case 5: pop=del_end(root_dp);
              cout<<"POPPED ELEMENT "<<pop<<endl;
              print_cl(root);
              break;
     case 6:  cout<<"Enter the position to delete data ";
              cin>>pos;
              pop=del_pos(root_dp,pos);
              cout<<"POPPED ELEMENT "<<pop<<endl;
              print_cl(root);
              break;
       case 7:count=count_cl(root);
              cout<<"NUMBER OF NODES ARE: "<<count<<endl;
              break;
       /*case 8:if(node_search(root,root->next))
                  cout<<"FOUND"<<endl;
                  else
                    cout<<"NOT FOUND"<<endl;
                break;*/

      default : cout<<" WRONG CHOICE"<<endl;
                break;

  }
  }
}

