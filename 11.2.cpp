#include<stdio.h>;

void tvt(){
	int arr[100];
	int a;
	printf("moi ban nhap vao do dai cua mang: ");
	scanf("%d",&a);
	for(int i=0 ; i<a ; i++){
		printf("moi ban nhap arr[%d]: " ,i);
		scanf("%d",&arr[i]);
	}
	for(int i=0 ; i<a ; i++){
	printf("arr[%d]=%d\n",i,arr[i]);
}
}
int main(){
	tvt();

	return 0;
}
