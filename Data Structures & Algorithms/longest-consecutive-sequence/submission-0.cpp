class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());

        int maxLen=1, currLen=1;
        for (int i=1; i<nums.size(); i++) {
            if (nums[i] == nums[i-1]+1) {
                currLen++;
                maxLen = max(currLen, maxLen);
            } else if (nums[i] == nums[i-1]) continue;
            else currLen=1;
        }

        return maxLen;
    }
};
