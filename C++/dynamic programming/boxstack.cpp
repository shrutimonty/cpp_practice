#include<iostream>
#include<algorithm>
using namespace std;
struct box
{
	int h;
	int w;
	int d;
};
/*1.All orientations of box 
  2.Assume w<d
  3.sort by decreasing area
  4.write dp structure*/
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
bool cmp(struct box b1,struct box b2)
{
	if((b1.w)*(b1.d)>(b2.w)*(b2.d))
		return true;
	else 
		return false;
	/*else if((b1.w)*(b1.d)==(b2.w)*(b2.d))
	{
		if(b1.h>b2.h)
			return true;
		else
			return false;
	}*/
}
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		struct box* a=new struct box[n];
		struct box* rot=new struct box[3*n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i].h;
			cin>>a[i].w;
			cin>>a[i].d;
		}
		int index=0;
		for(int i=0;i<n;i++)
		{
			rot[index].h=a[i].h;
			rot[index].d= max(a[i].w,a[i].d);
			rot[index].w=min(a[i].w,a[i].d);
			index++;

			rot[index].h=a[i].w;
			rot[index].d= max(a[i].h,a[i].d);
			rot[index].w=min(a[i].h,a[i].d);
			index++;

			rot[index].h=a[i].d;
			rot[index].d= max(a[i].h,a[i].w);
			rot[index].w=min(a[i].h,a[i].w);
			index++;

		}
		n=3*n;
		sort(rot,rot+n,cmp);
		/*for(int i=0;i<n;i++)
		{
			cout<<rot[i].h<<" ";
			cout<<rot[i].w<<" ";
			cout<<rot[i].d<<" ";
			cout<<endl;

		}*/
		int *msh=new int[n];
		for(int i=0;i<n;i++)
			msh[i]=rot[i].h;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if((rot[i].w < rot[j].w)&&(rot[i].d < rot[j].d))
				{
					if((msh[i]<msh[j]+rot[i].h))
						msh[i]=msh[j]+rot[i].h;
				}
			}
		}
		int max=-1;
		for(int i=0;i<n;i++)
		{
			if(max<msh[i])
				max=msh[i];
		}
		cout<<max<<endl;
	}
}