#include<stdio.h>
int main(){
  int n,a[10],i=0,ge,sum=0,all1=0,all2=0,j,k,s;
  scanf("%d",&n);
  while(n){
    ge=n%10;
    a[i]=ge;
    i+=1;
    n/=10;
    sum++;
  }
  if (sum%2==0){
    int s1=sum/2;
    int q1=sum-1;
    for (int j=0;k<s;k++){
      if (a[k]==a[q1]){
        all1+=1;
        q1-=1;
	  }
	  else
	    q1-=1;
	}
	if(all1==s1)
	  printf("Yes\n");
	else
	  printf("No\n");
  }
  else{
  	int s2=(sum-1)/2;
  	int q2=sum-1;
  	for (int p=0;p<s2;p++){
  	  if (a[p]==a[q2]){
  	  	all2+=1;
  	  	q2-=1;
	  }
	  else
	    q2-=1;
	  }
    if (s2==all2)
      printf("Yes\n");
	else
	  printf("No\n");
  }
  return 0;
}
