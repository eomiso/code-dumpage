class Solution {
    func maxSubArray(_ nums: [Int]) -> Int {
        let ret: (low: Int, high: Int, sum: Int) = maxSub(nums, 0, nums.count-1)
        print(ret)
        return ret.sum
    }
    
    
    func maxSub(_ A:[Int], _ low: Int, _ high: Int) -> (Int, Int, Int) {
        var params: (low: Int, high: Int, sum: Int)
        
        if low == high {
            return (low, high, A[low])
        }
        
        let mid = (low + high) / 2
        
        let leftSub:  (low: Int, high: Int, sum: Int) = maxSub(A, low, mid)
        let rightSub: (low: Int, high: Int, sum: Int) = maxSub(A, mid+1, high)
        let maxCross: (low: Int, high: Int, sum: Int) = maxCrossing(A, low, mid, high)
        
        switch max(leftSub.sum, rightSub.sum, maxCross.sum) {
        case leftSub.sum:
            return leftSub
        case rightSub.sum:
            return rightSub
        case maxCross.sum:
            return maxCross
        default:
            print("Error")
            return (-1, -1, -1)
        }
        
    }
    
    func maxCrossing(_ A: [Int], _ low: Int, _ mid: Int, _ high: Int) -> (Int, Int, Int){
        var leftSum = Int.min
        var sum = 0;
        
        var retLow: Int
        var retHigh: Int
        
        for i in (low...mid).reversed() {
            sum += A[i]
            if sum > leftSum {
                leftSum = sum
                retLow = i
            }
        }
        
        var rightSum = Int.min
        sum = 0;
        
        for i in (mid+1...high) {
            sum += A[i]
            if sum > rightSum {
                rightSum = sum
                retHigh = i
            }
        }
        
        return (low, high, leftSum + rightSum)
    }
}
