#include<stdio.h>
void moveleft(int *a,int *b,int n,int m){
  for (int i=0;i<m;++i)
    b[i]=a[(i+n)%m];
  for (int k=0;k<m;++k)
    printf("%d ",b[k]);
}
void moveright(int *a,int *b,int n,int m){
  for (int i=0;i<m;++i)
    b[i]=a[(i+m-n)%m];
  for (int k=0;k<m;++k)
    printf("%d ",b[k]);
}
int main(){
  int m,n;
  scanf("%d %d",&m,&n);
  int a[10]={0};
  int b[10]={0};
  int t;
  scanf("%d",&t);
  for (int i=0;i<m;i++)
    scanf("%d",&a[i]);
  if (t==0)
    moveright(a,b,n,m);
  else
    moveleft(a,b,n,m);
  return 0;
}
