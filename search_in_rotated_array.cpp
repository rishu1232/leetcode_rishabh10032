class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int k = 0;
        while(s <= e){
            if(nums[s]==target){
             return s;
             break;
            }
            else if(nums[e]==target){
            return e;
            break;
            }
            else{
                s++;
                e--;
            }
        }
       return -1;
    }
};
