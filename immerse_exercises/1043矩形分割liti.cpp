#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
class JX
{
public:
	long long x, y, w, h, s;
	JX(long long a, long long b, long long c, long long d, int e)
	{
		x = a; y = b;
		w = c; h = d; s = e;
	}
};

vector <JX> a;

int get_Sleft(int n)
{
	int left = 0;
	for (vector<JX>::iterator t = a.begin();t!=a.end();t++)
	{
		if (t->x + t->w <= n)
			left += t->s;
		else if (t->x < n)
			left += (n - t->x) * t->h;
		else
			break;
	}
	return left;
}
int main()
{
	long long R, N, X, Y, W, H, S, totalS = 0;
	cin >> R >> N;
	if (N > 0)
	{
		for (int i = 0; i < N; i++)
		{
			cin >> X >> Y >> W >> H;
			S = W * H;
			a.push_back(JX(X, Y, W, H, S));
			totalS += S;
		}
		sort(a.begin(), a.end(), [](JX jx1, JX jx2) { return jx1->x < jx2->x; });

		int i = a[0].x, min = 0;
		for (int Sleft = 0, Sright = 0; i <= R; i++)
		{
			Sleft = get_Sleft(i);
			Sright = totalS - Sleft;
			if (Sleft - Sright >= 0)
			{
				min = Sleft - Sright;
				break;
			}
		}
		for (int Sleft = 0, Sright = 0; i <= R; i++)
		{
			Sleft = get_Sleft(i);
			Sright = totalS - Sleft;
			if (Sleft - Sright > min)
				break;
		}
		cout << i - 1;
	}
	else
		cout << R;
}
