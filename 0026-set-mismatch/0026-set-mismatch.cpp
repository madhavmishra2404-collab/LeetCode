class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(n+1,0);
        int missing=-1;
        int duplicate=-1;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for(int j=1;j<=n;j++)
        {
            if(freq[j]==0)
            missing=j;

            else if(freq[j]==2)
            duplicate=j;
        }
        
        return {duplicate,missing};
    }
};