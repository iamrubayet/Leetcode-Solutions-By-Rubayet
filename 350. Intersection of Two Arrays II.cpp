class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> result;
        int n1 = (int)nums1.size();
        int n2 = (int)nums2.size();
        int l1=0;
        int l2=0;
        while(l1<n1 && l2<n2 ){
            if(nums1[l1]==nums2[l2]){
                result.push_back(nums1[l1]);
                l1++;
                l2++;
            }
            else if(nums1[l1] > nums2[l2]){
                l2++;
            }
            else{
                l1++;
                
            }
        }
        return result;
        
    }
};