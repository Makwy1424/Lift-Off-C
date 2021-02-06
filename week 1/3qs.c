#include<stdio.h>
int main()
{ 
    float r;
    float p=3.14;
    float d,c,a;
    printf("type the value of r");
    scanf("%f",&r);
      d=2*r;
      c=2*p*r;
      a=p*r*r;
    printf("diameter= %f \n",d);
    printf("circumferance= %f \n",c);
    
    printf("area= %f \n",a);


    
    return 0;
}