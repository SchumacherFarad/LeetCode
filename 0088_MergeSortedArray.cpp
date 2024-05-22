class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0){
            nums1 = nums2;
        }
        else if(n == 0){
            nums1 = nums1;
        }
        else{
            for(int i = m; i < (m+n); i++){
                nums1[i] = nums2[i-m];
            }
            for(int i = 0; i< (m+n); i++){
                for(int j = i+1; j <(m+n); j++){
                    if(nums1[i] > nums1[j]){
                        swap(nums1[i], nums1[j]);
                    }
                }
            }
        }
    }
};