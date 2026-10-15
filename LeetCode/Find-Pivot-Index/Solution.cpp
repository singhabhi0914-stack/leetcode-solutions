1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        vector<int> sum(nums.size());
5        int curr_sum=0;
6
7        for(int i=0;i<nums.size();i++){
8            curr_sum+=nums[i];
9            sum[i]=curr_sum;
10        }
11
12        if(curr_sum-nums[0]==0){
13            return 0;
14        }
15        for(int i=1;i<nums.size();i++){
16            int right_sum=curr_sum-sum[i];
17            if(right_sum==sum[i-1]){
18                return i;
19            }
20        }
21        return -1;
22    }
23};