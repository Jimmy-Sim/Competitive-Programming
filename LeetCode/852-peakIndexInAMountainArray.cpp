class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = 0, j = arr.size() - 1, n = arr.size();
        while (i <= j) {
            int mid = (i + j) / 2;
            if ((mid == 0 || arr[mid - 1] < arr[mid]) && (mid == n - 1 || arr[mid + 1] < arr[mid])) return mid;

            else if (mid > 0 && arr[mid - 1] > arr[mid]) j = mid - 1;
            else i = mid + 1;
        }

        return -1;
    }
};
