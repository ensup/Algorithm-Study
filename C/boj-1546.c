/*
Baekjoon 1546
URL=https://www.acmicpc.net/problem/1546
*/
#include <stdio.h>
int main(void) {
    float mex;
    int sz;
    scanf("%d",&sz);
	float m[sz];
	for(int i=0; i<sz; i++)
	{
		scanf("%f", &m[i]);
	}
    mex = m[0];
	for (int i = 0; i < sz; i++) {
		mex = mex < m[i] ? m[i] : mex;
	}
    float newscore=0;
    for (int i = 0; i < sz; i++) {
		newscore+=m[i]/mex*100;
	}
    printf("%f\n",newscore/sz);


	return 0;
}
