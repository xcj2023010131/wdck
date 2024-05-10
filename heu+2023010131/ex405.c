#include <stdio.h>
int main(){
	int x,n,i;
	float p[100];
	scanf("%d,%d",&n,&x);
	p[0]=1;
	p[1]=x;
	if(n==0){
		printf("1");
	}else if(n==1){
		printf("%.2f",(float)x);
	}else if(n<0){
		printf("error");
	}else{
		for(i=2;i<=n;i++){
		p[i]=((2*i-1)*x-p[i-1]-(i-1)*p[i-2])/i;
		}
		printf("%.2f\n",p[n]);
	}
	return 0;
}

