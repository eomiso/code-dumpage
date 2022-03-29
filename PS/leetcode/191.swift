class Solution {
    func hammingWeight(_ n: Int) -> Int {
        var flag = 1
        var count = 0
        for i in 0..<32 {
            if ((flag & n) >> i == 1) {
                count += 1
            }
            flag = flag << 1
        }
        return count
    }
}
