#include <stdio.h>

int main(){
	int arr[100];
	int n, location;
	printf("Moi ban nhap vao so phan tu: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("Moi ban nhap vao phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Moi ban nhap vao vi tri can xoa: ");
	scanf("%d", &location);
	for(int i=location; i<n;i++){
		arr[i]=arr[i+1];
	}
	for(int i=0;i<n-1;i++){
		printf("%d", arr[i] );
	}
	
	return 0;
}

