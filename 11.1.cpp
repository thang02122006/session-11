#include<stdio.h>

int tong(){
	int number1, number2;
	printf("moi ban nhap gia tri 1: ");
	scanf("%d",&number1);
	printf("moi ban nhap gia tri 2: ");
	scanf("%d",&number2);
	return number1+number2;
}
int main(){
	int sum;
	sum=tong();
	printf("tong cua 2 so la: %d",sum);
	
	return 0;
}
