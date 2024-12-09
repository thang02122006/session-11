#include<stdio.h>

int tvt(int arr[] , int a){
	int max=arr[0];
	for(int i=1 ; i<a ; i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int a;
	printf("moi ban nhap do dai cua mang: ");
	scanf("%d",&a);
	int arr[a];
	for(int i=0 ; i<a ; i++){
		printf("moi ban nhap gia tri cua arr[%d]= ",i);
		scanf("%d",&arr[i]);
    }
    int max=tvt(arr,a);
    printf("%d",max);
	
	return 0;
}
