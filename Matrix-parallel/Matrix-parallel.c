#include<stdio.h>    
#include<stdlib.h>  
#include <sys/time.h>
int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
system("cls");  
printf("Total Row=");    
scanf("%d",&r);    
printf("Total column=");    
scanf("%d",&c);    
printf("enter matrix 1 element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter matrix 2 element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
struct timeval t0, t1;
gettimeofday(&t0, 0);

printf("Ans\n");    


#pragma omp parallel for
for(int i=0; i<r; i++)
{
for(int j=0; j<c; j++)
{
for(int k=0; k<c; k++)
{
mul[i][j]+=a[i][k]*b[k][j];    
}
}
}
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  

