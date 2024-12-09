#include<stdio.h>

int giai_thua(){
	int giaithua=1;
	int number1;
	printf("moi ban nhap vao so nguyen bat ki: ");
	scanf("%d",&number1);
	for(int i=1 ; i<=number1 ; i++){
		giaithua*=i;
	}
	return giaithua;
}
int main(){
	int sum;
    sum= giai_thua();
	printf("giai thua cua so vua nhap la %d",sum);
	
	return 0;
}
