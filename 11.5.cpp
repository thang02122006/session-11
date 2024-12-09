#include<stdio.h>
#include<math.h>

int songuyento(int n){

    if(n<=1){
	    return 0;
    }
    for(int i=2 ; i<=sqrt(n) ; i++){
	    if(n%i==0){
		    return 0;
	    }
    }
    return 1;
}
int main(){
	int number1,number2;
	printf("moi ban nhap vao number1= ");
	scanf("%d",&number1);
	printf("moi ban nhap vao number2= ");
	scanf("%d",&number2);
	if(songuyento(number1)){
		printf("true\n");
	}else{
		printf("false\n");
	}
		if(songuyento(number2)){
		printf("true\n");
	}else{
		printf("false\n");
	}
	
	return 0;
}
