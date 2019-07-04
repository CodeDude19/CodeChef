#include<stdio.h>
void merge(int *a,int i,int j,int n)
{
  // initialize
  int k,b[n], mid, l,start;
  start = i;
  mid = (i + j)/2;
  k = mid + 1;
  l = i;
  // form array b
  while(i<=mid && k<=j)
  {
    if(a[i]<=a[k])
    {
      b[l++] = a[i++];
    }
    else
    {
      b[l++] = a[k++];
    }
  }
  if(i>mid)
  {
    for(;k<=j;) b[l++] = a[k++];
  }
  else if(k>j)
  {
    for(;i<=mid;) b[l++] = a[i++];
  }
  // pushing back to a:
  for(l = j ; l>=start;l--)
  {
    a[l] = b[l];
  }

}
void mergesort(int *a, int i ,int  j,int n)
{
  int mid;
  if(i>=j) return ;
  mid = (i + j)/2;
  mergesort(a, i , mid,n);
  mergesort(a ,mid+1,j,n);
  merge(a,i,j,n);
}
void display(int n, int a[])
{
  for(int i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }

}
int main()
{
  int n;
  //printf("Enter the number of elments:\n");
  scanf("%d",&n);
  int a[n];
  //printf("Enter the elements:\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  //printf("The Unsorted list is:\n");
  //display(n,a); // displaying

  // sorting :
  mergesort(a,0,n-1,n);
  // printing :
  //printf("The Sorted list is :");
  display(n,a);
}
