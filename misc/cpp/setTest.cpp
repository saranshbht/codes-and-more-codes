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

		Set SetUnion(Set &s);
		Set SetIntersection(Set &s);
		Set SetDifference(Set &s);
		Set SetSymDifference(Set &s);
		void Powerset();

		~Set() {
			delete[] arr;
		}
};

Set Set::SetUnion(Set &s) {
	Set temp(c + s.c);
	int k = 0;
	for (int i = 0; i < c; i++)
		temp.arr[k++] = arr[i];
	for (int j = 0; j < s.c; j++)
		temp.arr[k++] = s.arr[j];

	temp.removeDuplicates();
	return temp;
}

Set Set::SetIntersection(Set &s) {
	Set temp((c < s.c) ? c : s.c);
	int k = 0;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < s.c; j++) {
			if (arr[i] == s.arr[j])
				temp.arr[k++] = arr[i];
		}
	}
	temp.removeDuplicates();
	return temp;
}

Set Set::SetDifference(Set &s) {
	Set temp(c);
	int k = 0;
	for (int i = 0; i < c; i++) {
		int flag = 0;
		for (int j = 0; j < s.c; j++) {
			if (arr[i] == s.arr[j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			temp.arr[k++] = arr[i];
	}
	temp.removeDuplicates();
	return temp;
}

Set Set::SetSymDifference(Set &s) {
	Set temp1 = SetUnion(s);
	Set temp2 = SetIntersection(s);
	Set temp = temp1.SetDifference(temp2);
	return temp;
}

void Set::Powerset() {
	for (int i = 0; i < pow(2, c); i++) {
		int r = i;
		if (r == 0) {
			cout << "Empty Set\n";
			continue;
		}

		for (int j = 0; j < c; j++)	{
			if (r % 2)  cout << arr[j] << "\t";
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
	Set s3(num1 + num2);
	cout << "\n1.Union\n2.Intersection\n3.Set Difference\n4.Symmetric Difference\n5.Powerset\n6.Exit";
	int n;
	cout << "\n\nEnter your choice:";
	cin >> n;
	switch (n) {
		case 1:  s3 = s1.SetUnion(s2);
			s3.display();
			break;

		case 2:  s3 = s1.SetIntersection(s2);
			s3.display();
			break;

		case 3: {
				int choice;
				cout << "1.A-B\n2.B-A\n";
				cin >> choice;
				if (choice == 1)
					s3 = s1.SetDifference(s2);
				if (choice == 2)
					s3 = s2.SetDifference(s1);

				s3.display();
				break;
			}

		case 4:  s3 = s1.SetSymDifference(s2);
			s3.display();
			break;

		case 5: {
				int choice;
				cout << "1.A\n2.B\n";
				cin >> choice;
				if (choice == 1)
					s1.Powerset();
				if (choice == 2)
					s2.Powerset();
				break;
			}

		case 6: break;
	}

	return 0;
}
