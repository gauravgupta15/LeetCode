class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>lucky;
        // cout << "row "<<matrix.size()<<endl;
        for(int i=0; i<matrix.size(); i++) {
            // cout << "coumn "<<matrix[i].size()<<endl;
            int mini = 1000000;
            int maxi = 0;
            int s=0;
            for(int j=0; j<matrix[i].size(); j++) {
                if(mini > matrix[i][j]) {
                    mini =  matrix[i][j];
                    s=j;
                }
            }
            cout <<"mini " << mini <<endl;
        bool f=1;
            for(int k=0; k<matrix.size(); k++) {
                cout << matrix[k][s]<<endl;
                   if(matrix[k][s] > mini ) {
                    f=0;
                    break;
                }
            }
            if(f) {lucky.push_back(mini); break;}
        }
        return lucky;
    }
};