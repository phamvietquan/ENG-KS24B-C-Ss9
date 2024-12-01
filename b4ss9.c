#include<stdio.h>

int main(){
    int menu, arr[100];
    int number, n=0, select=0,number3, number4, number5, index3, index4, index5;
    printf(" MENU\n 1. Nhap vao mang\n 2. Hien thi phan tu\n 3. Them phan tu\n 4. Sua phan tu\n 5. Xoa phan tu\n 6. Thoat\n");
    while(select!=6){
        printf("Lua chon cua ban : ");
        scanf("%d", & menu);
        switch(menu){
            case 1:
                printf("Moi ban nhap so luong phan tu trong mang: ");
                scanf("%d", &n);
                select = 1;
                for(int i=0; i< n; i++){
                    printf("Moi ban nhap phan tu thu %d vao mang: ", i+1);
                    scanf("%d", &number);
                    arr[i]= number;
                }
                break;
            case 2:
                if(select==1){
                    printf("Cac phan tu trong mang la: ");
                    for(int i=0; i< n ; i++){
                        printf(" %d", arr[i]);
                    }
                    printf("\n");
                }else{
                    printf("Ban chua nhap phan tu vao mang, moi ban nhap lai \n");
                }
                break;
            case 3:
                if(select==1){
                    printf("Moi ban nhap phan tu muon them: ");
                    scanf("%d", &number3);
                    printf("Moi ban nhap vi tri muon them: ");
                    scanf("%d", &index3);
                    if(index3>=n){
                        arr[n]= number3;
                        n++;
                        printf("Mang sau khi them phan tu %d vao vi tri %d la: ", number3, index3);
                        for(int i=0; i<n; i++){
                            printf("%d ", arr[i]);
                        }
                    }else if(index3 < n && index3 >=0){
                        for(int i= n; i> index3; i--){
                            arr[i]=arr[i-1];
                        }
                        arr[index3]= number3;
                        n++;
                        printf("Mang sau khi them phan tu %d vao vi tri %d la: ", number3, index3);
                        for(int i=0; i<n; i++){
                            printf("%d ", arr[i]);
                        }
                    }else{
                        printf("Vi tri ban nhap khong hop le");
                    }
                    
                    printf("\n");
                }else{
                    printf("Ban chua nhap phan tu vao mang, moi ban nhap lai \n");
                }
                
                break;
            case 4:
                if(select==1){
                    printf("Moi ban nhap phan tu muon sua: ");
                    scanf("%d", &number4);
                    printf(" Moi ban nhap vi tri muon sua: ");
                    scanf("%d", &index4);
                    if(index4 > n || index4 < 0){
                        printf("Vi tri %d khong co phan tu de sua \n ", index4);
                    }else{
                        arr[index4]=number4;
                    }
                }else{
                    printf("Ban chua nhap phan tu vao mang, moi ban nhap lai \n");
                }
                
                break;
            case 5:
                if(select==1){
                    do{
                        printf("Moi ban nhap vi tri muon xoa: ");
                        scanf("%d", &index5);
                        number5 = arr[index5];
                    }while( index5>= n);
                    for(int i= index5; i<n; i++){
                        arr[i]=arr[i+1];
                    }
                    n--;
                    printf("Mang sau khi xoa phan tu o vi tri %d la: ", number5, index5);
                    for(int i=0; i < n; i++){
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }else{
                    printf("Ban chua nhap phan tu vao mang, moi ban nhap lai \n");
                }
                break;
            case 6:
                select = 6;
                break;
            default:
                printf("Lua chon khong co trong MENU, moi ban chon lai ");
        }
    }
    return 0;
}
