#include <iostream>

using namespace std;

int size=10;

class stack
{
public:
    int top;
    int *a=new int[size];
    stack()
    {
        top=-1;
    }
  bool isempty()
  {
      return(top==-1);
  }
  bool isfull()
  {
      return (top==size-1);
  }
  void push(int x)
  {
      if(isfull())
      {
          cout<<"ERROR - STACK OVERFLOW"<<endl;
      }
      else
      a[++top]=x;
  }
  int pop()
  {
      if(isempty())
      {
          cout<<"ERROR- STACK UNDERFLOW"<<endl;
      }
      else
        return a[top--];
  }
  void print()
  {
      for(int i=0;i<=top;i++)
        cout<<a[i]<<" ";
      cout<<endl;
  }
};

int main()
{
    stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.print();
    s.push(6);
    s.push(7);
    s.print();
    int m=s.pop();
    int n=s.pop();
    s.print();
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);


}
