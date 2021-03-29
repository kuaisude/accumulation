#include<iostream>
using namespace std;
int main() {
	double bu = 2;
	double dj = 0.98, far_away, distance = 0.00;
	cin >> far_away;
	int i = 0;
	while (distance < far_away) {
		distance += bu;
		bu = bu * dj;
		i++;
	}
	cout << i << endl;
}



