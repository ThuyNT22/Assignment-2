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
	int C;
	float p;
	float S;
	float BP;
	if(a+b>c){
		if(b+c>a){
			if(c+a>b){
				C=a+b+c;
				p=C/2;
				BP=p*(p-a)*(p-b)*(p-c);
				S=sqrt(BP);
				printf("Chu vi tam giac = %d",C);
				printf(" va Dien tich tam giac = %f",S);
			}else{
				printf("Ba so da nhap khong phai 3 canh cua tam giac");
			}
		}else{
			printf("Ba so da nhap khong phai 3 canh cua tam giac");
		}
	}else{
		printf("Ba so da nhap khong phai 3 canh cua tam giac");
	}
}
