#include <iostream>
using namespace std;

void mul_by_2(int** a)
{
    //*a=*a*2;
    int g=1;
    int *c=&g;
    a = &c;
}

int main()
{
    int b=10;
    int* p;
    p=&b;
    int **dp=&p;
    mul_by_2(dp);

    cout<<**dp<<endl;
    cout<<*p<<endl;
    cout<<b;

}
