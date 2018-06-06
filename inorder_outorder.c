#include<stdio.h>
int main() {
	int i,j,k,n,c[10][10]={0},d[10][10]={0},vertex_out,Vertex_in; 
	printf("Enter size of matrix\n");
	scanf("%d",&n);
	int a[n][n],b[n][n];

	printf("Enter [%d]x[%d] elements",n,n);

	for(i=0;i<n;i++) {
	  for(j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
		}
	}

	printf("The matrix is\n");

	for(i=0;i<n;i++) {
	   for(j=0;j<n;j++) {
			printf("[%d]",a[i][j]);
        }
    	printf("\n");
    }

    printf("Transpose of matrix is\n");

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("[%d]",a[j][i]);
		}
		printf("\n");
	}
	printf("\n\n");

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			b[j][i] = a[i][j];
		}
 	}
	printf("To calculate the outdegree of the vertices\n");
	printf("A * A(Transpose)\n");

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			for(k=0;k<n;k++) {
				c[i][j] =c[i][j] + a[i][k]*b[k][j];
			}
		}
	}
	printf("After multiplication the matrix is\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("[%d]",c[i][j]);
		}
		printf("\n");
	}

vertex_out=1;

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==j) {
				printf("outDegree of Vertix %d is %d\n",vertex_out,c[i][j]); 
				vertex_out++;
			}
		}
	}
	printf("\n\n");
	printf("to calculate the indegree of the vertices\n");
	printf("A(Transpose)*A\n");

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			for(k=0;k<n;k++) {
				d[i][j] =d[i][j] + b[i][k]*a[k][j];
			}
		}
	}
	printf("After the multiplication the matrix is\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("[%d]",d[i][j]);
		}
		printf("\n");
	}

Vertex_in = 1;

	for(i=0;i<n;i++) {
 		for(j=0;j<n;j++) {
			if(i==j) {
				printf("inDegree of Vertix %d is %d\n",Vertex_in,d[i][j]);
				Vertex_in++;
			}
		}
	}

return 0;
}

