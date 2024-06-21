class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum=0;
        for(int i=0; i<grumpy.size(); i++) {
            if(grumpy[i] == 0) sum+=customers[i];
        }
        int i=0,j=0,maxi=0,check=0;
        while(j<customers.size()) {
            if(grumpy[j] == 1)
                check+=customers[j];
            cout << check<< endl;
            if(j-i+1 < minutes) j++;
            else {
                maxi=max(check,maxi);
                if(grumpy[i] == 1)
                    check-=customers[i];
                i++;
                j++;
            }
        }
        cout << sum << " "<<maxi;
        sum+=maxi;
        return sum;
    
    }
};