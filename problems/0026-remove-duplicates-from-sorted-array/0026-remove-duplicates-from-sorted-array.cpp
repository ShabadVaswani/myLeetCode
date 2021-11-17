class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int x = nums[0];
        int pt = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i]>x){
                x = nums[i];
                nums[pt] = x;
                pt = pt + 1;
            }
        }
        return pt;
    }
};