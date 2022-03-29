class Solution {
    func subtractProductAndSum(_ n: Int) -> Int {
        return recursiveProd(n, 1) - recursiveSum(n, 0)
    }
    
    func recursiveProd(_ n: Int, _ prod: Int) -> Int{
        if n == 0 {
            return prod
        }
        let new_prod = prod * (n % 10)
        
        return recursiveProd(n / 10, new_prod)
    }
    
    func recursiveSum(_ n: Int, _ summ: Int) -> Int {
        if n == 0 {
            return summ
        }
        
        let new_sum = summ + (n % 10)
        return recursiveSum(n / 10, new_sum)
    }
}
