#include<iostream>
using namespace std;
bool isinterleave(string strc,int posC,string stra,int posA,string strb,int posB)
{

    if(posA==stra.length())
    {
        if(strc.substr(posC)==strb.substr(posB))
            return true;
        else
            return false;
    }
     if(posB==strb.length())
    {
        if(strc.substr(posC)==stra.substr(posA))
            return true;
        else
            return false;
    }
    if(posC==strc.length())
        return false;
    if((strc[posC]==stra[posA])&&(strc[posC]==strb[posB]))
        return (isinterleave(strc,posC+1,stra,posA+1,strb,posB)||isinterleave(strc,posC+1,stra,posA,strb,posB+1));
     if(strc[posC]==stra[posA])
        return (isinterleave(strc,posC+1,stra,posA+1,strb,posB));
    else if(strc[posC]==strb[posB])
        return(isinterleave(strc,posC+1,stra,posA,strb,posB+1));
    else
        return false;


}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string stra,strb,strc;
        cin>>stra;
        cin>>strb;
        cin>>strc;
        int posA =0,posB=0,posC=0;
        if(isinterleave(strc,posC,stra,posA,strb,posB))
            cout<<'1';
        else
            cout<<'0';
    }
}
