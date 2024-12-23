#include <stdio.h>

int main(){
	int a[10]={1,3,2,6,5,8,4,9,7,10};
	
	int checkNum=0;
	printf("Moi nhap vao gia tri can kiem tra: ");	scanf("%d", &checkNum);
	
	for(int i=0;i<10;i++){
		if(a[i] == checkNum){
			printf("Phan tu %d co trong mang va nam o vi tri thu %d",a[i],i+1);
			break;
		}
	}
}
