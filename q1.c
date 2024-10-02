/*project:Number of ones in binary 
    Question:Write a c code to check number of 1's in the binary equivalent of a given number.
    File_name:q1.c
    Author:Rakhitha Baburaj
    Date:2-10-2024
 */


#include <stdio.h>
int main() 
{
    int num,count=0;
    printf("enter the number:");
    scanf("%d",&num);

    while(num!=0)//loop until all the bits are traversed
    {
        if(num&1)//checking if the last bit is 1
        {
            count++;
        }
        num=num>>1;//right shift the number by 1 bit
    }
    printf("the number of 1's is:%d\n",count);
    return 0;
}
