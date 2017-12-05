#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct data {
	char* str;
	int n;
	int d;
};

void trivialrotation(char *input, int d, int n);
void leftRotate(char arr[], int d, int n);
void Blockswap(char arr[], int n, int d);
void reverse(char* str, int n, int d);
int gcd(int a, int b);
void Swap(char arr[], int a, int b, int d);
