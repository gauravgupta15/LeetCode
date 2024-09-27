class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = 0;
        int i=0,j=height.size()-1;
        while(i<j) {
            int mini = min(height[j], height[i]);
            mx = max(mx, mini*(j-i));
            if(mini == height[i]) i++;
            else j--;
        }
        return mx;
    }
};