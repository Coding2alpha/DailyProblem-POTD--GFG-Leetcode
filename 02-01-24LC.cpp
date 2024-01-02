class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int maxi=-1e9;
        for(auto it:mp)
        {
            maxi=max(maxi,it.second);
        }
        vector<vector<int>> ans;
        for(int i=0;i<maxi;i++)
        {
            vector<int> temp;
            for(auto it:mp)
            {
                if(it.second>0)
                {
                    mp[it.first]--;
                    temp.push_back(it.first);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};