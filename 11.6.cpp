#include<stdio.h>

int sohoanhao(int n){
    if (n <= 1) {
        return 0;  
    }
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int main(){
	int number1,number2;
	printf("moi ban nhap vao number1= ");
	scanf("%d",&number1);
	printf("moi ban nhap vao number2= ");
	scanf("%d",&number2);
	if(sohoanhao(number1)){
		printf("true\n");
	}else{
		printf("false\n");
	}
		if(sohoanhao(number2)){
		printf("true\n");
	}else{
		printf("false\n");
	}
	
	return 0;
}
