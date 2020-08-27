#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// lfjalfj
	// lfjalfjls

	return 0;
}

// for (int i = 0; i < n; i++) {

// }
// #include<iostream>
// using namespace std;

// class Set {
// 		char *arr;
// 		int size;

// 	public:
// 		Set(int i) {
// 			size = i;
// 			arr = new chjar[i];
// 		}

// 		void getElements() {
// 			cout << "\nEnter elements:\n";
// 			for (int i = 0; i < size; i++)
// 				cin >> a[i];
// 		}

// 		Set setIntersection(Set &s) {
// 			Set temp(size < s.size ? size : s.size);
// 			int k = 0;
// 			for (int i = 0; i < size; i++) {
// 				for (int j = 0; j < s.size; j++) {
// 					if (arr[i] == s.arr[i])
// 						temp.arr[k++] = arr[i];
// 				}
// 			}
// 			temp.size = k;
// 			return temp;
// 		}

// 		void display() {
// 			cout << "Set:\n";
// 			for (int i = 0; i < size; i++)
// 				cout << arr[i] << "\t";
// 		}
// };
// int main() {
// 	int n, n1;
// 	cout << "\nEnter how many elements you want in the first set:";
// 	cin >> n;
// 	Set s1(n);
// 	s1.getElements();
// 	cout << "\nEnter how many elements you want in the second set:";
// 	cin >> n1;
// 	Set s2(n1);
// 	s2.getElements();
// 	Set s3(n < n1 ? n : n1);
// 	s3 = s1.setIntersection(s2);
// 	s3.display();

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a = 5, b = 6;
	cout << a << " " << b << endl;
	swap(a, b);
	cout << a << " " << b << endl;

	return 0;
}