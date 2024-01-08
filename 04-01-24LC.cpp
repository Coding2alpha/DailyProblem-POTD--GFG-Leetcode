class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second==1)
            {
                return -1;
            }
            if(it.second%3==0)
            {
                ans+=it.second/3;
            }
            else
            {
                ans+=it.second/3 + 1;
            }
        }
        return ans;
    }
    
};