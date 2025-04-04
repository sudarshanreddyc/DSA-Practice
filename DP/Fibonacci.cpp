class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        vector<int> memo(n + 1);
        memo[0] = 0;
        memo[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            memo[i] = memo[i - 1] + memo[i - 2];
        }
        return memo[n];
    }
};