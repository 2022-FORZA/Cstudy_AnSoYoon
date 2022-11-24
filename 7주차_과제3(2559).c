#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, K, t;
	cin >> N >> K;

	vector<int> value;
	value.push_back(0);
	for (int i = 0; i < N; i++) {
		cin >> t;
		t += value[i];
		value.push_back(t);
	}

	int result = value[K];
	for (int i = K; i <= N; i++) {
		result = max(result, value[i] - value[i - K]);
	}

	cout << result;

	return 0;
}