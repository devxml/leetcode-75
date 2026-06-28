class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer;

        for (int i = 0; i < n; i++) {
            int mult = 1;

            for (int j = 0; j < n; j++) {
                if (j == i)
                    continue;

                mult *= nums[j];
            }

            answer.push_back(mult);
        }

        return answer;
    }
};