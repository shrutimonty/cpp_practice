#include <iostream>

using namespace std;

int size=5;
class queue
{
public:
    int*a=new int[size];
    int rear;
    int front;
    //int size;
    queue()
    {
        front=-1;
        rear=-1;
    }
    bool isfull()
    {
        return (rear==size-1);
    }
    bool isempty()
    {
        return (front==rear==-1);
    }
    void enqueue(int x)
    {
        if(isfull())
        {
            cout<<"error-queue overflow"<<endl;
        }
        else
            a[++rear]=x;
    }
    int  dequeue()
    {
         if(isempty())
        {
            cout<<"error-queue underflow"<<endl;
        }
        else
            return a[++front];
    }
    void print()
    {
        for(int i=front+1;i<=rear;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }



};

int main()
{
   queue q;
   q.enqueue(2);
   q.enqueue(3);
   q.print();
   int m=q.dequeue();
   m=q.dequeue();
   q.print();
   q.enqueue(3);
   q.enqueue(4);

   q.enqueue(5);
   q.print();
   q.enqueue(6);
   q.enqueue(7);
   q.print();
   q.enqueue(8);

}
