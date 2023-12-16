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


// //Write a function to Convert a string to uppercase
// #include<stdio.h>
// char* uppercase(char str[]){
//     for(int i = 0; str[i];i++){
//         if(str[i]>='a' && str[i]<='z'){
//             str[i]=str[i]-32;
//         }
//     }
//     return str;
// }
// int main(){
//     char str[1000];
//     fgets(str,1000,stdin);
//     printf("Before converting to uppercase : %s",str);
//     printf("After converting to uppercase : %s",uppercase(str));
// }



// //Write a function to count vowels in a given string 
// #include<stdio.h>
// //Method 1:
// // int count_vowels(char s[]){
// //     int count = 0;
// //     for(int i = 0;  s[i]; i++){
// //         if(s[i] =='a' || s[i] =='i' || s[i]=='o'|| s[i]=='u'||s[i]=='e'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
// //             count++;
// //         }
// //     }
// //     return count;
// // }
// //Method 2 : 
// int count_vowels(char s[]){
//     int count = 0;
//     char v[]="aeiouAEIOU";
//     for(int i = 0;  s[i]; i++){
//         for(int j = 0; v[j];j++){
//         if(s[i] == v[j]){
//             count++;
//             break;
//         }
//     }
//     }
//     return count;
// }
// int main(){
//     char s[1000];
//     printf("Enter the string in which u want to count the vowels : ");
//     fgets(s,1000,stdin);
//     printf("%d",count_vowels(s));
//     getchar();
//     return 0;
// }



// //Write a function to check whether a given string is alphanumeric- means atleast 1 alphabet and 1 digit or not 
// //With these 3 lines we also run the code in bool in c language
// // #define true 1
// // #define false 0
// // typedef int bool;
// #include<stdio.h>
// int alphanumeric_or_not(char s[]){
//     int count = 0;
//     int hke = 0;
//     for(int i = 0; s[i];i++){
//         if(s[i]>='0' && s[i]<='9'){
//             count = 1;
//         }
//         if((s[i]>='a'&&s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
//             hke = 1;
//         }
//     }
//     return count&&hke;
// }
// int main(){
//     char s[1000];
//     printf("Enter the string in which u want to check that it is alphanumeric or not : ");
//     fgets(s,1000,stdin);
//     if(alphanumeric_or_not(s)==0){
//         printf("The given string is not an alphanumeric string ");
//     }
//     else{
//          printf("The given string is an alphanumeric string ");
//     }
//     // getchar();
//     return 0;
// }


// //Write a function to check whether a given pattern is string or not 
//Testcase aabbabaabaaabab
//aaa
// #include<stdio.h>
// #include<string.h>
// int find_pattern(char s[],char p[]){
//         int i,j,k;
//         int m = strlen(s)-strlen(p);
//         for(i = 0;i<= m;i++){
//             for(j=i,k=0;p[k];j++,k++){
//                 if(p[k]!=s[j]){
//                     break;
//                 }
//             }
//             if(k==3){
//                     return i;
//                 }
//         }
//         return -1;
// }
// int main(){
//     char s[1000],p[1000];
//     printf("Enter the string in which u check this pattern : ");
//     fgets(s,1000,stdin);
//     printf("Enter the pattern u want to check in the string : ");
//     fgets(p,1000,stdin);
//     if(find_pattern(s,p)==-1){
//         printf("This pattern is not find in this string .");
//     }
//     else{
//         printf("This pattern is find in the string .");
//     }
//     return 0;
// }


//Compare two strings
#include<stdio.h>
int compare(char s[],char p[]){
int i = 0;
while(s[i]!='\0' && p[i]!='\0'){
    if(s[i]==p[i]){
        i++;
    }
    else if(s[i]>p[i]){
        return 1;
    }
    else{
        return -1;
    }
}
if(s[i]==0 && p[i]==0)
    return 0;
if(s[i]==0)
    return -1;
if(p[i]==0)
    return 1;
}

int main(){
    char s[1000],p[1000];
    printf("Enter the first string u want to compare : ");
    fgets(s,1000,stdin);
    printf("Enter the seconnd string u want to compare : ");
    fgets(p,1000,stdin);
    printf("%d",compare(s,p));
    return 0;
}