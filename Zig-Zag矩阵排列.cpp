#include<stdio.h>
int main(){
  int m,n;
  scanf("%d %d",&m,&n);
  int a[m+2][n+2];
  for (int p=0;p<m+2;p++)
  	for (int q=0;q<n+2;q++)
	  a[p][q]=0;
  for (int k=0;k<n+2;k++){
  	a[0][k]=1;
  	a[m+1][k]=1;
  }
  for (int k=0;k<m+2;k++){
    a[k][0]=1;
    a[k][n+1]=1;
  }
  a[1][1]=1;
  int t=2;
  int i=1;
  int j=1;  
  while(t<=m*n){
  	if (a[i][j+1]==0){
  	  a[i][j+1]=t;
  	  t++;
  	  j++;
	}
	else{
	  a[i+1][j]=t;
	  t++;
	  i++;  
	}
    while(a[i+1][j-1]==0){
      a[i+1][j-1]=t;
      t++;
      i++;
      j--;
	}
	if (a[i+1][j]==0){
	  a[i+1][j]=t;
	  t++;
	  i++;
	}
	else{
	  a[i][j+1]=t;
	  t++;
	  j++;
	}
	while(a[i-1][j+1]==0){
	  a[i-1][j+1]=t;
	  t++;
	  i--;
	  j++;
	}
  }
  for (int p=1;p<m+1;p++){
  	for (int q=1;q<n+1;q++)
  	  printf("%d ",a[p][q]);
  	printf("\n");
  }
  return 0;   
}
