class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>index;
        int i=0,j=numbers.size()-1;
        while(i<=j) {
            if(numbers[i]+numbers[j] == target){ 
                index.push_back(i+1);
                index.push_back(j+1);
                return index;
            } else if(numbers[i] + numbers[j] > target) {
                j--;
            } else i++;
        } 
        return {-1,-1};
    }
};