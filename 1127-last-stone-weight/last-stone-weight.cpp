class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>p;
        for(int i : stones) {
            p.push(i);
        }
       while(!p.empty()) {
            if(p.size() == 1) return p.top();
            int n1 = p.top();
            p.pop();
            int n2 = p.top();
            cout << n1 <<" "<<n2;
            p.pop();
            if(n1 > n2) {
                p.push(n1-n2);
            }

        }
        return 0;
    }
};