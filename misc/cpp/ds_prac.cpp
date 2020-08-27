#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<sstream>
using namespace std;

int main() {
	stringstream ss;
	string expr;
	int n, temp = 0;
	cout << "Enter the expression you want to evaluate";
	cout << endl << "f(x)=";
	cin >> expr;
	getline(cin, expr);
	cout << endl << "Enter the value of the variable:";
	cin >> n;
	cout << expr;
	replace(expr.begin(), expr.end(), 'x', char(n));


	for (int i = 0; i < expr.length(); i++) {
		switch (expr.at(i)) {
			case '^' : 	temp += pow((expr.at(i - 1) - '0'), (expr.at(i + 1) - '0'));
				ss << temp;
				expr.replace(0, i + 2, ss.str());
				break;

				/*case '/' : 	temp+=(expr.at(i-1)-'0')/(expr.at(i+1)-'0');
							ss<<temp;
							expr.replace(0,i+2,atoi(temp));
							break;

				case '*' : 	temp+=(expr.at(i-1)-'0')*(expr.at(i+1)-'0');
							ss<<temp;
							expr.replace(0,i+2,atoi(temp));
							break;

				case '+' : 	temp+=(expr.at(i-1)-'0')+(expr.at(i+1)-'0');
							ss<<temp;
							expr.replace(0,i+2,atoi(temp));
							break;

				case '-' : 	temp+=(expr.at(i-1)-'0')-(expr.at(i+1)-'0');
							ss<<temp;
							expr.replace(0,i+2+,atoi(temp));
							break;*/
		}
	}

	cout << expr;
	return 0;
}