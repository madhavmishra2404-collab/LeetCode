class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int missing=-1;
        int duplicate=-1;
        int i, j,count;
        for(i=1; i<=n;i++)
        {
            count=0;
            for(j=0;j<n;j++)
            {
                if(nums[j]==i)
                count++;
            }
            if(count==0){
                missing=i;
            }
            if(count==2)
            {
                duplicate=i;
            }
            
        }
        return {duplicate,missing};
    }
};