#include <iostream>
using namespace std;
struct pairq
{
    int val1;
    int val2;
};
struct pairq increment(int a,int b)
{

    struct pairq p;
    a++;
    b++;
    p.val1=a;
    p.val2=b;
    return p;
}

int main()
{
    int num=2;
    int num1=3;
    struct pairq ans;
    ans=increment(num,num1);
    cout<<ans.val1;
    cout<<endl<<ans.val2;
}

