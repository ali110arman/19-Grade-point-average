#include <iostream>
using namespace std;
void main() {
	int num, i=1, zarib, n, avg=0, zaribcol=0;
	float avgcol;
	cout << "inter count of your grade\n";
	cin >> n;
	for (i;i <= n;i++) {
		cout << "inter grade" << endl;
		cin >> num;
		cout << "inter factor of grade\n";
		cin >> zarib;
		avg += num * zarib;
		zaribcol += zarib;
		avgcol = avg / zaribcol;
	}
	cout << "the average of your grade is:" << avgcol << endl;
}
