#include <bits/stdc++.h>
using namespace std;

void SubarrayWithMaxSum(vector<int>& nums) {
    int endIndex, currMax = nums[0];
    int globalMax = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        currMax = max(nums[i], nums[i] + currMax);
        if (currMax > globalMax) {
            globalMax = currMax;
            endIndex = i;
        }
    }

    int startIndex = endIndex;
    while (startIndex >= 0) {
        globalMax -= nums[startIndex];
        if (globalMax == 0)
            break;
        startIndex--;
    }

    for (int i = startIndex; i <= endIndex; ++i) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> arr = {4, 1, 2, 1};
    SubarrayWithMaxSum(arr);
    return 0;
}
