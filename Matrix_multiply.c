 int r1,c1,r2,c2; 
     printf("Enter Order of 1st Matrix\n");
     printf("Enter No. of Rows of matrix \n");
     scanf("%d",&r1);
     printf("Enter No. of Columns of matrix \n");
     scanf("%d",&c1);
     
     printf("Enter Order of 2nd Matrix\n");
     printf("Enter No. of Rows of matrix \n");
     scanf("%d",&r2);
     printf("Enter No. of Columns of matrix \n");
     scanf("%d",&c2);
     if(c1==r2)
     {
     int a1[r1][c1];
     int a2[r2][c2];
     int mul[r1][c2];
     printf("Enter Array 1 Elements \n");
 for(int i=0;i<r1;i++)
 {
     for(int j=0;j<c1;j++)
     {
         scanf("%d",&a1[i][j]);
     }
 }
 printf("\n");
 printf("Enter Array 2 Elements \n");
 for(int i=0;i<r2;i++)
 {
     for(int j=0;j<c2;j++)
     {
         scanf("%d",&a2[i][j]);
     }
 }

 printf("Matrices are:  \n");
 printf("Matrix A:\n");


 for(int i=0;i<r1;i++)
 {
     for(int j=0;j<c1;j++)
     {
         printf("%d  ",a1[i][j]);
     }
     printf("\n");
 }

     printf("Matrix B: \n");
 
for(int i=0;i<r2;i++)
 {
     for(int j=0;j<c2;j++)
     {
         printf("%d  ",a2[i][j]);
     }
     printf("\n");
 }


 printf("\n");

printf("Matrix Multiplication is: \n");

 for(int i=0;i<r1;i++)
 {
    for(int j=0;j<c2;j++)
    {
        int s=0;
        for(int k=0;k<c1;k++)
        {
            s=s+a1[i][k]*a2[k][j];
            mul[i][j]=s;
        }

    }
 }


 for(int i=0;i<r1;i++)
 {
    for(int j=0;j<c2;j++)
    {
        printf("%d      ", mul[i][j]);
    }
    printf("\n");
 }

}
else
{
    printf("no. of Rows of in Matrix A did not match with no. of Columns in Matrix B. Therefore, Matrix multipication not possible\n");
}
