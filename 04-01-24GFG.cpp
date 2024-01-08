class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        unordered_map<int,int> m;
        for(int i=0;i<N;i++)
        {
            m[arr[i]]++;
        }
        for(auto it:m)
        {
            if(it.second==1)
            {
                return it.first;
            }
        }
        return 0;
    }
};