#include<stdio.h>
int main(){
  int n;
  int fun(int x);
  scanf("%d",&n);
  for (int i=0;i<n;i++)
    printf("%d ",fun(i));
  return 0;
}
int fun(int x){
  if (x==0)
  	return 0;
  else{
  	if (x==1)
  	  return 1;
  	else
  	  return fun(x-1)+fun(x-2);
  }
}
