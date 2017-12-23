#include<stdio.h>
#include<stdlib.h>
int f(int n);
int main(){
  int n,sum;
  int Stair(int n);
  int m;
  scanf("%d",&n);
  for (int i=0;i<n;i++){
    scanf("%d",&m);
	sum=Stair(m-1); 
    printf("%d\n",sum); 
  }
  return 0; 
} 
int Stair(int n) { 
  int s; 
  if(n==1)
    s=1;
    else if(n==2)
      s=2;
      else
        s=Stair(n-1)+Stair(n-2);
  return s;
}
