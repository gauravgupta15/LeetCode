class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s= 0;
        int e = arr.size()-1;
        while(s <= e) {
            int mid = s+(e-s)/2;
            if(mid+1 >=0 && mid-1 <= arr.size()-1 &&arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) return mid;
            else if(mid-1 <= arr.size()-1 && arr[mid] < arr[mid-1]) e = mid-1;
            else s = mid+1;
        }
        return 0;
    }
};