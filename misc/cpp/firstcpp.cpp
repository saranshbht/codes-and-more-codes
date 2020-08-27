#include<iostream>
using namespace std;

bool conjunction(bool a, bool b) {
	if (!a) { return false; }
	else {
		if (!b) { return false; }
		else { return true; }
	}
}

bool disjunction(bool a, bool b) {
	if (a) { return true; }
	else {
		if (b) { return true; }
		else { return false; }
	}
}

bool exclusiveOR(bool a, bool b) {
	if (a) {
		if (!b) { return true; }
		else { return false; }
	} else {
		if (b) { return true; }
		else { return false; }
	}
}

bool conditional(bool a, bool b) {
	if (!a) { return true; }
	else {
		if (!b) { return false; }
		else { return true; }
	}
}

bool biconditional(bool a, bool b) {
	if (a) {
		if (b) { return true; }
		else { return false; }
	} else {
		if (!b) { return true; }
		else { return false; }
	}
}


int main() {
	bool x, y;
	cout << "Enter truth value of X:";
	cin >> x;
	cout << "Enter truth value of Y:";
	cin >> y;


	cout << "1.X ꓴ Y\n2.X ꓵ Y\n3.X ⴲ Y\n4.X  => Y\n5. X <=> Y";


	return 0;
}
