#include<stdio.h>
#include<math.h>
#include"merge.c"
int Merge(int *A,int p,int r)
{
int q;
if(p<r)
{
q=floor((p+r)/2);
Merge(&*A+0,p,q);
Merge(&*A+0,q+1,r);
merge(&*A+0,p,q,r);
}
}

