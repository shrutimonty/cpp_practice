#include<iostream>
#include<math.h>
using namespace std;
int xori(int a[],int m)
{
    int xori=a[0];
    for(int i=1;i<m;i++)
    {
       xori= a[i]^xori;
    }
    return xori;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int N;
        cin>>N;
        int sizee=2*N+2;
        int*a = new int[sizee];
        for(int i=0;i<sizee;i++)
            cin>>a[i];
        int totalxor,check,pos=0;
        totalxor=xori(a,sizee);

        while(totalxor!=0)
        {
            check=totalxor%2;
            if(check==1)
                break;
            totalxor=totalxor/2;
            pos++;

        }
        int andmat,j0=0,j1=0;
        andmat=pow(2,pos);

        int*a0 = new int[sizee];
        int*a1 = new int[sizee];
        for(int i=0;i<sizee;i++)
        {
            if(a[i]&andmat)
               {
                   a1[j1]=a[i];
                   j1++;

               }
            else
            {
                a0[j0]=a[i];
                j0++;
            }


        }
        int num1,num2;
        num1=xori(a1,j1);
        num2=xori(a0,j0);
        if(num1>num2)
            cout<<num2<<" "<<num1<<endl;
        else
            cout<<num1<<" "<<num2<<endl;




    }

}
