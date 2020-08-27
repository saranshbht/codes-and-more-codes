#include<iostream>
using namespace std;

class Set {

	public:
		int *arr;
		int size;


		Set(int i) {
			size = i;
			arr = new int[i];
		}

		void getElements() {
			cout << "\nEnter elements:\n";
			for (int i = 0; i < size; i++)
				cin >> arr[i];
		}

		void display() {
			cout << "Set:\n";
			for (int i = 0; i < size; i++)
				cout << arr[i] << "\t";
		}

		Set setIntersection(Set &s) {
			Set temp(size < s.size ? size : s.size);
			int k = 0;
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < s.size; j++) {
					if (arr[i] == s.arr[i])
						temp.arr[k++] = arr[i];
					// cout << temp.arr[k] << "\n";
				}
			}
			temp.size = k;
			// temp.display();
			// for (int i = 0; i < temp.size; i++)
			// 	cout << temp.arr[i] << "\t";
			return temp;
		}

		~Set() {
			delete[] arr;
		}

};
int main() {
	int n, n1;
	cout << "\nEnter how many elements you want in the first set:";
	cin >> n;
	Set s1(n);
	s1.getElements();
	cout << "\nEnter how many elements you want in the second set:";
	cin >> n1;
	Set s2(n1);
	s2.getElements();
	Set s3 = s1.setIntersection(s2);

	s3.display();

	return 0;
}