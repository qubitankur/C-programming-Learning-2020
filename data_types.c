#include <stdio.h>

//data types in c
//declaration ---> Global

int a = 6; 
double m = 4.456;
char b = 'Q';
float d = 34.3; 

signed int g = 10; // contains both postive and negative integers
unsigned int f = -123; //contains positive integers only

//double has 2x more precision than float.
int main(){
	printf("Integer is %d\n", a);
	printf("Double is %lf\n", m);
	printf("Char is %c\n", b);
	printf("Float is %f\n", d);
	printf("Unsigned integer is %u\n", f);
	printf("Signed integer is %d\n",g);
	}
