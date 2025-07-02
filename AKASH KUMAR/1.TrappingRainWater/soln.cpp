//For LeetCode enviroment 
//Time Complexity=0(n)
//Space COmplexity=0(1)
class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        int l,r,ans=0,lmax=0,rmax=0;
        l=0,r=n-1;
        while(l<r)
        {
            if(height[l]<=height[r])
            {
                if(lmax>height[l])
                {
                    ans+=lmax-height[l];
                }
                else
                {
                    lmax=height[l];
                }
                l++;
            }
            else
            {
                if(rmax>height[r])
                {
                    ans+=rmax-height[r];
                }
                else
                {
                    rmax=height[r];
                }
                r--;
            }
        }
        return ans;

           
    }
};

















//For Local enviroment 
//Time Complexity=0(n)
//Space COmplexity=0(1)
#include <bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) 
{
    int n=height.size();
    int l,r,ans=0,lmax=0,rmax=0;
    l=0,r=n-1;
    while(l<r)
    {
        if(height[l]<=height[r])
        {
            if(lmax>height[l])
            {
                ans+=lmax-height[l];
            }
            else
            {
                lmax=height[l];
            }
            l++;
        }
        else
            {
            if (rmax>height[r])
            {
                ans+=rmax-height[r];
            }
            else
            {
                rmax=height[r];
            }
            r--;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    vector<int> height(n);
    cout << "Enter the heights:";
    for (int i=0;i<n;i++)
    {
        cin>>height[i];
    }
    int result=trap(height);
    cout << "Amount of trapped water: " << result << endl;

    return 0;
}
