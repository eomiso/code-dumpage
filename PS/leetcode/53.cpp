#include <iostream>
#include <cstdlib>
#include <vector>
#define LOW_IDX  0
#define HIGH_IDX 1
#define SUM_IDX  2

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> ret(maxArray(nums, 0, nums.size()-1));
        // for (auto i: ret) cout << i << endl;
        return ret[SUM_IDX];
    }
    
    vector<int> maxArray(vector<int>& A, int low, int high) {
        if (low == high) {
            vector<int> ret {low, high, A[low]};
            return ret;
        }
        
        int mid = (low + high) / 2;
        vector<int> leftMax  = maxArray(A, low, mid);
        vector<int> rightMax = maxArray(A, mid+1, high);
        vector<int> crossMax = maxCross(A, low, mid, high);
        
        if (leftMax[SUM_IDX] >= righMax[SUM_IDX] && leftMax[SUM_IDX] >= crossMax[SUM_IDX])
            return leftMax;
        else if (rightMax[SUM_IDX] >= leftMax[SUM_IDX] && rightMax[SUM_IDX] >= crossMax[SUM_IDX])
            return rightMax;
        else
            return crossMax;
    }
    
    vector<int> maxCross(vector<int>& A, int low, int mid, int high) {
        int sum = 0;
        int leftMax  = INT_MIN, 
            rightMax = INT_MIN;
        int retLow, retHigh;
        for(int i = mid; i >= low; i--) {
            sum += A[i];
            if (sum > leftMax) {
                leftMax = sum;
                retLow = i;
            }
        }
        
        
        sum = 0;
        for(int i = mid+1; i < high+1; i++) {
            sum += A[i];
            if (sum > rightMax) {
                rightMax = sum;
                retHigh = i;
            }
        }
        
        vector<int> ret{retLow, retHigh, leftMax + rightMax};
        //for (auto i: ret) cout << i << " ";
        //cout << "\n";
        return ret;
    }
    
};t
