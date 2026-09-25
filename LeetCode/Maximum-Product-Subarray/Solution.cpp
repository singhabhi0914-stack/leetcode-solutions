1#include <limits>
2class Solution {
3public:
4    int maxProduct(vector<int>& nums) {
5        int ans=INT_MIN;
6        int mn=1;
7        int mx=1;
8        
9        for(int i=0;i<nums.size();i++){
10            int new_min=min(mn*nums[i],min(nums[i],mx*nums[i]));
11            int new_max=max(mn*nums[i],max(nums[i],mx*nums[i]));
12            mn=new_min;
13            mx=new_max;
14            ans=max(ans,mx);
15        }
16        
17        return ans;
18    }
19};