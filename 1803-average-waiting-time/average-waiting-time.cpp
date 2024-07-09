class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int chef = 0;
        double ans = 0,cnt=0;
        // cout << customers[0].size();
        for(int i=0; i<customers.size(); i++) {
            if(chef < customers[i][0]) {
                chef = customers[i][0];
                cout <<"arriving : " <<chef << endl;
            }
            chef+=customers[i][1];
            cout << chef << endl;
            ans+=(chef - customers[i][0]);
            cout <<"watiting : "<<ans<<endl;
            cnt++;
        }
        return ans/cnt;
    }
};