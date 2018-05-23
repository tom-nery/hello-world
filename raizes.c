#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void raiz(int a,int b,int c,float *r1,float *r2);
int main(){
	int a,b,c;
	float r1,r2;

	printf("Programa para calcular raízes de funções quadráticas.\n");
	printf("Digite os valores de:\na ");
	scanf("%d",&a);
	printf("b ");
	scanf("%d",&b);
	printf("c ");
	scanf("%d",&c);

	raiz(a,b,c,&r1,&r2);

	printf("%.2f %.2f\n",r1,r2);
}
void raiz(int a,int b,int c,float *r1,float *r2){
	int delta;

	delta=(pow(b,2)-(4*a*c));
	*r1=(float)((-b+sqrt(delta))/(2*a));
	*r2=(float)((-b-sqrt(delta))/(2*a));
}
