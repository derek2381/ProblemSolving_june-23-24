// problem link
// https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/description/


class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float> res;

        sort(nums.begin(),nums.end());

        int i = 0, j=nums.size()-1;

        while(i < j){
            res.push_back((nums[i]+nums[j])/2.0);
            i++;
            j--;
        }
        sort(res.begin(), res.end());
        return res[0];

    }
};
