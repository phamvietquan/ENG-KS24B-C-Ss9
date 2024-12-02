#include <stdio.h>

int main(){
int menu, select=0, row=0, col=0, number, sum3=0, sum7=0, sum7Max=0, product4=1, count=0, countMax=0;
    int arr[100][100];
    printf(" MENU \n 1. Nhap kich co va gia tri cac phan tu cua mang \n 2. In cac gia tri cua phan tu theo ma tran \n 3. In cac phan tu la le va tinh tong \n 4. In ra cac phan tu nam tren duong bien va tinh tich \n 5. In ra cac phan tu nam tren duong cheo chinh \n 6. In ra cac phan tu nam tren duong cheo phu \n 7. In ra dong co tong gia tri cac phan tu la lop nhat \n 8. Thoat \n ");
    while(select!=8){
        printf(" Lua chon cua ban: ");
        scanf("%d", &menu);
        switch(menu){
            case 1:
                select=1;
                printf("Moi ban nhap kich thuoc hang cua mang: ");
                scanf("%d", &row);
                printf("Moi ban nhap vao kick thuoc cot cu mang: ");
                scanf("%d", &col);
                printf("Moi ban nhap cac gia tri phan tu vao mang: \n");
                for(int i=0; i<row; i++){
                    for(int j=0; j<col; j++){
                        printf("Moi ban nhap vao gia tri hang %d cot %d: ", i+1, j+1);
                        scanf("%d", &number);
                        arr[i][j]= number;
                    }
                }
                break;
            case 2:
                if(select==1){
                    printf("Gia tri cac phan tu theo ma tran la:\n");
                    for(int i=0; i<row; i++){
                        for(int j=0; j<col; j++){
                            printf("%4d", arr[i][j]);
                        }
                        printf("\n");
                    }
                }else{
                    printf("Ban chua khoi tao mang \n");
                }
                break;
            case 3:
                if(select==1){
                    printf("Cac phan tu le trong mang la: ");
                    for(int i=0; i<row; i++){
                        for(int j=0; j<col; j++){
                            if(arr[i][j] %2 !=0){
                                printf("%d ", arr[i][j]);
                                sum3+=arr[i][j];
                            }
                        }
                    }
                    printf("\n");
                    printf("Tong gia tri cac phan tu le la: %d \n", sum3);
                }else{
                    printf("Ban chua khoi tao mang \n");
                }
                break;
            case 4:
                if(select==1){
                    printf("Cac gia tri nam tren duong bien la: \n");
                    for(int i=0; i<row; i++){
                        for(int j=0; j<col; j++){
                            if(i==0 || i== row-1){
                                printf("%4d", arr[i][j]);
                                product4 *= arr[i][j];
                            }else{
                                if(j==0 || j == row-1){
                                    printf("%4d", arr[i][j]);
                                    product4 *= arr[i][j];
                                }else{
                                    printf("    ");
                                }
                            }
                        }
                        printf("\n");
                    }
                    printf("Tich cua cac phan tu nam tren duong bien la: %d\n", product4);
                }else{
                    printf("Ban chua khoi tao mang \n");
                }
                break;
            case 5:
                if(select==1){
                	if(row==col){
                		printf("Cac phan tu nam tren duong cheo chinh la: ");
                    	for(int i=0; i<row; i++){
                       		for(int j=0; j<col; j++){
                            	if( i==j){
                                printf("%d", arr[i][j]);
                            	}
                        	}
                    	}
                    	printf("\n");
					}else{
                    	printf("Ma tran khong co duong cheo chinh\n");
					}
                }else{
                    printf("Ban chua khoi tao mang \n");
                }
                break;
            case 6:
                if(select==1){
                	if(row==col){
                		printf("Cac phan tu nam tren duong cheo phu la: ");
                    	for(int i=0; i<row; i++){
                        	for(int j=0; j<col; j++){
                            	if(j == row - i - 1){
                                printf("%d ", arr[i][j]);
                            	}
                        	}
                    	}
                    	printf("\n");
					}else{
						printf("Ma tran khong co duong cheo phu\n");
					}
                }else{
                    printf("Ban chua khoi tao mang \n");
                }
                break;
            case 7:
                if(select==1){
                    count=0;
                    for(int i=0; i<row; i++){
                        count += i;
                        sum7=0;
                        for(int j=0; j<col; j++){
                            sum7 += arr[i][j];
                        }
                        if(sum7Max < sum7){
                            sum7Max = sum7;
                            countMax = count;
                        }
                    }
                    printf("Dong %d la dong co tong gia tri cac phan tu la lon nhat: ", countMax+1);
                    for(int j=0; j<row; j++){
                        printf("%d ", arr[countMax ][j]);
                    }
                    printf("\n");
                    printf("Tong gia tri cac phan tu tren dong %d la: %d \n", countMax+1, sum7Max);
                }else{
                    printf("Ban chua khoi tao mang \n");
                }
                break;
            case 8:
                select = 8;
                break;
            default:
                printf("Lua chon cua ban khong co trong MENU \n");
        }
    }

	return 0;
}
