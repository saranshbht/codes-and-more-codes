#include<iostream>

using namespace std;


class Set {
	public:
		int n;
		char *arr;
		char *arr1;

		Set(int i) {
			n = i;
			arr = new char[n];
		}

		void getElements() {
			for (int i = 0; i < n; i++)
				cin >> arr[i];
		}

		void display() {
			cout << "Set:";
			for (int k = 0; k < n; k++)
				cout << arr1[k] << "\t";
		}

		void removeDuplicate();
		bool ismember();
		void count() {
			cout << "\nNumber of elements in the set:" << n << "\n";
		}

		~Set() {
			delete[] arr;
			delete[] arr1;
		}
};

// void Set::removeDuplicate() {
// 	for (int i = 1; i < n; i++) {
// 		char s = arr[i];
// 		for (int j = n - 1; j > i; j--) {
// 			if (arr[i] == arr[j]) {
// 				int x = j;
// 				while (x < n) {
// 					arr[x] = arr[x + 1];
// 					x++;
// 				}
// 				n--;
// 			}
// 		}
// 	}
// }

bool Set::ismember() {
	char a;
	cout << "Enter element whose membership you want to check?:";
	cin >> a;
	for (int i = 0; i < n; i++) {
		if (arr[i] == a) {
			cout << "Element found!!";
			return true;
		}
	}
	cout << "Element not found!!";
	return false;
}

void Set::removeDuplicate() {
	arr1 = new char[n];
	arr1[0] = arr[0];
	int size = 1;
	int j = 0;
	for (int i = 1; i < n; i++) {
		for (j = 0; j < size; j++) {
			if (arr1[j] == arr[i])
				break;
		}
		if (j == size) {
			arr1[j] = arr[i];
			size++;
		}
	}
	n = size;
}

// void Set_union(Set &s1, Set &s2, Set &s3) {
// 	int k = 0;
// 	for (int i = 0; i < s1.n; i++)
// 		s3.arr[k++] = s1.arr[i];
// 	for (int j = 0; j < s2.n; j++)
// 		s3.arr[k++] = s2.arr[j];
// }

void Set_intersection(Set &s1, Set &s2, Set &s3) {
	int k = 0;
	for (int i = 0; i < s1.n; i++) {
		for (int j = 0; j < s2.n; j++) {
			if (s1.arr[i] == s2.arr[j])
				s3.arr[k++] = s1.arr[i];
		}
	}
}

int main() {
	int num, num1;
	cout << "Enter how many elements do you want in the first array?";
	cin >> num;
	Set s1(num);
	s1.getElements();
	cout << "Enter how many elements do you want in the second array?";
	cin >> num1;
	Set s2(num1);
	s2.getElements();
	Set s3(s1.n + s2.n);
	// Set_union(s1,s2,s3);
	Set_intersection(s1, s2, s3);
	s3.removeDuplicate();
	s3.display();
	s3.count();
	return 0;
}
