#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h> 
int main(){
	char a[31];
	while(1){
		scanf("%s",&a);
			if(a[0] == 'E' && a[1] == 'n' && a[2] == 'd') break;
				int s = 0;
			for(int i = 0; i < strlen(a); i ++){
				if(a[i] == '.' && a[i + 1] == '.'){
					s = 1;
					break;
				}
			}
			if(s == 1){
				printf("NO\n");
				continue;
			}
			
			int punc=0;
			int num=0;
			int flag=0; 
			for(int i=0;i<strlen(a);i++){
				if(a[i]=='.') punc++;
			}
			if(punc!=3) {
			printf("NO\n");
			continue;
		}
			else{ for(int j=0;j<4;j++){
				
				char b[10];
				int k=0; 
				int t=0;
				while(a[num]!='.'&&num<strlen(a)){
				
					b[k]=a[num];
					num++;
					k++;
					t++;
				}
			
				num++;
				int jilu=0;
				for(int x=0;x<t;x++){
				if(isdigit(b[x])==0){
					break;
				}
				else jilu++;
				}
				if(jilu!=t){
					
					break;
				}
				else{
					int res=0;
					for(int i=0;i<t;i++){
						int pf;
						pf=pow(10,i);
						res=res+(b[t-1-i]-'0')*pf;
					}
				
					if(res>=0&&res<=255) flag++;
				}
			}
			if(flag==4) printf("YES\n");	
			if(flag!=4) printf("NO\n");
			}
	}
	return 0;
}
