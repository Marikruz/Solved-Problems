#include<stdio.h>
int main(){
  int hexcmp(char* hex1, char* hex2);
  char hex1[6],hex2[6];
  scanf("%s %s",&hex1,&hex2);
  hexcmp(hex1,hex2);
  return 0;
}
int hexcmp(char* hex1, char* hex2){
  int a[6],b[6],sum=0,ch1,ch2;
  for (int i=2;i<6;i++){
  	ch1=hex1[i];
  	if (ch1>57){
      switch(ch1%97){
      	case 0:a[i]=10;break;
      	case 1:a[i]=11;break;
      	case 2:a[i]=12;break;
      	case 3:a[i]=13;break;
      	case 4:a[i]=14;break;
      	case 5:a[i]=15;break;
	  }
	}
	else{
	  a[i]=ch1-48; 
	}
  	ch2=hex2[i];	
	if (ch2>57){
      switch(ch2%97){
      	case 0:b[i]=10;break;
      	case 1:b[i]=11;break;
      	case 2:b[i]=12;break;
      	case 3:b[i]=13;break;
      	case 4:b[i]=14;break;
      	case 5:b[i]=15;break;
	  }
	}
	else{
	  b[i]=ch2-48; 
	}
  }
  for (int k=2;k<6;k++){
    if (a[k]>b[k]){
      printf("%d\n",1);
      return 0;
	}
	else{
	  if (a[k]<b[k]){
	    printf("%d\n",-1);
	    return 0;
	  }
	  else
	    sum+=1;
	}
  }
  if (sum==4)
    printf("%d\n",0);
}
