class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int expectedSum = (N*(N+1))/2;
        for(int num : nums){
            expectedSum-=num;
        }
        return expectedSum;
    }
};