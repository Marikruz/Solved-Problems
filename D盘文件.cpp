#include<stdio.h>
#include<string.h>
int main(){
  char store[100],alp[100];
  int count=0;
  FILE *fp=fopen("D:\test.txt","r");
  fgets(store,100,fp);
  int big=0,small=0,num=0;
  for (int i=0;i<strlen(store)-1;i++){
    if (store[i]>='A' && store[i]<='Z')
      big++;
    if (store[i]>='a' && store[i]<='z'){
      small++;
      alp[count++]=store[i];
	}
    if (store[i]>='0' && store[i]<='9')
      num++;
  }
  alp[count]='\0';
  fclose(fp);
  FILE *dp=fopen("D:\test1.txt","w");
  fputs(alp,dp);
  printf("%d %d %d\n",big,small,num);
  fclose(dp);
  return 0;
}
