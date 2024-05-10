#include <stdio.h>
int isPalindrome(int num) {
	int reverse = 0;
	int temp = num;
	while(temp>0){
		 reverse = reverse * 10 + temp % 10;
		 temp/=10;
	}
	return reverse==num;
}
void findPalindromes(int n){
	int count=0;
	int i;
	for(i=0;i<=n;i++) {
		if(isPalindrome(i)){
			count++;
			printf("%d",i);
			if(count%10==0){
				printf(",\n");
			}else{
				printf(",");
			}
		}
	}
	printf("\n");
}
int main(){
	int n;
	scanf("%d",&n);
	findPalindromes(n);
	return 0;
}
