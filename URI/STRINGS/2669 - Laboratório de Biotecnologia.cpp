// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Laboratório de Biotecnologia
// Nível: 8
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2669

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2600001;

struct base {
  float x, y;
  base() : x(0), y(0) {}
  base(float a, float b=0) : x(a), y(b) {}

  base operator/=(float k) { x/=k; y/=k; return (*this); }
  base operator*(base a) const { return base(x*a.x - y*a.y, x*a.y + y*a.x); }
  base operator*=(base a) {
	  float tx = x*a.x - y*a.y;
	  float ty = x*a.y + y*a.x;
	  x = tx; y = ty;
	  return (*this);
  }
  base operator+(base a) const { return base(x+a.x, y+a.y); }
  base operator-(base a) const { return base(x-a.x, y-a.y); }
  float real() { return x; }
  float imag() { return y; }
};

//typedef complex<float> base;

void fft(vector<base> & a, bool invert) {
	int n = (int)a.size();
	for(int i=1, j=0; i<n; i++) {
		int bit = n>>1;
		for(; j >= bit; bit>>=1) j -= bit;
		j += bit;
		if (i < j) swap(a[i], a[j]);
	}
		
	for(int len = 2; len <= n; len <<=1) {
		double ang = 2*M_PI/len * (invert ? -1 : 1);
		double re = cos(ang);
		double im = sin(ang);
		for(int i=0; i<n; i+=len) {
			double wRe = 1.0;
			double wIm = 0.0;
			for(int j=0; j<len/2; j++) {
				base u = a[i+j], v = a[i+j+len/2];
				v.x = a[i+j+len/2].x * wRe - a[i+j+len/2].y*wIm;
				v.y = a[i+j+len/2].x * wIm + a[i+j+len/2].y*wRe;
				a[i+j] = u+v;
				a[i+j+len/2] = u-v;
				double tx = wRe*re - wIm*im;
				double ty = wRe*im + wIm*re;
				wRe = tx;
				wIm = ty;
			}
		}
	}
	if (invert)
		for(int i=0; i<n; i++)
			a[i] /= (double)n;
}

void convolution(vector<base> &a, vector<base> &b) {
	int n = 1;
	while(n < (int)max(a.size(), b.size())) n <<=1;
	n <<= 1;
	a.resize(n); b.resize(n);
	fft(a, false); fft(b, false);
	//c.resize(n);
	for(int i=0; i<n; i++) 
		a[i] = a[i]*b[i];
	fft(a, true);
}

char str[MAXN];
int sum[MAXN];

vector<base> f, g;

int main() {
	scanf("%s", str);
	int len = strlen(str);
	int sumT = 0;
	f.assign(MAXN, 0);
	g.assign(MAXN, 0);
	f[0] = 1;
	//g[MAXN-1] = 1;
	for(int i=0; i < len; i++) {
		sumT += str[i] - 'a' + 1;
		sum[i] = sumT;
		f[sum[i]] = 1;
	}
	
	for (int i = 0; i < len-1; i++)
		g[sumT-sum[i]] = 1;
	g[sumT] = 1;

	/*
	for (int i = 0; i < (int) f.size(); i++)
		printf("f[%d] = %.1lf\n", i, f[i].real());
	
	for (int i = 0; i < (int) g.size(); i++)
		printf("g[%d] = %.1lf\n", i, g[i].real());
	*/
	convolution(f, g);
	
	/*
	printf("size = %d\n", (int) h.size());
	for (int i = 0; i < (int) h.size(); i++)
	{
		if ((int) (h[i].real() + 0.5) > 0)
		{
			printf("\n");
			printf("i = %d\n", i);
			getchar();
		}
		printf(" %d", (int) (h[i].real() + 0.5));
	}
	*/
	int ans = 0;
	for(int i=sumT+1; i <= 2*sumT; i++) {
		if ((int) (f[i].real() + 0.5) > 0) 
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}

