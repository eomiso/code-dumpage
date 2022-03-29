class Solution {
    func merge(_ nums1: inout [Int], _ m: Int, _ nums2: [Int], _ n: Int) {
        var idx1 = 0
        var idx2 = 0
        var _m  = m
        
        while idx1 < _m, idx2 < n {
            if nums1[idx1] > nums2[idx2] {
                nums1.insert(nums2[idx2], at: idx1)
                nums1.removeLast()
                idx1 += 1
                _m += 1
                idx2 += 1
            }
            else {
                idx1 += 1
            }
        }
        
        while idx2 < n {
            nums1[idx1] = nums2[idx2]
            idx1 += 1
            idx2 += 1
        }
        
    }
}
