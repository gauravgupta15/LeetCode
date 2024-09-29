class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int>arr;
        vector<vector<int>>ans;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0; i<m; i++) {
            for(int j=n-1; j>=0; j--) {
                arr.push_back(matrix[j][i]);
            }
            ans.push_back(arr);
            arr.clear();
        }
        matrix = ans;

    }
};