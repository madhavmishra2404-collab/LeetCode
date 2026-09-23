class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int h, w, A;
        int maxArea=0;
        int start=0, end=n-1;
        while(start<end)
        {
            h=min(height[start],height[end]);
            w=end-start;
            A=h*w;
            maxArea=max(maxArea,A);

            if(height[start]<height[end])
            start++;

            else
            end--;

        }
       
        return maxArea;
    

        
    }
};