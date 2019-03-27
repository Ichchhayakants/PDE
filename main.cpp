#include "PDE.cpp"

int main() 
{
float h, k, x0, xn, t0, tn, c;
cout << "enter (x0, xn) : " << endl;
	cin >> x0 >> xn;
	cout << "enter (t0, tn) : " << endl;
	cin >> t0 >> tn;
	cout << "Enter the value of h, k :" << endl;
	cin >> h >> k;
	cout << "Enter value of C :" << endl;
	cin >> c;
	PDE p;
	p.Parabola(x0,xn,t0,tn,c,h,k);
	return 0;
}
