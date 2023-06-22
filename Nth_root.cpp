#include<bits/stdc++.h>
using namespace std;
//find the nth root of an element
//root=root value
//n=main value/the number to find the root
double multiply(double m,int r)
{
    double ans=1;
    for(int i=0;i<r;i++)
    {
        ans*=m;
    }
    return ans;
}
double eps=1e-6;
int main()
{
    double n;
    int root;
    cin >> root;
    cin >>n;
    double mid,low=1,high=n;
    while(high-low>eps)
    {
        mid=(high+low)/2;
        if(multiply(mid,root)<n)
        {
            low=mid;
        }
        else high=mid;
    }
    cout <<setprecision(6)<< low <<endl;
}