
def buildString(a, b, s):
    n = len(s)
    dp = [float('inf')] * (n + 1)
    dp[0] = 0

    for i in range(n):
        # Option 1: Add next character
        dp[i + 1] = min(dp[i + 1], dp[i] + a)

        # Option 2: Try to find the longest substring that can be copied
        for l in range(1, n - i + 1):
            sub = s[i:i + l]
            if sub in s[:i]:  # Can only copy from earlier part
                dp[i + l] = min(dp[i + l], dp[i] + b)
            else:
                break  # No point in continuing if current substring can't be found

    return dp[n]

    return 0  
