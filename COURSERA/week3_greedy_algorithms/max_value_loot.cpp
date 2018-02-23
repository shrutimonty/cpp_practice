#include<iostream>
#include<algorithm>
using namespace std;
struct object
{
    double value;
    double weight;
};
bool cmp(struct object obj1,struct object obj2)
{
    return ((obj1.value/obj1.weight)>(obj2.value/obj2.weight));
}
double knapsack(struct object* arr,int64_t n,int64_t capacity)
{
    sort(arr,arr+n,cmp);
    double value = 0.0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].weight<capacity)
        {
            capacity=capacity-arr[i].weight;
            value=value+arr[i].value;

        }
        else
        {
            value=value+capacity*(arr[i].value)/(arr[i].weight);
            break;
        }

    }
    return value;
}



int main()
{
    int64_t capacity;
    int n;
    cin>>n>>capacity;
    struct object* arr=new struct object[n];
    for(int i=0;i<n;i++)
        cin>>arr[i].value>>arr[i].weight;
    double optimal_value=knapsack(arr,n,capacity);
    cout.precision(10);
    cout<<optimal_value<<endl;

}
