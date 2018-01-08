#include<stdio.h>
#include<math.h>
#include<string.h>

int t = 0;

void op_out( int order, int n, int out[], int control[]){
	
	if(order == n) return;
	control[order] = 1;
	
	op_out(order + 1, n, out, control);
	printf("-->");
	for(int u = 0; u < n; u ++) if(control[u]) printf(" %d",out[u]);
	printf("\n");
	
    control[order] = 0;
    op_out(order + 1, n, out, control);
	order--;
	
	t++;
	if(t == n) return;
	
}

int main(){
	int m;
	scanf("%d",&m);
	for(int i = 0; i < m; i++){
		int n;
		int out[100] = {0}, control[100] = {0};
		scanf("%d",&n);
		for(int j = 0; j < n; j++) scanf("%d",&out[j]);
//		memset(control, 0, sizeof(control));
		int order = 0;
		op_out(order, n, out, control);
		printf("--> \n");
	}
}
