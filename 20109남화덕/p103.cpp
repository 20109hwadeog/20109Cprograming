#include <stdio.h>
int n;
int f(){
    return 123;
}
int main(){
    int s=0;
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        s=s+f();
    }
    printf("%d\n",s);
}