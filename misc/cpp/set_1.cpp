#include<iostream>
#include<cmath>
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
			cout << "\nEnter array elements:\n";
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
			cout << endl;
		}

		static void SetUnion(Set &s1, Set &s2);
		static void SetIntersection(Set &s1, Set &s2);
		static void SetDifference(Set &s1, Set &s2);
		static void SetSymDifference(Set &s1, Set &s2);
		static void Powerset(Set &s1);
		~Set() {
			delete[] arr;
		}
};

void Set::SetUnion(Set &s1, Set &s2) {
	Set s3(s1.c + s2.c);
	int k = 0;
	for (int i = 0; i < s1.c; i++)
		s3.arr[k++] = s1.arr[i];
	for (int j = 0; j < s2.c; j++)
		s3.arr[k++] = s2.arr[j];

	s3.removeDuplicates();
	s3.display();
}

void Set::SetIntersection(Set &s1, Set &s2) {
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
	s3.display();
}

void Set::SetDifference(Set &s1, Set &s2) {
	s1.removeDuplicates();
	s2.removeDuplicates();
	Set s3(s1.c);
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

void Set::SetSymDifference(Set &s1, Set &s2) {
	Set s3(s1.c + s2.c);
	s1.removeDuplicates();
	s2.removeDuplicates();
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


	for (int i = 0; i < s2.c; i++) {
		int flag = 0;
		for (int j = 0; j < s1.c; j++) {
			if (s2.arr[i] == s1.arr[j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			s3.arr[k++] = s2.arr[i];
	}

	s3.display();

}
void Set::Powerset(Set &s1) {
	for (int i = 0; i < pow(2, s1.c); i++) {
		int r = i;
		if (r == 0) {
			cout << "Empty Set\n";
			continue;
		}

		for (int j = 0; j < s1.c; j++) {
			if (r % 2)  cout << s1.arr[j] << "\t";
			r /= 2;
		}
		cout << "\n";
	}
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
	cout << "\n1.Union\n2.Intersection\n3.Set Difference\n4.Symmetric Difference\n5.Powerset\n6.Exit";
	int n;
	cout << "\n\nEnter your choice:";
	cin >> n;
	switch (n) {
		case 1:  Set::SetUnion(s1, s2);
			break;

		case 2:  Set::SetIntersection(s1, s2);
			break;

		case 3: {
				int choice;
				cout << "1.A-B\n2.B-A\n";
				cin >> choice;
				if (choice == 1)
					Set::SetDifference(s1, s2);
				if (choice == 2)
					Set::SetDifference(s2, s1);
				break;
			}
		case 4:  Set::SetSymDifference(s1, s2);
			break;

		case 5: {
				int choice;
				cout << "1.A\n2.B\n";
				cin >> choice;
				if (choice == 1)
					Set::Powerset(s1);
				if (choice == 2)
					Set::Powerset(s2);
				break;
			}
		case 6: break;

	}

	return 0;
}
