#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int currval = 0, val = 0;
	if (cin >> currval) {
		int cnt = 1;// 
		while (cin >> val) {
			if (val == currval)
				++cnt;
			else {
				cout << currval << " occurs " << cnt << " times" << endl;
				currval = val;
				cnt = 1;//reset?

			}

		}
		cout << currval << " occurs " << cnt << " times" << endl;

	}

	return 0;
}
 
