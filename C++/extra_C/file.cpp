#include <iostream>
using namespace std;
void achange_val(int* &anew)
{
    int g=30;
    anew = &g;
    //*anew=*anew*2;
}

int main()
{
   int a=10;
   int *t=&a;
   achange_val(t);
   cout<<*t;

}
