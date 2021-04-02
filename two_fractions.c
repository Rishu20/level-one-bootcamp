#include <stdio.h>
#include <math.h>
struct fraction{
    int num, den;
};

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 

void lowest(int den3, int num3) 
{ 

    int common_factor = gcd(num3,den3); 
    den3 = den3/common_factor; 
    num3 = num3/common_factor; 
} 

struct fraction get_prams()
{
    struct fraction p1;
    printf("\nEnter the fraction(num,den): ");
    scanf("%d %d",&p1.num,&p1.den);
    return p1;
}
struct fraction computeone( struct fraction c1 , struct fraction c2)
{
  struct fraction temp;
  
  int num3, den3;
    den3 = gcd(c1.den,c2.den);
    den3 = (c1.den*c2.den) / den3;
    num3 = (c1.num)*(den3/c1.den) + (c2.num)*(den3/c2.den);
    temp.num = num3;
    temp.den = den3;
    lowest(den3,num3);
  return temp;
};
void outputone(struct fraction c1 , struct fraction c2, struct fraction c3)
{
  printf("\n Sum of %d/%d and %d/%d is : %d/%d \n",c1.num,c1.den,c2.num,c2.den,c3.num,c3.den);
};


int main(){
    struct fraction c1,c2,c3;
    c1=get_prams();
    c2=get_prams();
    c3=computeone(c1,c2);
    outputone(c1,c2,c3);
    return 0;
}
