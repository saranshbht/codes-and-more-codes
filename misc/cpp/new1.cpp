#include<iostream>
#include<cmath>
using namespace std;

class Set {

	public:
		int *arr;
		int c;

		Set(int i) {
			c = i;
			arr = new int[c];
		}

		void getElements() {
			cout << "\nEnter array elements:\n";
			for (int i = 0; i < c; i++) {
				cin >> arr[i];
			}
		}

		void removeDuplicates() {
			for (int i = 0; i < c; i++) {
				for (int j = (i + 1); j < c; j++) {
					if (arr[i] == arr[j]) {
						for (int k = j; k < (c - 1); k++) {
							arr[k] = arr[k + 1];
						}
						c--;
						j--;
					}

				}
			}
		}

		void display() {
			cout << "\nSet:";
			for (int i = 0; i < c; i++) {
				cout << arr[i] << "\t";
			}
			cout << endl;
		}

		Set SetUnion(Set &s);
		Set SetIntersection(Set &s);
		Set SetDifference(Set &s);
		Set SetSymDifference(Set &s);
		bool Subset(Set &s);

		/*Set operator=(const Set &s)
		{
		   c=s.c;
		   for(int i=0;i<c;i++)
		       arr[i]=s.arr[i];

		   return *this;
		}*/
		~Set() {
			delete[] arr;
		}
};

Set Set::SetUnion(Set &s) {
	Set temp(c + s.c);
	int k = 0;
	for (int i = 0; i < c; i++) {
		temp.arr[k++] = arr[i];
	}
	for (int j = 0; j < s.c; j++) {
		temp.arr[k++] = s.arr[j];
	}
	temp.c = k;
	temp.removeDuplicates();
	return temp;
}

Set Set::SetIntersection(Set &s) {
	Set temp((c < s.c) ? c : s.c);
	int k = 0;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < s.c; j++) {
			if (arr[i] == s.arr[j]) {
				temp.arr[k++] = arr[i];
			}
		}
	}
	temp.c = k;
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
		if (flag == 0) {
			temp.arr[k++] = arr[i];
		}
	}
	temp.c = k;
	temp.removeDuplicates();
	return temp;
}

Set Set::SetSymDifference(Set &s) {
	Set temp1 = SetUnion(s);
	Set temp2 = SetIntersection(s);
	Set temp = temp1.SetDifference(temp2);
	return temp;
}
bool Set::Subset(Set &s) {
	for (int i = 0; i < pow(2, c); i++) {
		int r = i;
		if (r == 0) {
			cout << "Empty Set\n";
			continue;
		}

		for (int j = 0; j < c; j++) {
			if (r % 2) { cout << arr[j] << "\t"; }
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

	if (n == 1) {
		Set s3 = s1.SetUnion(s2);
		s3.display();
	} else if (n == 2) {
		Set s3 = s1.SetIntersection(s2);
		s3.display();
	} else if (n == 3) {
		int choice;
		cout << "1.A-B\n2.B-A\n";
		cin >> choice;
		if (choice == 1) {
			Set s3(s1.c + s2.c);
			s3 = s1.SetDifference(s2);
			s3.display();
		} else if (choice == 2) {
			Set s4(s1.c + s2.c);
			s4 = s1.SetDifference(s2);
			s4.display();
		}



	} else if (n == 4) {
		Set s3 = s1.SetSymDifference(s2);
		s3.display();
	}
	return 0;
}

