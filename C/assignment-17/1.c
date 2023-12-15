// #include<stdio.h>
// int main(){
//     char str[7];
//     fgets(str,7,stdin);
//     printf("%s",str);
//     getchar();
//     return 0;
// }


//programme to calculate the length of a string 
#include<stdio.h>
// int length(char s[]){
//     int i ;
//     for(int i = 0; s[i];i++)
//         return i;
    
// }
int main(){
    char s[1000];
    fgets(s,30,stdin);
    // int m = length(s);
    // printf("%d",m);
    int i ;
    for(int i = 0; s[i];i++)
        return i;
    getchar();
    return 0;
}