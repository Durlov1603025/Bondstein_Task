#include <bits/stdc++.h>

using namespace std;

pair<int, int> FindIndices(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int diff = target - nums[i];

        if (mp.count(diff)) {
            return {mp[diff], i};
        }

        mp[nums[i]] = i;
    }

    return {-1, -1}; 
}

int main() {
    vector<int> nums = {7, 9, 10, 11};
    int target = 18;

    pair<int, int> ans = FindIndices(nums, target);

    if (ans.first != -1) {
        cout << "The two correct indices are: " << ans.first << ", " << ans.second << endl;
    } 
    else {
        cout << "No such indices are found." << endl;
    }

    return 0;
}
