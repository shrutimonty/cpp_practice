#include <iostream>

using namespace std;
typedef struct node* NODE;
struct node
{
    int data;
    NODE  next;
};
NODE create_node()
{
    NODE n1=new struct node[1];
    return n1;
}
class stack
{

  public:
    NODE insert_end(NODE head,int num)
    {
        NODE temp=head;
        NODE new_node=create_node();
        new_node->data=num;
        new_node->next=NULL;
        if(temp==NULL)
        {
            head=new_node;
            return head;
        }
        while(temp!=NULL)
        {
            if(temp->next==NULL)
            {
                temp->next=new_node;
                return head;
            }
            temp=temp->next;
        }
    }
    NODE delete_end(NODE head)
    {
        if(head==NULL)
        {
            cout<<"EMPTY STACK "<<endl;
            return head;
        }

        else
        {
            NODE temp=head;
            if(temp->next==NULL)
            {
                head=NULL;
                return head;
            }

            while(temp!=NULL)
            {
                if(temp->next->next==NULL)
                {
                    temp->next=NULL;
                    return head;
                }
                temp=temp->next;
            }
        }
    }
    void print_stack(NODE head)
    {
        while(head!=NULL)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }
};
class queue
{
public:
    NODE insert_rear(NODE head,int num)
    {
        NODE temp=head;
        NODE new_node=create_node();
        new_node->data=num;
        new_node->next=NULL;
        if(temp==NULL)
        {
            head=new_node;
            return head;
        }
        while(temp!=NULL)
        {
            if(temp->next==NULL)
            {
                temp->next=new_node;
                return head;
            }
            temp=temp->next;
        }
    }
    NODE delete_front(NODE head)
    {
        if(head==NULL)
        {
            cout<<"EMPTY QUEUE"<<endl;
            return head;
        }
        if(head->next==NULL)
        {
            head=NULL;
            return head;
        }
        NODE new_head=head->next;
        return new_head;
    }
    void print_queue(NODE head)
    {
        while(head!=NULL)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }
};

int main()
{
   char ch;
   cout<<"SELECT: "<<endl<<"A.STACK "<<endl<<"B.QUEUE "<<endl;
   cin>>ch;
   NODE head=NULL;
   if(ch=='a'|ch=='A')
   {
       stack s;
       cout<<"SELECT: "<<endl<<"1.PUSH "<<endl<<"2.POP "<<endl;
       int choice;
       int tc=10;
       while(tc--)
       {
           cin>>choice;
          switch(choice)
         {
           case 1 : int num;
                    cout<<"ENTER DATA ";
                    cin>>num;
                    head=s.insert_end(head,num);
                    cout<<"STACK CONTENTS " ;
                    s.print_stack(head);
                    break;
           case 2: head=s.delete_end(head);
                   cout<<"STACK CONTENTS " ;
                   s.print_stack(head);
                    break;
           default: cout<<"wrong choice"<<endl;
                    break;

          }
        }
      }
      else if(ch=='b'|ch=='B')
      {
           queue q;
           cout<<"SELECT: "<<endl<<"1.ENQUEUE "<<endl<<"2.DEQUEUE "<<endl;
           int choice;
           int tc=10;
           while(tc--)
        {
           cin>>choice;
          switch(choice)
         {
           case 1 : int num;
                    cout<<"ENTER DATA ";
                    cin>>num;
                    head=q.insert_rear(head,num);
                    cout<<"QUEUE CONTENTS " ;
                    q.print_queue(head);
                    break;
           case 2: head=q.delete_front(head);
                   cout<<"QUEUE CONTENTS " ;
                   q.print_queue(head);
                    break;
           default: cout<<"wrong choice"<<endl;
                    break;

          }
        }
      }

}
