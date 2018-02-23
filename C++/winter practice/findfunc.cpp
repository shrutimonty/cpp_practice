#include<iostream>
using namespace std;
int main()
{
    string strmain, strfin;
    cin>>strmain;
    cin>>strfin;
    int found,pos;
    bool check=false,isfind;
    for(int i=0;(i<strmain.length());i++)
    {
        isfind=true;
        if((strmain[i]==strfin[0])&&(check==false))
        {
            pos=i+1;
            found=i;
            for(int j=1;j<strfin.length();j++,pos++)
            {
                if(strmain[pos]!=strfin[j])
                {
                    isfind=false;
                    break;
                }
            }

            if(isfind==true)
            {
                cout<<found;
                check=true;
            }
        }
    }
    if(check==false)
    {
        cout<<-1;
    }
}
