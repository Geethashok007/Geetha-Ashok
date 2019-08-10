#include<stdio.h>
int main(){
    int p,d,k, j;
    scanf("%d %d",&p,&d);
    k=p;
    while(k>1){
        j=d*k/100;
        k=k-j;
    p+=k;
    }
    printf("%d\n",p);
    return 0;
}
