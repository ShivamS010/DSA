class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //last to first break point finding
        int index=-1;
        int l=nums.size();
        for(int i=l-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin() , nums.end());
            return;
        }
        for(int j=l-1;j>index;j--){
            if(nums[j]>nums[index]){
                swap(nums[j],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1, nums.end());
        return;
    }
};