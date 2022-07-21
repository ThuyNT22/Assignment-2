#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("Vui long nhap a =");
	scanf("%d",&a);
	int b;
	printf("Vui long nhap b =");
	scanf("%d",&b);
	int c;
	printf("Vui long nhap c =");
	scanf("%d",&c);
	int x;
	int x1;
	int x2;
	if(a==0){
		x=-c/b;
		printf("Phuong trinh co nghiem %d",x);
	}else{
		int delta;
		int can_delta;
		delta=b*b-4*a*c;
		can_delta=sqrt(delta);
		if(delta>0){
			x1=(-b+can_delta)/2/a;
			x2=(-b-can_delta)/2/a;
			printf("Phuong trinh co nghiem X1 = %d",x1);
			printf(" va nghiem X2 = %d",x2);
		}else{
			if(delta<0){
				printf("Phuong trinh vo nghiem");
			}else{
				x=-b/2/a;
				printf("Phuong trinh co nghiem %d",x);
			}
		}
	}
}