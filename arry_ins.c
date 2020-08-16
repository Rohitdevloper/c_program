#include<stdio.h>
#include"Merge.c"
int main()
{ 
int Arr[8]={3,41,52,26,38,57,9,49};
Merge(&Arr[0],1,8);
for(int m=0;m<8;m++)
printf(" %d ",Arr[m]);
return 0;
}
