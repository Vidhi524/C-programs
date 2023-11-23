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
     if(r1==r2 && c1==c2)
     {
     int a1[r1][c1];
     int a2[r2][c2];
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
     printf("\n");
     printf("Matrix B \n");
 
     for(int i=0;i<r1;i++)
 {
     for(int j=0;j<c1;j++)
     {
         printf("%d  ",a2[i][j]);
     }
     printf("\n");
 }
 printf("\n");
 


int add[r1][c1];
printf("Addition of given matrix is : \n");
for(int i=0;i<r1;i++)
{
    for(int j=0;j<c1;j++)
    {
        add[i][j]= a1[i][j]+a2[i][j];
        printf("%d      ",add[i][j]);
    }
    printf("\n");
}
 
 }
 else
 {
    printf("Error: Order of Matrix 1 and Matrix 2 Not Same, Thus addition not possible");
 }
