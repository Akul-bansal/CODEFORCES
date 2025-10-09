#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a,b,c,count1=0;
    for(int j=1;j<=n;j++){
    scanf("%d %d %d",&a,&b,&c);
    int count=0;
    if((a==0||a==1)&& (b==0||b==1) && (c==0||c==1)){

            if (a==0)
            count++;
             if (b==0)
            count++;
             if (c==0)
            count++;
        if(count<=1)
        count1++;
    }
    else;
}
    printf("%d",count1);
    return 0;
}
