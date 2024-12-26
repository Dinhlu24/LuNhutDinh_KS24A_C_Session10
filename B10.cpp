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

		for(int i=0;i<m-1;i++){
			for(int j=0;j<m-1-i;j++){
				if(matrix[j][m-j-1] < matrix[j+1][m-j-2]){
					int tmp = matrix[j][m-j-1];
					matrix[j][m-j-1] = matrix[j+1][m-j-2];
					matrix[j+1][m-j-2] = tmp;
				}
			}
		}
		
		printf("Ma tran sau khi sap xep\n");
		for(int i = 0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
}
