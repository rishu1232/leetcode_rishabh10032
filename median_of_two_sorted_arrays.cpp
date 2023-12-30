#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int totalLength = n1 + n2;

        int i = 0, j = 0;
        vector<int> merged;

        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                merged.push_back(nums1[i]);
                i++;
            } else {
                merged.push_back(nums2[j]);
                j++;
            }
        }

        while (i < n1) {
            merged.push_back(nums1[i]);
            i++;
        }

        while (j < n2) {
            merged.push_back(nums2[j]);
            j++;
        }

        int k = merged.size();

        if (k % 2 == 0) {
            return (merged[k / 2 - 1] + merged[k / 2]) / 2.0;
        } else {
            return merged[k / 2];
        }
    }
};
