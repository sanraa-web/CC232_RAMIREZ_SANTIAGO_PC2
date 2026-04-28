#include <iostream>
#include <vector>
#include "deque.h"

int maxScore(std::vector<int>& nums, int k) {
    int n = nums.size();
    std::vector<int> dp(n);
    
    dp[0] = nums[0];
    
    ods::Deque<int> dq;
    dq.addBack(0);
    
    for (int i = 1; i < n; ++i) {
        while (!dq.empty() && dq.front() < i - k) {
            dq.removeFront();
        }
        
        dp[i] = dp[dq.front()] + nums[i];
        
        while (!dq.empty() && dp[dq.back()] <= dp[i]) {
            dq.removeBack();
        }
        
        dq.addBack(i);
    }
    
    return dp[n - 1];
}

int main() {
    // ejm1 del leetcode
    std::vector<int> num1 = {1, -1, -2, 4, -7, 3};
    int k1 = 2;
    int result1 = maxScore(num1, k1);
    
    std::cout << "ejemplo 1:" << std::endl;
    std::cout << "nums = [1,-1,-2,4,-7,3], k = 2" << std::endl;
    std::cout << "salida: " << result1 << std::endl;
    

    return 0;
}