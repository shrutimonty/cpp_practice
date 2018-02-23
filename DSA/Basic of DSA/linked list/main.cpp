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
    NODE n1= new struct node[1];
    n1->next=NULL;
    return n1;
}

NODE insert_front(NODE root,int num)
{
    NODE new_node=create_node();
    new_node->data=num;
    if(root==NULL)
    {
       new_node->next=NULL;
       return new_node;
    }
    else
    {
       new_node->next=root;
       return new_node;
    }

}
NODE insert_end(NODE root,int num)
{

    if(root==NULL)
    {
      NODE new_node=insert_front(root,num);
      return new_node;

    }
    else
    {
       NODE new_node =create_node();
       new_node->data=num;
       NODE temp=root;
       while(temp!=NULL)
       {
        if(temp->next==NULL)
        {
            temp->next=new_node;
            break;
        }
        temp=temp->next;
       }
       return root;
    }

}
NODE insert_pos( NODE root,int pos,int num)
{
    NODE new_node=create_node();
    new_node->data=num;
    if(root==NULL)
    {
      new_node=insert_front(root,num);
      return new_node;
    }
    else if(pos==1)
    {
       new_node->next=root;
       return new_node;
    }
    else
    {
         int count=pos-2;
         NODE temp=root;
         while(count--)
        {
           temp=temp->next;
        }

       NODE n2=temp->next;
       temp->next=new_node;
       new_node->next=n2;
       return root;
    }


}
int delete_front(NODE* root)
{
    if(*root==NULL)
    {
       cout<<"ALREADY DELETED ";
       return 0;
    }
    NODE temp=*root;
    int pop=temp->data;
    *root=temp->next;
    delete temp;
    return pop;
}
int delete_end(NODE* root_dp)
{
     int pop;
     NODE root=*root_dp;
     if(root==NULL)
    {

        pop=delete_front(root_dp);
        return pop;
    }
    NODE temp=root;
    if(temp->next==NULL)
    {

        pop=delete_front(root_dp);
        return pop;
    }

    while(temp->next!=NULL)
    {
       if(temp->next->next==NULL)
       {
           NODE n1=temp->next;
           pop=n1->data;
           temp->next=NULL;
           return pop;

       }
       temp=temp->next;

    }

}
int delete_position(NODE* root_dp,int pos)
{


    int pop;
    NODE root=*root_dp;
    if(root==NULL)
    {

        pop=delete_front(root_dp);
        return pop;
    }
    if(pos==1)
    {
        pop=delete_front(root_dp);
        return pop;
    }
    int count=pos-2;
    NODE temp=root;
    while(count--)
    {
        temp=temp->next;
    }
    NODE n2=temp->next->next;
    pop=temp->next->data;
    temp->next=n2;
    return pop;

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

int main()
{
  NODE root=NULL;
  int tc=100;   //TESTECASE
  cout<<" CHOOSE AMONG THE FOLLOWING "<<endl;
  cout<<"1.INSERT FRONT"<<endl<<"2.INSERT END"<<endl<<"3.INSERT AT POS"<<endl;
  cout<<"4.DELETE FRONT"<<endl<<"5.DELETE END"<<endl<<"6.DELETE AT POS"<<endl<<"7.COUNT"<<endl;
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
              print_list(root);
              break;
      case 2: cout<<"Enter the data ";
              cin>>num;
              root=insert_end(root,num);
              print_list(root);
              break;
      case 3: int pos;
              cout<<"Enter the data ";
              cin>>num;
              cout<<"Enter the position ";
              cin>>pos;
              root=insert_pos(root,pos,num);
              print_list(root);
              break;
      case 4: pop=delete_front(root_dp);
              cout<<"POPPED ELEMENT "<<pop<<endl;
              print_list(root);
              break;
      case 5: pop=delete_end(root_dp);
              cout<<"POPPED ELEMENT "<<pop<<endl;
              print_list(root);
              break;

      case 6: cout<<"Enter the position to delete data ";
              cin>>pos;
              pop=delete_position(root_dp,pos);
              cout<<"POPPED ELEMENT "<<pop<<endl;
              print_list(root);
              break;
       case 7:count=count_list(root);
              cout<<"NUMBER OF NODES ARE: "<<count<<endl;
              break;

      default : cout<<" WRONG CHOICE"<<endl;
                break;

  }
  }




}
