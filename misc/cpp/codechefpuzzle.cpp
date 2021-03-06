#include <cstdio>
#include <queue>
#include <map>

using namespace std;

map<int, int> M;
queue<int> Q;
int isP[] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1};
int dx[] = {0, 1, 3, 4, 6, 7, 0, 3, 1, 4, 2, 5}, dy[] = {1, 2, 4, 5, 7, 8, 3, 6, 4, 7, 5, 8};
int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

void add(int moves) {
	int n = 0, k;
	for (k = 0; k < 9; k++) { n = n * 10 + A[k]; }
	if (M.find(n) == M.end()) {
		M[n] = moves;
		for (k = 0; k < 9; k++) { Q.push(A[k]); }
		Q.push(moves);
	}
}

void compute() {
	int n = 0, m, i, j, t;
	add(0);
	while (!Q.empty()) {
		n = 0;
		for (j = 0; j < 9; j++) { n = n * 10 + (A[j] = Q.front()), Q.pop(); }
		m = Q.front(); Q.pop();
		//printf("%d --> %d  ;  ",n,m);
		for (i = 0; i < 12; i++)
			if (isP[A[dx[i]] + A[dy[i]]]) {
				t = A[dx[i]]; A[dx[i]] = A[dy[i]]; A[dy[i]] = t;
				add(m + 1);
				t = A[dx[i]]; A[dx[i]] = A[dy[i]]; A[dy[i]] = t;
			}
	}
}

int main() {
	int t, r, n, i, x;
	compute();
	//printf("Done!\n");
	scanf("%d", &t);
	while (t--) {
		n = 0;
		for (i = 0; i < 9; i++) { scanf("%d", &x); n = n * 10 + x; }
		if (M.find(n) == M.end()) { r = -1; }
		else { r = M[n]; }
		printf("%d\n", r);
	}
	return 0;
}