#include<stdio.h>
void merge(int *A,int p, int q,int r)
{
int n1=q-p+1;
int n2=r-q;
int L[n1+1];
int R[n2+1];
for(int i=0;i<n1;i++)
L[i]=*(A+p+i-1);
for(int j=0;j<n2;j++)
R[j]=*(A+q+j);
L[n1]=100;
R[n2]=100;
int i=0,j=0;
for(int k=p-1;k<r;k++)
{
if(L[i]<=R[j])
{
*(A+k)=L[i];
i=i+1;
}
else if(L[i]>R[j]) 
{
*(A+k)=R[j];
j=j+1;
}
}
}
