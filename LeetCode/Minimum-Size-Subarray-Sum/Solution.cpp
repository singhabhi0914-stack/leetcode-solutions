1#include <climits>
2class Solution {
3public:
4    int minSubArrayLen(int target, vector<int>& nums) {
5
6        int min_value=INT_MAX;
7        int sum1=0;
8        int l=0;
9        int r=0;
10        while (r<=nums.size() ){
11            if(sum1<target && r<nums.size()){
12                sum1+=nums[r++];
13            }
14            else if(sum1>=target){
15                min_value=min(min_value,(r-l));
16                sum1-=nums[l++];
17            }
18            else{
19                break;
20            }
21            
22        }
23        return min_value==INT_MAX? 0 :min_value;
24    }
25};