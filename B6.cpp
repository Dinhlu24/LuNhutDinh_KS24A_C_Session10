#include <stdio.h>

int main(){
	int n=15,m=0;
	int	a[n] = {9,1,2,4,7,8,10,3,5,6,9,11,32,1,5};
	
	printf("Day la mang cua ban: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}

	int indexMark[n]={0},count=0; // mang dung de danh dau cac vi tri giong voi so nguyen nhap vao + bien dung de dem so
	printf("\nMoi ban nhap vao mot so nguyen bat ky: ");	scanf("%d",&m);
	for(int i=0;i<n;i++){
		if(a[i] == m){
			indexMark[count] = i + 1;
			++count;
		}
	}
	
	if(count > 0){
		printf("Day la tat ca vi tri cac phan tu co cung gia tri voi so nguyen to %d cua ban: \n",m);
		for(int i=0;i<count;i++){
			printf("Vi tri thu: %d\n",indexMark[i]);
		}
	}
	else	printf("Trong mang khong ton tai phan tu nay");
}
