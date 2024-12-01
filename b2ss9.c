#include <stdio.h>

int main(){
int arr[6]={2,9,0,8,2,6};
	int value,location;
	for(int i=0;i<6;i++){
		printf(" %d ", arr[i]);
	}
	printf("\nMoi ban nhap vao vi tri muon chen: ");
	scanf("%d",&location);
	printf("moi ban nhap vao gia tri muon chen: ");
	scanf("%d", &value);
	arr[location-1]=value;
	for(int i=0; i<6;i++){
		printf(" %d ", arr[i]);
	}
	

	return 0;
}

