#include <stdio.h>
int main() {
    int n, choice, i, j, value, pos, temp, count, found,secondMin,min,max;
    int is_perfect, sum, t;
    int arr[100]; 
    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Dem so luong cac so hoan hao trong mang\n");
        printf("4. Tim gia tri nho thu 2 trong mang\n");
        printf("5. Them mot phan tu vao vi tri ngau nhien trong mang\n");
        printf("6. Xoa phan tu tai mot vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu tang dan (Bubble sort)\n");
        printf("8. Tim kiem phan tu trong mang (Linear search)\n");
        printf("9. Sap xep so le truoc, so chan sau\n");
        printf("10. Kiem tra xem mang co tang dan hay khong\n");
        printf("11. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
		   switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Nhap gia tri cho phan tu thu %d: ", i);
                    scanf("%d", & arr[i]);
                }
                break;
            case 2:
                printf("Gia tri cac phan tu trong mang: ");
                for (i = 0; i < n; i++) {
                    printf("arr[%d] = %d, ", i, arr[i]);
                }
                printf("\n");
                break;
            case 3:
                count = 0;
                for (i = 0; i < n; i++) {
                    sum = 0;
                    for (j = 1; j <= arr[i] / 2; j++) {
                        if (arr[i] % j == 0) {
						
						sum += j;
					}
                    }
                    if (sum == arr[i]){
			
					 count++;
					 }
                }
                printf("So luong cac so hoan hao trong mang: %d\n", count);
                break;
            case 4:
                break;
            case 5:
            	printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        found = 1;
                        break;
                    }
                }
                if (found) {
                    printf("Gia tri da ton tai trong mang.\n");
                } else {
                    printf("Nhap vi tri can them (0 den %d): ", n);
                    scanf("%d", &pos);
                    if (pos < 0 || pos > n) {
                        printf("Vi tri khong hop le.\n");
                    } else {
                        for (i = n; i > pos; i--){
						 arr[i] = arr[i - 1];
                        arr[pos] = value;
                        n++;
                    }
                }
                }
                break;
            case 6:
                printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    for (i = pos; i < n - 1; i++) 
					arr[i] = arr[i + 1];
                    n--;
                }
                break;
            case 7:
                for (i = 0; i < n - 1; i++) {
                    for (j = 0; j < n - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep tang dan: ");
                for (i = 0; i < n; i++){
				printf("%d ", arr[i]);
                printf("\n");
            	}
                break;

            case 8:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Gia tri %d ton tai tai vi tri %d.\n", value, i);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
				printf("Gia tri %d khong ton tai trong mang.\n", value);
			    }
                break;

            case 9:
            	 for (i = 0; i < n - 1; i++) {
                    for (j = 0; j < n - i - 1; j++) {
                        if (arr[j] % 2 == 0 && arr[j + 1] % 2 != 0) {
                            temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep so le truoc, so chan sau: ");
                for (i = 0; i < n; i++){
				printf("%d ", arr[i]);
                printf("\n");
				}
                break;
            case 10:
            	t = 1;
                for (i = 0; i < n - 1; i++) {
                    if (arr[i] > arr[i + 1]) {
                        t = 0;
                        break;
                    }
                }
                if (t=0){
				printf("Mang tang dan.\n");}
                else {
				printf("Mang khong tang dan.\n"); 
                }
                break;

            case 11:
                return 0;

            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    }

    return 0;
}

