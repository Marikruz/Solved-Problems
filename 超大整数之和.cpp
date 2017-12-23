#include<stdio.h>
#include<string.h>
int main(){
  char str1[100],str2[100];
  int a[100]={0},b[100]={0},c[100]={0};
  int n;
  scanf("%d",&n);
  for (int i=0;i<n;i++){
    scanf("%s %s",&str1,&str2);
	int len1,len2,len,t=0;
    len1=strlen(str1);
    len2=strlen(str2);
    if (len1>=len2)
      len=len1;
    else
      len=len2;
    for (int j=len;j>len-len1;j--)
      a[j]=str1[j-len+len1-1]-48;
    for (int j=len;j>len-len2;j--)
      b[j]=str2[j-len+len2-1]-48;
    for (int k=len;k>0;k--)
      c[k]=a[k]+b[k];
    for (int i=len;i>0;i--){
      t=c[i]/10;
      c[i-1]=c[i-1]+t;
      c[i]=c[i]-t*10;
    }
    if (c[0]==0){
  	  for (int j=1;j<len+1;j++)
  	    printf("%d",c[j]);
    }
    else{
  	  for (int j=0;j<len+1;j++)
  	    printf("%d",c[j]);
    }
    printf("\n");
  }
  return 0;
} 
