#include<iostream>
#include<set>
#include<algorithm>
int main() {
	std::multiset<int>st;
	std::multiset<int>::iterator found;
	int t, n, x, y;
	while (std::cin >> t) {
		while (t--) {
			std::cin >> x >> y;
			for (int i = x; i <= y; i++) st.insert(i);
		}
		std::cin >> n;
		found = st.find(n);
		int dis = std::distance(st.begin(), found);
		int count = st.count(n);
		if (count > 0)
			std::cout << n << " found from " << dis << " to " << dis + count - 1 << "\n";
		else
			std::cout << n << " not found\n";
		st.clear();
	}
	return 0;
}
