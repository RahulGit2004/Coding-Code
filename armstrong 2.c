// //WAP to find Armstrong Number.


// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Please enter a Number : ");
//     scanf("%d",&num);

//     int temp, count;
     

//      count = 0;
//      temp = num;

//     while(temp > 0)
//     {
//         temp = temp / 10;
//         count++ ;
//     }
    
//     printf("The digit of %d is : %d \n",num, count);


//     temp = num;
//     int  sum = 0;
    
//     int rem;

//     for(int i = temp; temp > 0; temp /= 10) // Calculate armstrong
//     {
//         rem = temp % 10;

        
//         int power = 1;

//         for(int j = 1; j <= count; j++)  // calculate power of digits
//         {
//             power = power * rem;
//         }

//         sum = sum + power;

//     }

//     if(sum == num)      //Find number is armstrong or not
//     {
//         printf("%d  is an Armstrong Number",num);
//     }
//     else{
//         printf("%d  is not an Armstrong Number",num);
//     }


//     return 0;
// }




//  USING FUNCTION FIND ARMSTRONG
#include<stdio.h>

int gotNumber(int n)
{
    int count = 0;
    while(n > 0)
    {
        n = n / 10;
        count ++;
    }
    return count;
}

int powerOfANumber(int n, int m)
{
   
    int product = 1;
    for(int i = 0; i < m; i++)
    {
        product = product * n;
    }
    return product;
}

int main()
{
    int n, i, j, m;
     
     printf("Please enter numbers : ");
    scanf("%d", &n);


    int countN = gotNumber(n);
    printf(" count is %d\n",countN);

    int temp = n;
    int sum = 0;
    for(i = temp; temp > 0; temp/=10)
    {
        int rem = temp % 10;

    sum = sum + powerOfANumber(rem, countN);
    }

    if(sum == n)
    {
        printf("%d is an Armstrong Number",n);
    }
    else
    {
        printf("%d is not an Armstrong Number ",n);
    }

   return 0; 
}