class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int> mp;
        int n=words.size();
        for(auto it:words)
        {
            for(int i=0;i<it.size();i++)
            {
                mp[it[i]]++;
            }
        }
        for(auto it:mp)
        {
            if(it.second%n)
            {
                return false;
            }
        }
        return true;
    }
};