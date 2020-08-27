#include<iostream>
using namespace std;

void sort(int *arr, int n) {
	int start, pos, temp;
	for (int i = 0; i < n - 1; i++) {
		start = arr[i];
		pos = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < start) {
				start = arr[j];
				pos = j;
			}
		}
		temp = arr[pos];
		arr[pos] = arr[i];
		arr[i] = temp;
	}
}

int main() {
	int c, n;
	cout << "Objective: To generate all possible solutions for the expression\nx1+x2+x3+....+xn=C\nwhere C is a constant and x1,x2,x3,....xn are non-negative integers";
	cout << endl << "Enter the value of C:";
	cin >> c;

	cout << endl << "Enter the value of n:";
	cin >> n;

