#include<stdio.h>
#include<stdlib.h>
#define max 100
void mergesort(int [],int,int);
void mergearray(int [],int,int,int);
void main()
{
int list[max],size,i;
printf("enter the size of the list\n");
scanf("%d",&size);
printf("enter %d elements into the list:\n",size);
for(i=0;i<size;i++)
scanf("%d",&list[i]);
mergesort(list,0,size-1);
printf("list after the sorting\n");
for(i=0;i<size;i++)
printf("%d\n",list[i]);
}
void mergesort(int list[],int beg,int end)
{
int mid;
if(beg<end)
{
mid=(beg+end)/2;
mergesort(list,beg,mid);
mergesort(list,mid+1,end);
mergearray(list,beg,mid,end);
}
}
void mergearray(int list[],int beg,int mid,int end)
{
int i,leftend,num,temp,k,j,sublist[max];
for(i=beg;i<=end;i++)
sublist[i]=list[i];
i=beg;
j=mid+1;
k=beg;
while((i<=mid)&&(j<=end))
{
if(sublist[i]<=sublist[j])
{
list[k]=sublist[i];
i++;
k++;
}
else
{
list[k]=sublist[i];
j++;
k++;
}
}
if(i<=mid)
{
while(i<=mid)
list[k]=sublist[i];
i++;
k++;
}
else
{
while(j<=end)
{
list[k]=sublist[j];
j++;
k++;
}
} 
}

