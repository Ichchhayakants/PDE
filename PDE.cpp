
#include "PDE.hpp"
#define MAX 20
PDE::PDE()
{
  x = new float[1000];
  t = new float[1000];
  y = new float*[1000];
}
	
void PDE::Parabola(float x0,float xn,float t0,float tn,float c,float h,float k) 
{

	int i, j, xdiv, tdiv;
	float r;
	ofstream fout("out.txt");
	xdiv = (xn - x0) / h;
	xdiv = xdiv+2;
    tdiv = (tn - t0) / k;
	tdiv = tdiv+2;
	r = (c * c * k) / (h * h);
    for (i = 0; i < tdiv; i++)
		y[i] = new float[xdiv];

	cout << "\nt[j] \\ x[i] ";
	for (i = 0; i < xdiv - 1; i++) 
	{
		x[i] = x0 + (i * h);
		cout << setprecision(3) << x[i] << "\t";
	}
	cout << endl;

	for (j = 0; j < tdiv - 1; j++) 
	{
		t[j] = t0 + (j * k);
		fout << endl;
		cout << endl;
		cout << setprecision(3) << t[j];

		for (i = 0; i < xdiv - 1; i++) 
		{
			if (t[j] == t0) 
			{
				if (x[i] == x0)
					y[j][i] = 0;
				else if (x[i] == xn)
					y[j][i] = 0;
				else
					y[j][i] = ((sin(M_PI * x[i])) + (sin(3*M_PI * x[i])));
			} 
		  else 
			{
				if (x[i] == x0)
					y[j][i] = 0;
				else if (x[i] == xn)
					y[j][i] = 0;
				else
					y[j][i] = ((1 - 2 * r) * y[j - 1][i])+ r * (y[j - 1][i + 1] + y[j - 1][i - 1]);
			}
			cout << "\t" << setprecision(3) << y[j][i];
			fout << t[j] << "\t" << x[i] << "\t" << y[j][i] << endl;
		}
		cout << endl;
	}
	fout.close();
}



