#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a, b;
		cin >> a >> b;
		// Chef will definitely win if and only if 'x' ('a' / 'b') is
		// a winning position such that, whatever move Divyam chooses
		// it will either go to 0, 1, or a winning position.
		// The best winning position is (1 / 2) since Chef can choose
		// 'y' as 1 / 2 and whatever Divyam chooses (addition or subtraction)
		// it will result to either 0 or 1 (Chef wins) and if we calculate the
		// midpoint between 0 and (1 / 2) or between (1 / 2) and 1, that can
		// also be considered as a winning position since it will either go back to
		// (1 / 2) or go straight to the winning position.
		// Lastly, if we continue this process, we can see that all the denominators
		// of the winning positions (rational numbers) are a power of 2 so that's why
		// if 'b' is a power of 2, then Chef can win the game.
		cout << ((b & (b - 1)) == 0 ? "Yes" : "No") << '\n';
	}
	return 0;
}
