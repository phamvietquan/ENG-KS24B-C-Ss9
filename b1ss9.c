#include <stdio.h>

int main(){
	int arr[100];
	int n,value,location;
	printf("Moi ban nhap vao so phan tu (toi da 100): ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("Moi ban nhap vao phan tu thu %d ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Moi ban nhap vao phan tu muon chen: ");
	scanf("%d", &value);
	printf("moi ban nhap vao vi tri muon chen: ");
	scanf("%d", &location);
	for (int i = n; i > location; i--) {
        arr[i - 1] = arr[i];
    }
    arr[location] = value;
    n++; 
    for(int i=0; i<n;i++){
    	printf("%d", arr[i]);
	}
	printf("\n");

	return 0;
}

