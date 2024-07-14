#include<bits/stdc++.h>
using namespace std;
 
int dp[20][2][200];
int primes[46] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
/////////////////////////////////////////////////
 
bool isPrime(int x) {
    for (int i = 0; i < 46; i++)
        if (primes[i] == x)
            return true;
    return false;
}
 
//count of all numbers in [0,ss] which have prime sum of digits
//dp[i][tight][sum]  =>  number of suffixes[i..n-1] with sum of its digits = 'sum'
//NOTE: prime is only checked at last, dp itself only holds count of numbers
 
int digit_dp(string ss) {
    int n = ss.size();
 
    //empty suffixes having sum=0
    dp[n][0][0] = 1;
    dp[n][1][0] = 1;
 
    for(int i = n-1; i >=0 ; i--) {
        for(int tight = 0; tight < 2 ; tight++) {
            for(int sum = 0; sum < 200 ; sum++) {
                if(tight) {
                    for(int d = 0; d <= ss[i] - '0' ; d++) {
                        dp[i][1][sum] += (d == ss[i]-'0') ? dp[i+1][1][sum-d] : dp[i+1][0][sum-d];
                    }
                }
                else {
                    for(int d = 0; d < 10 ; d++) {
                        dp[i][0][sum] += dp[i+1][0][sum-d];
                    }
                }
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < 200; i++) {
        if(isPrime(i))
        ans += dp[0][1][i];
    }
    return ans;
}
 
void reset_dp() {
    for(int i = 0; i < 20; i++) 
        for(int j = 0; j < 2; j++) 
            for(int k = 0; k < 200; k++) 
                dp[i][j][k] = 0;
}
 
void purple()
{
    int a, b;
    cin >> a >> b;
    int countA = digit_dp(to_string(a - 1));
    reset_dp();
    int countB = digit_dp(to_string(b));
    reset_dp();
    cout << countB - countA << endl;
}
 
signed main() {
    int t=1;
    cin>>t;
    while(t--) purple();
}  