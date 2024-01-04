class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1')
                {
                    count++;
                }
            }
            if(count>0)
            {
                v.push_back(count);
            }
        }
        int ans=0;
        if(v.size())
        {
            for(int i=0;i<v.size()-1;i++)
            {
                ans+=v[i]*v[i+1];
            }
        }
        return ans;
    }
};