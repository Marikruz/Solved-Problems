#include<stdio.h>
#include<string.h>
int main(){
  char a[100];
  scanf("%s",a);
  int ch,b[100],sum=0,len,t;
  len=strlen(a);
  for (int i=0;i<len;i++){
  	ch=a[i];
    if (ch>=48 && ch<=57){
      b[i]=1;
	}
	else
	  b[i]=0;
  }
  for (int k=0;k<len-1;k++){
    if (b[k]==b[k+1] && b[k]==1)
      b[k]=0;
  }
  for (int j=0;j<len;j++){
  	if (b[j]==1)
  	  sum+=1;
  	else
  	  sum+=0;
  }
  printf("%d\n",sum);
  return 0;
}
