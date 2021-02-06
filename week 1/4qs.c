#include<stdio.h>
int main()
{ 
    int p,c,b,m,o;
    printf("enter your score in physics,chemistry,biology,mathematics,computer");
    scanf("%d %d %d %d %d ",&p,&c,&b,&m,&o);
    float pe;
    pe=(p+c+b+m+o)/5;
if(pe>=90) 
    printf("Grade A");

else if(pe<90 && pe>=80)
    printf("Grade B");

else if(pe<80 && pe>=70)
   printf("Grade C");

else if(pe<70 && pe>=60)
    printf("Grade D");

else if(pe<60 && pe>=40)
    printf("Grade E");

else
    printf("Grade F");

return 0;
}