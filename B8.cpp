#include <stdio.h>
#define maxSize 100

int main(){
		int matrix[maxSize][maxSize]={0};
		int n=0,m=0;
		printf("Moi nhap vao so hang: ");	scanf("%d",&n);
		printf("Moi nhap vao so cot: ");	scanf("%d", &m);
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("Nhap gia tri Matrix[%d][%d]: ",i+1,j+1);
				scanf("%d",&matrix[i][j]);
			}
		}
		printf("Ma tran truoc khi sap xep: \n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
		
		for(int k=0;k < n-1;k++){
			for(int i=0;i<n-1;i++){
				for(int j=0;j<n-i-1;j++){
					if(matrix[j][k] > matrix[j+1][k]){
						int tmp=matrix[j][k];
						matrix[j][k] = matrix[j+1][k];
						matrix[j + 1][k] = tmp;
					}
				}
			}
		}
		
		printf("Ma tran sau khi duoc sap xep: \n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
}
