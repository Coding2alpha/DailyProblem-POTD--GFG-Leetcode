class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        int sum=0;
        int ans=-1e9;
        for(int i=0;i<k;i++)
        {
            sum+=a[i];
        }
        ans=max(ans,sum);
        int j=0;
        int last=0;
        for(int i=k;i<n;i++)
        {
            sum+=a[i];
            ans=max(ans,sum);
            last+=a[j];
            j++;
            if(last<0)
            {
                sum-=last;
                last=0;
                ans=max(ans,sum);
            }
        }
        return ans;
    }
};