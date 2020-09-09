#include <stdio.h>

int main()
{
    int a[100], n, Mul1=0, Mul2=0, Mul3=0, Mul4=0, Mul5=0, Mul6=0, Mul7=0, Mul8=0, Mul9=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%1==0){
            Mul1++;
        }
        if(a[i]%2==0){
            Mul2++;
        }
        if(a[i]%3==0){
            Mul3++;
        }
        if(a[i]%4==0){
            Mul4++;
        }
        if(a[i]%5==0){
            Mul5++;
        }
        if(a[i]%6==0){
            Mul6++;
        }
        if(a[i]%7==0){
            Mul7++;
        }
        if(a[i]%8==0){
            Mul8++;
        }
        if(a[i]%9==0){
            Mul9++;
        }
    }
    printf("{1:%d,2:%d,3:%d,4:%d,5:%d,6:%d,7:%d,8:%d,9:%d}",Mul1, Mul2, Mul3, Mul4, Mul5, Mul6, Mul7, Mul8, Mul9);

    return 0;
}
