#include<stdio.h>
int main(){
  int hexToDecimal(char *hex);
  char hex[6];
  int s=0;
  scanf("%s",hex);
  s=hexToDecimal(hex);
  printf("%d\n",s);
  return 0;
}
int hexToDecimal(char *hex){
  int M(int t);
  int a[4]={0},t=3,sum=0,j=0,ch;
  for (int i=2;i<6;i++){
  	ch=hex[i];
  	if (ch>57){
      switch(ch%97){
      	case 0:a[i]=10;break;
      	case 1:a[i]=11;break;
      	case 2:a[i]=12;break;
      	case 3:a[i]=13;break;
      	case 4:a[i]=14;break;
      	case 5:a[i]=15;break;
	  }
	}
	else{
	  a[i]=ch-48; 
	}
  }
  for (int k=2;k<6;k++,t--){
  	sum+=a[k]*M(t);
  }
  return sum;
}
int M(int t){
  int T=1;
  for (int i=0;i<t;i++)
    T*=16;
  return T;
}
