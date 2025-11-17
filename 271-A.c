#include <stdio.h>

int main(){
    int year1,n,year;
    scanf("%d",&year1);
    year=year1+1;
    n=year1;
    int n1=year1;

    for(int i=0;i<=1000;i++){
        year=i+year1+1;
    int a=year%10;
    year=year/10;
    int b=year%10;
    year=year/10;
    int c=year%10;
    year=year/10;
    int d=year;
        year=i+n1;
    if(a==b || a==c ||a==d||b==c||b==d||c==d)
        n=n+1;
        else
        break;
    }
    printf("%d",year+1);
    return 0;
}
