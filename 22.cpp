#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

vector<int> minAndMax(vector<int>& nums) {
    int m = nums.size();
    if (m == 1) return {0, 0};
    vector<int> res(2, 0);
    sort(nums.begin(), nums.end());
    int maxN = nums[m - 1], minN = nums[0];
    if (maxN == minN) {
        res[0] = res[1] = m * (m - 1) / 2;
        return res;
    }
    
    int n1 = 0, n2 = 0;
    for (int i = 0; i < m; ++i) {
        if (nums[i] != minN) break;
        ++n1;
    }
    for (int i = m - 1; i >= 0; --i) {
        if (nums[i] != maxN) break;
        ++n2;
    }
    res[1] = n1 * n2;
    
    map<int, int> m_;
    set<int> helper;
    for (int i = 0; i < m; ++i) {
        m_[i]++;
        if (m_[i] > 1) helper.insert(i);
    }
    if (!helper.empty()) {
        for (auto c : helper) {
            res[0] += m_[c] * (m_[c] - 1) / 2;
        }
    }
    else {
        int count = 0, minDiff = maxN - minN;
        for (int i = 1; i < m; ++i) {
            int tmp = nums[i] - nums[i - 1];
            if (tmp == minDiff) ++count;
            else if (tmp > minDiff) continue;
            else {
                minDiff = tmp;
                count = 1;
            }
        }
        res[0] = count;
    }
    return res;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> nums;
        int tmp, i = 0;
        while (i < n) {
            cin >> tmp;
            nums.push_back(tmp);
            ++i;
        }
        vector<int> res(2);
        res = minAndMax(nums);
        for (auto c : res) {
            cout << c << " ";
        }
        cout << endl;
    }
}
