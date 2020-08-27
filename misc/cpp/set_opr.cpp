#include<iostream>
using namespace std;

class Set {

	public:
		char *arr;
		int c;

		Set(int i) {
			c = i;
			arr = new char[c];
		}

		void getElements() {
			cout << "\nEnter array elements:";
			for (int i = 0; i < c; i++)
				cin >> arr[i];
		}

		void removeDuplicates() {
			for (int i = 0; i < c; i++) {
				for (int j = (i + 1); j < c; j++) {
					if (arr[i] == arr[j]) {
						for (int k = j; k < (c - 1); k++)
							arr[k] = arr[k + 1];
						c--;
						j--;
					}

				}
			}
		}

		void display() {
			cout << "\nSet:";
			for (int i = 0; i < c; i++)
				cout << arr[i] << "\t";
		}
		~Set() {
			delete[] arr;
		}
};

void SetUnion(Set &s1, Set &s2) {
	Set s3(s1.c + s2.c);
	int k = 0;
	for (int i = 0; i < s1.c; i++)
		s3.arr[k++] = s1.arr[i];
	for (int j = 0; j < s2.c; j++)
		s3.arr[k++] = s2.arr[j];

	s3.removeDuplicates();
	cout << "\nA union B:";
	s3.display();
}

void SetIntersection(Set &s1, Set &s2) {
	s1.removeDuplicates();
	s2.removeDuplicates();
	Set s3((s1.c < s2.c) ? s1.c : s2.c);
	int k = 0;
	for (int i = 0; i < s1.c; i++) {
		for (int j = 0; j < s2.c; j++) {
			if (s1.arr[i] == s2.arr[j])
				s3.arr[k++] = s1.arr[i];
		}
	}
	cout << "\nA intersection B:";
	s3.display();
}

void SetDifference(Set &s1, Set &s2) {
	s1.removeDuplicates();
	s2.removeDuplicates();
	Set s3((s1.c));
	int k = 0;
	for (int i = 0; i < s1.c; i++) {
		int flag = 0;
		for (int j = 0; j < s2.c; j++) {
			if (s1.arr[i] == s2.arr[j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			s3.arr[k++] = s1.arr[i];
	}
	s3.display();
}

int main() {
	int num1, num2;
	cout << "\nEnter how many elements do you want in the first set(A)?";
	cin >> num1;
	Set s1(num1);
	s1.getElements();
	cout << "\nEnter how many elements do you want in the second set(B)?";
	cin >> num2;
	Set s2(num2);
	s2.getElements();
	SetUnion(s1, s2);
	SetIntersection(s1, s2);

	return 0;
}
