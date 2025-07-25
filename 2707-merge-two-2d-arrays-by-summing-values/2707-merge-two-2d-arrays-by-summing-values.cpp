class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int i=0,j=0;
        vector<vector<int>>ans;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i][0]==nums2[j][0]){
                nums1[i][1]+=nums2[j][1];
                ans.push_back(nums1[i]);
                i++;j++;
            }
            else if(nums1[i][0]>nums2[j][0]){
                ans.push_back(nums2[j]);
                j++;
            }
            else {
                ans.push_back(nums1[i]);
                i++;
            }
        }
        while(j<nums2.size())ans.push_back(nums2[j++]);
        while(i<nums1.size())ans.push_back(nums1[i++]);
        return ans;
    }
};