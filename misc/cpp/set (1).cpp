#include<iostream>
using namespace std;

class Set {
		char *arr;
		int c;

	public:
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

		bool ismember(char ch) {
			for (int i = 0; i < c; i++)
				if (arr[i] == ch)
					return true;
			return false;
		}

		void cardinality() {
			cout << "\nThe cardinality of the given set:" << c;
		}

		void display() {
			cout << "Set:";
			for (int i = 0; i < c; i++)
				cout << arr[i] << "\t";
		}
		~Set() {
			delete[] arr;
		}
};
int main() {
	int num;  char ch;
	cout << "Enter the number of elements you want in the set:";
	cin >> num;
	Set s(num);
	s.getElements();
	s.removeDuplicates();
	s.display();
	s.cardinality();
	cout << "\nEnter the element whose membership you want to check:";
	cin >> ch;

	if (s.ismember(ch)) cout << "\nThe element is a member of the set";
	else cout << "\nThe element is not a member of the set";
	return 0;
}
