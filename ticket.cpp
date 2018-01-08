#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int a[n],left[20];
  for (int i=0;i<20;i++)
    left[i]=5;//每排初始剩余车票量为5 
    
  int ticket[20][5],mark[20][5];//初始车票全未被购买 为0 
  
  for (int i=0;i<20;i++){
  	for (int j=0;j<5;j++)
      mark[i][j]=0;
  }
 
  int v=1;
  while(v<=100){
    for (int i=0;i<20;i++)
      for (int j=0;j<5;j++){
        ticket[i][j]=v;
		v++;        
	  }
  }
  
  int t;
  for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
    t=0;

	//能安排在同一排： 
	  for (int j=0;j<20;j++){
        if (left[j]>=a[i]){//这一排剩余数不小于要购买数，即能安排在同一排 

		    for (int k=0;k<5;k++){
		      if (mark[j][k]==0 && t<a[i]){
		        printf("%d ",ticket[j][k]);
		        mark[j][k]=1;
		        t++;
			  }

		  }
          left[i]-=a[i];
	      break;
		}
	  }
	  continue;

	//不能安排在同一排
	  t=0;
      while(t<=a[i]){
        for (int i=0;i<20;i++)
          for (int j=0;j<5;j++){
            if (mark[i][j]==0){
              printf("%d ",ticket[i][j]);
              left[i]-=1;
              mark[i][j]=1;
			 t+=1;
			}
		  }
	  }
      
    printf("\n");
  }  
  
  return 0;
}
