#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;

void solution(int T) {

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;


		int prime_factor = 2;
		int cnt = 0;
		while (true) {
			if (N % prime_factor == 0) {
				N /= prime_factor;
				cnt++;
			}
			else {
				if (cnt != 0) {
					cout << prime_factor << " " << cnt << "\n";
					cnt = 0;
				}
				prime_factor++;
			}
			if (N == 1) {
				if (cnt != 0) {
					cout << prime_factor << " " << cnt << "\n";
					cnt = 0;
				}
				break;
			}
		}
	}
}

int main() {
	int T; // 테스트 케이스의 수

	cin >> T;

	solution(T);

	return 0;
}

