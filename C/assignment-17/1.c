// #include<stdio.h>
// int main(){
//     char str[7];
//     fgets(str,7,stdin);
//     printf("%s",str);
//     getchar();
//     return 0;
// }


// //programme to calculate the length of a string 
// #include<stdio.h>
// int length(char s[]){
//     int i;
//     for(i=0;s[i];i++);
//         return i; 
// }
// int main(){
//     char str[1000];
//     fgets(str,1000,stdin);
//     printf("%s",str);
//     int count = length(str);
//     printf("The length of the string is %d",count);
//     return 0;
// }




//reverse a string 
// #include<stdio.h>
// int length(char str[]){
//     int i;
//     for(i=0;str[i];i++);
//         return i; 
// }

// // //Method 1 logic with one more array 
// // char* reverse(char str[]){
// //     char temp[1000];
// //     int i,l,j;
// //     l=length(str);
// //     for(i=l-1,j=0;i--;j++)
// //         temp[j]=str[i];
// //     for(i=0;str[i];i++)
// //         str[i]=temp[i];
// //     return str;
// // }

// // Method 2 : optimised logic without use of 2nd string array
// char* reverse(char str[]){
//     int i,l;
//     char t;
//     l=length(str);
//     for(i=0; i < l/2; i++){
//         t = str[i];
//         str[i]=str[l-1-i];
//         str[l-i-1]=t;
//     }
//     return str;

// }
// int main(){
//     char str[1000];
//     fgets(str,1000,stdin);
//     printf("Before Reverse : %s",str);
//     printf("After Reverse : %s",reverse(str));
//     getchar();
//     return 0;
// }


//Write a function to Convert a string to uppercase
#include<stdio.h>
char* uppercase(char str[]){
    for(int i = 0; str[i];i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    return str;
}
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    printf("Before converting to uppercase : %s",str);
    printf("After converting to uppercase : %s",uppercase(str));
}