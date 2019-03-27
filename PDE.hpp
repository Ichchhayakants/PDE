#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

class PDE 
{
public:
    float *x, *t, **y,r;
    PDE(); 
    float h, k, x0, xn, t0, tn, c;
	void Parabola(float x0,float xn,float t0,float tn,float c,float h,float k);
};
