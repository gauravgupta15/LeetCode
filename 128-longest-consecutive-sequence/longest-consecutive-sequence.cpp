class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1) return 0;
        
        // Priority Queue (Min-Heap) to sort the elements
        priority_queue<int, vector<int>, greater<int>> minH;
        
        // Push all elements into the min-heap
        for (int i : nums) {
            minH.push(i);
        }

        // Initialize counters
        int cnt = 1;   // Count for consecutive sequence
        int maxi = 1;  // Maximum length of consecutive sequence

        // Pop the first element to start the sequence
        int prev = minH.top();
        minH.pop();

        while (!minH.empty()) {
            int current = minH.top();
            minH.pop();

            // Check if the current number is consecutive to the previous one
            if (current == prev + 1) {
                cnt++;
            }
            // If it's a duplicate, just skip it
            else if (current != prev) {
                cnt = 1;  // Reset counter for non-consecutive elements
            }

            // Update the maximum sequence length
            maxi = max(maxi, cnt);

            // Update previous number for the next iteration
            prev = current;
        }

        return maxi;
    }
};
