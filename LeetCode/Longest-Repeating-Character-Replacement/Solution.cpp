1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        int ans=0;
5        int frr[26]={0};
6        int r=0;
7        int l=0;
8        int max_frr=0;
9        
10        while(r<s.size()){
11            frr[s[r]-'A']++;
12            max_frr=max(frr[s[r]-'A'],max_frr);
13            int change=r-l+1-max_frr;
14            
15            while(change>k){
16                frr[s[l]-'A']--;
17                l++;
18                change=r-l+1-max_frr;
19            }
20            ans=max(ans,r-l+1);
21            r++;
22        }
23        return ans;
24    }
25};