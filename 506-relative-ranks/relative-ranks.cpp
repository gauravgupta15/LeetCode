class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans(score.size());
        
        priority_queue<pair<int,int>>mxH;

        for(int i=0; i<score.size(); i++) {
            mxH.push({score[i],i});
        }
        int k = 1;
        while(!mxH.empty()) {
            if(k==1) 
                ans[mxH.top().second] = "Gold Medal";
            else if(k==2) 
                ans[mxH.top().second] = "Silver Medal";     
            else if(k==3) 
                ans[mxH.top().second] = "Bronze Medal";
            else 
                ans[mxH.top().second] = to_string(k);

            k++;
            mxH.pop();
            
        }
        return ans;
    }
};