class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var hashMap: [Int: Int] = [:]
        
        for (idx, item) in nums.enumerated() {
            if let targetIdx = hashMap[target-item], targetIdx != idx {
                return [targetIdx, idx]
            }
            hashMap[item] = idx
        }
        return [-1, -1]
    }
}
