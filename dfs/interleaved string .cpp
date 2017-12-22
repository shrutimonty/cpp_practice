#include<iostream>
using namespace std;
bool ischeck(string stra,string strb,string strc,int posa,int posb,int posc)
{
    bool chu;
    if(stra.length()+strb.length()!=strc.length())
    {
        return false;
    }
    if(posa==stra.length())
    {

        if(strc.substr(posc)==strb.substr(posb))
            return true;
        else
                return false;
    }
     else if(posb==strb.length())
    {

        if(strc.substr(posc)==stra.substr(posa))
            return true;
         else
                return false;
    }

    if((strc[posc]==stra[posa])&&(strc[posc]==strb[posb]))
        return (ischeck(stra,strb,strc,posa+1,posb,posc+1)||ischeck(stra,strb,strc,posa,posb+1,posc+1));
    else if(strc[posc]==stra[posa])
        return ischeck(stra,strb,strc,posa+1,posb,posc+1);
    else if(strc[posc]==strb[posb])
        return ischeck(stra,strb,strc,posa,posb+1,posc+1);
    else
        return false;



}
int main()
{
    string stra,strb,strc;
    cin>>stra;
    cin>>strb;
    cin>>strc;
    int posa=0,posb=0,posc=0;
    bool check = ischeck(stra,strb,strc,posa,posb,posc);
    if(check)
        cout<<1;
    else
        cout<<0;
}
