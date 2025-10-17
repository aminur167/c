/*


#include<stdio.h>
int main()
{
    int n1,n2;
    int c=0;
    scanf("%d %d",&n1,&n2);

    for(int i=n1;i<=n2;i++){
        if(i%2==0){
            printf("%d ",i);
            c++;
        }
    }
    printf("\n%d even numbers",c);

    return 0;
}
*/



#include<stdio.h>

int main(){

    char ch;
    scanf("%c",&ch);

    char b;
    b= tolower(ch);

    if(ch>='a' && ch<='z'){
       if(b=='a'|| b=='e'|| b=='i'|| b=='o'|| b=='u'){
            printf("%c is a vowel",ch);
          }
    else{
       printf("%c is a consonant",ch);
    }
       }
       else{
        printf("It is not an alphabet");
       }
       return 0;
}
