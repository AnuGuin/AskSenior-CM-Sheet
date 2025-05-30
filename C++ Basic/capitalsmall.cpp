#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Macros
#define int long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 2e5 + 5; // Change size as needed

// Debugging (remove before contest)
#define dbg(x) cerr << #x << " = " << x << endl

// GCD and LCM
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

// Binary Exponentiation
int binpow(int a, int b, int m = MOD) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// Sieve of Eratosthenes
vector<int> sieve(int n) {
    vector<int> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= n; i++)
        if (prime[i])
            for (int j = i * i; j <= n; j += i)
                prime[j] = 0;
    return prime;
}

// Main driver
void solve(char ch) {
    // Your code here
    int ascii_value = (int)ch;
    if(ascii_value >= 48 && ascii_value <= 57){
        cout << "IS DIGIT" << endl;
    } else {
        cout << "ALPHA" << endl;
        if(ascii_value >= 65 && ascii_value <= 90) {
            cout << "IS CAPITAL" << endl;
        } else if(ascii_value >= 97 && ascii_value <= 122) {
            cout << "IS SMALL" << endl;
        }    
    }
}

int32_t main() {
    fastio();
    int t = 1;
    // cin >> t; // Uncomment for multiple test cases
    /*while (t--) {
        solve();
    }*/
    char X;
    cin >> X;
    solve(X);
    return 0;
    
}
