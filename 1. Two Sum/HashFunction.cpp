#include<bits/stdc++.h>
using namespace std;

/* auto init = []() {
    std::ios_base::sync_with_stdio(false); // 關閉 C++ 與 C 的輸入輸出同步
    std::cin.tie(nullptr);                // 解綁 cin 與 cout，不自動重新整理緩衝區
    return 0; 
}(); 一坨根本沒用 
*/

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        int n = static_cast<int>(nums.size());

        unordered_map<int , int> hash_map;
        // hash_map.reserve(n); 這個也是一坨 // 事先配置好記憶體，避免動態擴張與 Rehash，大幅節省空間與時間
        for(int i = 0 ; i < n; i++){
            int complement = target - nums[i];
            auto it = hash_map.find(complement);

            if(it != hash_map.end()){
                return {it->second , i};
            }
            else{
                hash_map.insert({nums[i], i});
            }
        }
        return {};
    }
};

