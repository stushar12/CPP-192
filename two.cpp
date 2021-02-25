#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    while (true)
    {
        int n;
        cin>>n;

        if(n==0)
        return 0;

        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int m;
        cin>>m;
        int arr1[m];
        for(int i=0;i<m;i++)
        cin>>arr1[i];

        int s1=0,s2=0,maxsum=0;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(arr[i]<arr1[j])
            {
                s1+=arr[i++];
            }
            else if(arr1[j]<arr[i])
            {
                s2+=arr1[j++];
            }
            else
            {
                maxsum=maxsum+max(s1,s2)+arr[i];
                i++;
                j++;
                s1=0;
                s2=0;
            }
		}
            while(i<n)
            {
                s1+=arr[i++];
            }
            while(j<m)
            {
                s2+=arr1[j++];
            }
            maxsum=maxsum+max(s1,s2);
            cout<<maxsum<<endl;
        }
}