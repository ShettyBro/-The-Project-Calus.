/*
                               
                                     The Project Calus.
                     Calus is Fully User-interactive Calculation Program,
 This Program is Developed Using C Language To Perform Diffrent Type of Calculations in One Program
                 This Project Is Developed And Owned By Sudeep.J.Shivashettar(India)

    */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void wel();
void m();
void ad();
void su();
void mu();
void dv();
void as();
void ar();
void ac();
void at3();
void at2();
void pn();
void ftn();
void fs();
void mt();
void lg();
void gcd();
void swp();
void ri();
void fd();
void fn();
void asn();
void rc();
void feo();
void fpn();
void an();
void aro();
void que();
void sude();

void main()
{

       wel();
       sude();
}


void sude(){
    char s[5];
    printf("\n");
    printf("\t\t\t\t\t\t..About Project..\n");
    printf("\n");
    printf("\t\t\t\t\t\tThe Project Calus.\n");
        printf("\t\t\t\tCalus is Fully User-interactive Calculation Program,\n");
        printf("\tThis Program is Developed Using C Language To Perform Different Type of Calculations in One Program\n");
        printf("\t\t\tThis Project Is Developed And Owned By Sudeep.J.Shivashettar(India)\n");
    printf("\n");
    printf("\t\t\t\t\t\t..About Developer..\n");
    printf("\n");
    printf("\t\t\t\t\tHello,\n");
    printf("\t\t\t\t\tMy Self Sudeep Shivashettar\n");
    printf("\t\t\t\t\tI'm Currently Studying BCA\n\t\t\t\t\t@G.H.BCA Haveri,Karnataka,India\n");
    printf("\n");
    printf("\t\t\t\t\t\tWish to Contact Me ??\n");
         printf("\t\t\t\t\tEnter Y to Visit My Website or N to Exit\n");
         printf("\n");
         scanf("%s",&s[0]);
          if(s[0] =='Y' || s[0]== 'y'){
              system("start https://sudeep-shivashettar.carrd.co/");
            }
          else if (s[0] =='N' || s[0]== 'n')
          {
            printf("Thank You\n");
          }
} 
void que(){
    char f[5];
    printf("\n");
    printf("\n");
    printf("Wish to Continue??\n");
         printf("Enter Y to Continue or N to Exit\n");
         scanf("%s",&f[0]);
          if(f[0]=='Y' || f[0]=='y' ){
              m();
          }
          else if (f[0]=='N' || f[0]=='n')
          {
            printf("Thank You\n");
          }
}
void wel(){
    char a;
    char b;
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t\t.About Project.\n");
    printf("\n");
    printf("\t\t\t\t\t\tThe Project Calus.\n");
        printf("\t\t\t\tCalus is Fully User-interactive Calculation Program,\n");
        printf("\tThis Program is Developed Using C Language To Perform Different Type of Calculations in One Program\n");
        printf("\t\t\tThis Project Is Developed And Owned By Sudeep.J.Shivashettar(India)\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t..Welcome To The Project Calus..\n");
    printf("\n");
    printf("\tEnter Y to Continue or N to Exit\n");
    scanf("%c",&a);
    if (a =='Y' || a=='y'){
            m();
    }
    else if (a =='N' || a=='n'){
           printf("Thank You\n"); 
     }
    else{
        printf("Invalid Option\n");
        printf("Try Again\n");
        wel();
    }
}
void m(){
    int n;
    printf("\n");
    printf("Select Any One Of The Following\n");
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Area Square\n");
    printf("Enter 6 for Area Rectangle\n");
    printf("Enter 7 for Area Circle\n");
    printf("Enter 8 for Area Triangle with 3 Sides\n");
    printf("Enter 9 for Area Triangle with 2 Sides\n");
    printf("Enter 10 for Prime Number\n");
    printf("Enter 11 for nth Fibonacci Number\n");
    printf("Enter 12 for Fibonacci Series\n");
    printf("Enter 13 for Multiplication Table\n");
    printf("Enter 14 for Largest of 3 Intergers\n");
    printf("Enter 15 for GCD of Two Integers\n");
    printf("Enter 16 for Swap of Two Integers\n");
    printf("Enter 17 for Reverse Given Interger\n");
    printf("Enter 18 for Find Divisible Numbers\n");
    printf("Enter 19 for Find Factroial of Any Numbers\n");
    printf("Enter 20 for Addition of Set of Numbers\n");
    printf("Enter 21 for Result Calculator For 6 Subject's\n");
    printf("Enter 22 for Find Number is Even or Odd\n");
    printf("Enter 23 for Find Number is Prime or Not Prime\n");
    printf("Enter 24 for Find Number is Armstrong or Not\n");
    printf("Enter 25 for Reversal of Set of Number\n");
    printf("Enter 26 To Exit!! \n");
    scanf("%d", &n);

    switch (n)
    {
    case 1: // Addition
        ad();
        break;
    case 2: // Subtraction
        su();
        break;
    case 3: // Multiplication
        mu();
        break;
    case 4: // Division
        dv();
        break;
    case 5: // Area Square
        as();
        break;
    case 6: // Area Rectangle
        ar();
        break;
    case 7: // Area Circle
        ac();
        break;
    case 8: // Area Triangle with 3 Sides
        at3();
        break;
    case 9: // Area Triangle with  Sides
        at2();
        break;
    case 10: // Prime Number
        pn();
        break;
    case 11: // nth Fibonacci Number
        ftn();
        break;
    case 12: // nth Fibonacci Series
        fs();
        break;
    case 13: // Multiplication Table
        mt();
        break;
    case 14: // Largest of 3 Integers
        lg();
        break;
    case 15: // GCD of Two Integers
        gcd();
        break;
    case 16: // Two Integers Swaper
        swp();
        break;
    case 17: // Integer Reversing
        ri();
        break;
    case 18: // Find Divisible Numbers
        fd();
        break;
    case 19: // Factroial of any Number
        fn();
        break;
    case 20: // Addition of set of numbers
        asn();
        break;
    case 21: // Result Calculator For 6 Subject's
        rc();
        break;
    case 22: // Find Number is Even or Odd
        feo();
        break;
    case 23: // Find Number is Prime or Not Prime
        fpn();
        break;
    case 24: // Find Number is Amstrong or Not
        an();
        break;
    case 25://Array oder Reversal
        aro();
        break;
    case 26:
        printf("Thank You\n"); 
        break;

    default:
        printf("\n");
        printf("Invalid Option");
        printf("\n");
        printf("Try Again\n");
        m();
        break;
    }





}
void ad()
{ // addition
    int a, b;

    printf("\tAddition\n");
    printf("Enter Two Integers\n");
    scanf("%d%d", &a, &b);
    printf("Sum=%d", a + b);
    que();
}
void su()
{ // substraction
    int a, b;
    printf("\tSubtraction\n");
    printf("Enter Two Integers\n");
    scanf("%d%d", &a, &b);
    printf("Defference=%d", a - b);
    que();
}
void mu()
{ // Multiplication
    int a, b;
    printf("\tMultiplication\n");
    printf("Enter Two Integers\n");
    scanf("%d%d", &a, &b);
    printf("Product=%d", a * b);
    que();
}
void dv()
{ // Division
    int a, b;
    printf("\tDivision\n");
    printf("Enter Two Integers\n");
    scanf("%d%d", &a, &b);
    printf("Quotient=%d", a / b);
    printf("Remainder=%d", a % b);
    que();
}
void as()
{ // Area of Square
    int ac, a, b, c, s, tt;
    float ta1, ca;
    printf("\tArea of Square\n");
    printf("Enter A Side of Square\n");
    scanf("%d", &a);
    printf("Area of Square=%d", a * a);
    que();
}
void ar()
{ // Area of Rectangle
    int ac, a, b, c, s, tt;
    float ta1, ca;
    printf("\tArea of Rectangle\n");
    printf("Enter Length And Width of Rectangle\n");
    scanf("%d%d", &a, &b);
    printf("Area of Rectangle=%d", a * b);
    que();
}
void ac()
{ // Area of Circle
    int ac, a, b, c, s, tt;
    float ta1, ca;
    printf("\tArea of Circle\n");
    printf("Enter The Radius\n");
    scanf("%d", &a);
    ca = (3.142 * a * a);
    printf("Area of Circle=%f", ca);
    que();
}
void at3()
{ // Area of Triangle with 3 Sides
    int ac, a, b, c, s, tt;
    float ta1, ca;
    printf("\tArea of Triangle with 3 Sides\n");
    printf("Enter 3 Sides of Traingle\n");
    scanf("%d%d%d", &a, &b, &c);
    s = (a + b + c) / 2;
    ta1 = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of Trangle With 3 Sides=%f\n", ta1);
    que();
}
void at2()
{ // Area of Triangle with 2 Sides
    int ac, a, b, c, s, tt;
    float ta1, ca;
    printf("\tArea of Triangle with 2 Sides\n");
    printf("Enter 2 Sides of Traingle\n");
    scanf("%d%d", &a, &b);
    ta1 = 0.5 * a * b;
    printf("Area of Trangle With 2 Sides=%f\n", ta1);
    que();
}
void pn()
{ // Prime Numbers
    int n, ng, a = 0, b, c, s, tt, f1 = 0, f2 = 1, f3 = 0, i;
    printf("\tPrime Numbers \n");
    printf("Enter Any Number\n");
    scanf("%d", &n);
    printf("The Prime Numbers are\n");
    for (int i = 2; i <= n; i++)
    {
        c = 0;
        for (int j = 1; j <= i; j++)
        {

            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d\t", i);
        }
    }
    que();
}
void ftn()
{ // nth Fibonacci Numbers
    int n, ng, a = 0, b, c, s, tt, f1 = 0, f2 = 1, f3 = 0, i;
    printf("\tnth Fibonacci Numbers \n");
    printf("Enter a Number\n");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("The %dth Fibonacci Number is;\n");
    }
    else if (n == 1)
    {
        printf("The %dth Fibonacci Number is:%d\n", n, f1);
    }
    else if (n == 2)
    {
        printf("The %dth Fibonacci Number is:%d\n", n, f2);
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        printf("The %d Fibonacci Number is:%d\n", n, f3);
    }
    que();
}
void fs()
{ // nth Fibonacci Series
    int n, ng, a = 0, b, c, s, tt, f1 = 0, f2 = 1, f3 = 0, i;
    printf("\tnth Fibonacci Series \n");
    printf("Enter N(Range) fibonacci no\n");
    scanf("%d", &n);
    printf("The Fibonacci Number Series is\n");
    if (n == 1)
    {
        printf("%d\n", f1);
    }
    else if (n == 2)
    {
        printf("%d", f2);
    }
    else
    {
        printf("%d\n%d\n", f1, f2);
        for (int i = 2; i < n; i++)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            printf("%d\n", f3);
        }
    }
    que();
}
void mt()
{ // Multiplication Table
    int n, ng, a = 0, b, c, s, tt, f1 = 0, f2 = 1, f3 = 0, i;
    printf("\tMultiplication Table\n");
    printf("Enter Any Number\n");
    scanf("%d", &n);
    i = 1;
    while (i <= 10)
    {
        printf("%dX%d=%d\n", n, i, n * i);
        i++;
    }
    que();
}
void lg()
{ // Largest of 3 Integers Calculator
    int n, adc, a, b, f3 = 0, f1 = 0, c = 0, num = 0;
    printf("\tLargest of 3 Integers Calculator\n");
    printf("Enter Any Three Number\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        printf("%d is Garter than %d & %d\n", a, b, c);
    }
    if (b >= a && b >= c)
    {
        printf("%d is Garter than %d & %d\n", b, a, c);
    }
    else
    {
        printf("%d is Garter than %d & %d\n", c, a, b);
    }
    que();
}
void gcd()
{ // GCD of Two Integers Calculator
    int n, adc, a, b, f3 = 0, f1 = 0, c = 0, num = 0;
    printf("\tGCD of Two Integers Calculator\n");
    printf("Enter Any Two Number\n");
    scanf("%d%d", &a, &b);
    while (b != 0)
    {
        f3 = a % b;
        a = b;
        b = f3;
    }
    printf("GCD of Two Numbers =%d\n", a);
    que();
}
void swp()
{ // Two Integers Swaper
    int n, adc, a, b, f3 = 0, f1 = 0, c = 0, num = 0;
    printf("\tTwo Integers Swaper\n");
    printf("Enter 1st Number(A)\n");
    scanf("%d", &a);
    printf("Enter 2st Number(B)\n");
    scanf("%d", &b);
    printf("Number Before Swap\n");
    printf("A=%d\nB=%d\n", a, b);
    c = a;
    b = a;
    a = c;
    printf("Number after Swap\n");
    printf("A=%d\nB=%d\n", a, b);
    que();
}
void ri()
{ // Integer Reversing
    int n, adc, a, b, f3 = 0, f1 = 0, c = 0, num = 0;
    printf("\tInteger Reversing\n");
    printf("Enter Tow or More Digit Number\n");
    scanf("%d", &a);
    while (a != 0)
    {
        f1 = a % 10;
        f3 = f3 * 10 + f1;
        a = a / 10;
    }
    printf("Revesed no =%d\n", f3);
    que();
}
void fd()
{ // Find Divisible Numbers
    int n, adc, a, b, f3 = 0, f1 = 0, c = 0, num = 0;
    printf("\tFind Divisible Numbers\n");
    printf("Enter Divisor");
    scanf("%d", &c);
    printf("Enter Range of Checking Divisible Numbers\n");
    printf("Enter Range Strating From\n");
    scanf("%d", &a);
    printf("Enter Range Ending At\n");
    scanf("%d", &b);
    printf("The Number Which are Divisible By %d are", c);
    for (int i = a; i <= b; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }
    que();
}
void fn()
{ // Factroial of any Number
    int n, adc, a, b, f3 = 0, f1 = 0, c = 0, num = 0;
    int j = 1;
    int res[1000] = {0};
    res[0] = 1;
    int len = 1;
    printf("Enter the value for calculating factorial\n");
    scanf("%d", &n);
    while (j <= n)
    {
        c = 0;
        num = 0;
        while (c < len)
        {
            res[c] = res[c] * j;
            res[c] = res[c] + num;
            num = res[c] / 10;
            res[c] = res[c] % 10;
            c++;
        }
        while (num != 0)
        {
            res[len] = num % 10;
            num = num / 10;
            len++;
        }
        j++;
    }
    len--;
    printf("\n\nFactorial of %d is\n ", n);
    while (len >= 0)
    {
        printf("%d", res[len]);
        len--;
    }
    que();
}
void asn()
{ // Addition of set of numbers
    int so, n, a[100], sum = 0;
    printf("Enter The Size of Set(Max 100) \n");
    scanf("%d", &n);
    printf("Enter Set Elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Set Elements are(");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }
    printf(")\n");
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum of Set Elements =%d\n", sum);
    que();
}
void rc()
{ // Result Calculator For 6 Subject's

    int r, e, l, i, fdl, fl, k = 0, h = 0, s, sum, u = 0;
    char n[20];
    float per;
    printf("\tResult Calculator For 6 Subject's\n");
    printf("Enter Your Name\n");
    scanf("%s", &n);
    printf("Enter Your Roll Number\n");
    scanf("%d", &r);
    printf("Enter Your Linux Marks\n");
    scanf("%d", &l);
    printf("Enter Your IA Marks\n");
    scanf("%d", &i);
    printf("Enter Your FDL Marks\n");
    scanf("%d", &fdl);
    printf("Enter Your FL Marks\n");
    scanf("%d", &fl);
    printf("Enter Your English Marks\n");
    scanf("%d", &e);
    printf("Select Language\n");
    printf("Enter 1 For Kannada\n");
    printf("Enter 2 For Hindi\n");
    scanf("%d", &s);
    switch (s)
    {
    case 1:
        printf("Enter Your Kannada Marks\n");
        scanf("%d", &k);
        break;
    case 2:
        printf("Enter Your Hindi Marks\n");
        scanf("%d", &h);

    default:
        break;
    }
    printf("Your Name=%s\n", n);
    printf("Your Roll=%d\n", r);
    if (l && i && fdl && fl && e && h || k >= 35)
    {
        if (k != 0)
        {
            sum = l + i + fdl + fl + e + k;
            printf("Your Total Marks=%d\n", sum);
            per = sum / 6;
            printf("Your Total Percentage=%f\n", per);
        }
        else if (h != 0)
        {
            sum = l + i + fdl + fl + e + h;
            printf("Your Total Marks=%d\n", sum);
            per = sum / 6;
            printf("Your Total Percentage=%f\n", per);
        }

        if (per >= 85)
        {
            printf("Congratulations You Have Passed in Distinction\n");
        }
        else if (per >= 60)
        {
            printf("Congratulations You Have Passed in First Class\n");
        }
        else if (per >= 50)
        {
            printf("Congratulations You Have Passed in Second Class\n");
        }
        if (per >= 35)
        {
            printf("Congratulations You Have Just Passed \n");
        }
    }
    else
    {
        printf("You Have Failed because ur Failed in\n");
        if (l < 35)
        {
            printf("Linux\n");
        }
        if (i < 35)
        {
            printf("IA\n");
        }
        if (fdl < 35)
        {
            printf("FDL\n");
        }
        if (fl < 35)
        {
            printf("FL\n");
        }
        if (e < 35)
        {
            printf("English\n");
        }
        if (k < 35)
        {
            u++;
        }
        if (h < 35)
        {
            u += 2;
        }
        switch (u)
        {
        case 1:
            printf("Kannada\n");
            break;
        case 2:
            printf("Hindi\n");

        default:
            break;
        }
    }
    que();
}
void feo()
{ // Find Number is Even or Odd
    int bo, a, n, sum, b, c;

    printf("\tFind Number is Even or Odd\n");
    printf("Enter Any Number\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Its Even Number\n");
    }
    else
    {
        printf("Its Odd Number\n");
    }
    que();
}
void fpn()
{ // Find Number is Prime or Not Prime
    int bo, a, n, sum, b, c;

    printf("\tFind Number is Prime or Not Prime\n");
    printf("Enter Any Number\n");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("Prime Number");
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            a++;
        }
    }
    if (a == 0)
    {
        printf("Prime Number\n");
    }

    else
    {
        printf("Not Prime Number\n");
    }
    que();
}
void an()
{ // Find Number is Amstrong or Not
    int bo, a, n, sum, b, c;
    printf("\tFind Number is Amstrong or Not\n");
    printf("Enter Any Number\n");
    scanf("%d", &n);
    b = n;
    while (n != 0)
    {
        c = n % 10;
        sum = sum + c * c * c;
        n = n / 10;
    }
    if (sum == b)
    {
        printf("It's An Amstrong Number\n");
    }
    else
    {
        printf("It's Not an Amstrong Number\n");
    }
    que();
}
void aro(){
    //Array oder Reversal
    int n,a[100];
printf("Enter The Size of Array\n");
scanf("%d",&n);
printf("Enter Array Elements\n");
      	for(int i=0; i<n;i++){
		scanf("%d",&a[i]);
		}
printf(" Before Reversal \t");
				for(int i=0; i<n;i++){
				printf("%d,",a[i]);
				}
printf("\n");
printf(" After Reversal \t");
				for(int i=n-1; i>=0;i--){
				printf("%d,",a[i]);
				}
que();
}


/*
                                                ..About Developer..

                                                       Hello,
                                             My Self Sudeep Shivashettar
                                             I'm Currently Studying BCA
                                           @G.H.BCA Haveri,Karnataka,India
					   My Website : https://sudeep-shivashettar.carrd.co/ 
					   
*/
