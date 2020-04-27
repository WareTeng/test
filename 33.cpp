#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, num;
    while (cin >> n) {
        vector<vector<int>> nums(n, vector<int>(4));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 4; ++j) {
                cin >> num;
                nums[i].push_back(num);
            }
        }
        
        vector<vector<int>> dp(n + 1, vector<int>(3, 0));
        vector<vector<int>> t(n + 1, vector<int>(3, 0));
        t[0][0] = t[0][1] = t[0][2] = 120;

        for (int i = 1; i <= n; ++i) {
            int tList[3] = {0, nums[i][0], nums[i][2]};
            int sList[3] = {0, nums[i][1], nums[i][3]};
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 3; ++k) {
                    if (t[i - 1][k] - tList[j] >= 0) {
                        if (dp[i - 1][k] + sList[k] >= dp[i][j]) {
                            dp[i][j] = dp[i - 1][k] + sList[k];
                            t[i][j] = max(t[i][j], t[i - 1][k] - tList[k]);
                        }
                    }
                }
            }
        }
        int res = max(dp[n][0], max(dp[n][1], dp[n][2]));
        cout << res << endl;
    }
    return 0;
}
