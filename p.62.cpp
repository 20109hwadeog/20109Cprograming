#include <stdio.h>
int n, cnt,i,num,maxcnt=0,ansn;
int main(){
	scanf("%d",&num);
	i=1;
	cnt=0;
	while(i<=n){
		if(n%i==0){
			printf("%d ",i);
			cnt++; //cnt+=1
		} 
		i++;//i+=1
	}
	printf("\n%d\n",cnt);
	if(maxcnt<cnt){
		maxcnt=cnt;
		ansn=n;
	}
	
	return 0;
}
