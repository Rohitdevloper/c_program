 Welcome to  C coding session

You can use the [editor on GitHub](https://github.com/Rohitdevloper/c_program/edit/gh-pages/index.md) to maintain and preview the content for your website in Markdown files.

 _Sorting is important for us.But we also need to save time and space while program running.we learn many type of sorting.Merge sort is one of type which take less space andd time to run_

```markdown
Syntax highlighted code block

# sorting
Merge sort
 

 
`#include<stdio.h>
#include"Merge.c"
int main()
{ 
int Arr[8]={3,41,52,26,38,57,9,49};
Merge(&Arr[0],1,8);
for(int m=0;m<8;m++)
printf(" %d ",Arr[m]);
return 0;
}` text
**_Functions_**

`#include<stdio.h>
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
}` text


`#include<stdio.h>
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
` text
[To download file ](https://github.com/Rohitdevloper/c_program) and ![Image](src)
```

.

**The Worst case of this sorthing is O(n)=nlgn**

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/Rohitdevloper/c_program/settings). The name of this theme is saved in the Jekyll `_config.yml` configuration file.
 
 Thanks you
