class Solution {
public:
    /**
     * 合并两个已排序的数组 nums2 到 nums1
     * 中，使合并后的数组仍然保持非递减顺序。
     *
     * @param nums1 目标数组，初始长度为 m + n，前 m 个元素有效，后 n 个元素为 0
     * @param m nums1 中有效元素的个数
     * @param nums2 需要合并的数组
     * @param n nums2 中有效元素的个数
     */
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m + n - 1; // 指向待合并的位置
        int j = m - 1; // 指向nums1的末尾
        int k = n - 1; // 指向nums2的末尾
        while (i >= 0) {
            //选择nums2末尾的条件
            //1.nums1中没有元素
            //2.nums1末尾小于nums2末尾
            if (j < 0 || (j >= 0 && k >= 0 && nums1[j] < nums2[k])) {
                nums1[i] = nums2[k];
                k--;
            } else {
                nums1[i] = nums1[j];
                j--;
            }
            i--;
        }
    }
};
