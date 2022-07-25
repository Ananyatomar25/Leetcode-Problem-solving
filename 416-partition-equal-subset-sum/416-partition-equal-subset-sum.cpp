class Solution
{
    public:

        bool help(int k, int n, vector<int> nums)
        {

            vector<vector < bool>> dp(n, vector<bool> (k + 1, 0));

            for (int i = 0; i < n; i++)
            {
                dp[i][0] = true;
            }

            if (nums[0] <= k) dp[0][nums[0]] = true;

            for (int i = 1; i < n; i++)
            {
                for (int tar = 1; tar <= k; tar++)
                {
                    bool notTake = dp[i - 1][tar];
                    bool take = false;
                    if (nums[i] <= tar)
                    {
                        take = dp[i - 1][tar - nums[i]];
                    }
                    dp[i][tar] = notTake || take;
                }
            }
            return dp[n - 1][k];
        }

    bool canPartition(vector<int> &nums)
    {

        int n = nums.size();
        int totSum = 0;
        for (int i = 0; i < n; i++)
        {
            totSum += nums[i];
        }

        int k = totSum / 2;

        if (totSum % 2) return false;

        return help(k, n, nums);
    }
};