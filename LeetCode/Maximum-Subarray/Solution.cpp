1#include <limits>
2class Solution {
3public:
4    int maxSubArray(vector<int>& nums) {
5        int ans=INT_MIN;
6        int s=0;
7        for(int i=0;i<nums.size();i++){
8            if(s+nums[i]<nums[i]){
9                s=nums[i];
10            }
11            else{
12                s+=nums[i];
13            }
14            ans=max(ans,s);
15            
16        }
17        
18        return ans;
19    }
20};