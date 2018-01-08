#include<stdio.h>
int  main(){
  printf("各类型所占字节数\n");
  printf("int %d\nchar %d\nfloat %d\ndouble %d\nlong int %d\nlong long int %d",sizeof(int),sizeof(char),sizeof(float),sizeof(double),sizeof(long int),sizeof(long long int));
  return 0;
}
