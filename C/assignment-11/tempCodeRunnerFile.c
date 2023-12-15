#include<stdio.h>
int main(){
    int a,b;
    printf("Enter both two numbers for which u find L.C.M : ");
    scanf("%d %d",&a,&b);
    int L_C_M;
    for(L_C_M=a>b?a:b; L_C_M<=a*b; L_C_M++){
        if(L_C_M%a==0 && L_C_M%b==0){
            printf("%d",L_C_M);
            break;
        }
    }
    getchar();
    return 0;
}