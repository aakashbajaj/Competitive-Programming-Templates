#include <bits/stdc++.h>

using namespace std;

#define si(x) int x = scanInt();
#define sll(x) LL x = scanLong();
#define sci(x) int x; scanf("%d",&x);
#define scll(x) LL x; scanf("%lld", &x);
#define pi(x) printf("%d\n", x)
#define pll(x) printf("%lld\n", x)
#define ps(x) printf("%s\n", x)
#define nl printf("\n")
#define clr(a) memset(a,0, sizeof(a))

typedef long int LI;
typedef long long int LL;
typedef long double LD;
typedef vector<int> VI;
typedef vector<LL> VLL;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;

LL mod = 1e9+7;
const int MAX = 1e5+5;

inline int scanInt() {
	int n = 0;
	char ch = getchar_unlocked();
	int sign = 1;
	while(ch < '0' || ch > '9') {
		if(ch == '-')	sign = -1;
		ch = getchar_unlocked();
	}
	while(ch >= '0' && ch <= '9') {
		n = (n<<1)+(n<<3)+(int)(ch-'0');
		ch = getchar_unlocked();
	}
	return n*sign;
}

inline LL scanLong() {
	LL n = 0;
	char ch = getchar_unlocked();
	LL sign = 1;
	while(ch < '0' || ch > '9') {
		if(ch == '-')	sign = -1;
		ch = getchar_unlocked();
	}
	while(ch >= '0' && ch <= '9') {
		n = (n<<1)+(n<<3)+(LL)(ch-'0');
		ch = getchar_unlocked();
	}
	return n*sign;
}

int main() {

}