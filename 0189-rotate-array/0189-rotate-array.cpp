class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%= n;
        vector<int> temp(n);
        int i=n-k, j=0;
        for(i=n-k; i<n;i++)
        {
            temp[j]=nums[i];
            j++;

        }
        for(i=0;i<n-k;i++)
        {
            temp[j]=nums[i];
            j++;
        }
        nums=temp;

    }
};