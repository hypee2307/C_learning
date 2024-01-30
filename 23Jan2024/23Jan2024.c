#include <stdio.h>
#include <string.h>
int main()
{
    // nhap 1 so nguyen va in so nguyen
    int num1;
    printf("Enter your integer number: ");
    scanf("%d", &num1);
    printf("Number you print is: %d\n", num1);
    // nhap 2 so nguyen va in tong
    int num1a, num2a;
    printf("Enter your 1st integer number: ");
    scanf("%d", &num1a);
    printf("Enter your 2nd integer number: ");
    scanf("%d", &num2a);
    printf("Total of %d and %d is: %d\n", num1a, num2a, (num1a + num2a));
    // nhap 1 so thuc va in
    float float1;
    printf("Enter your float number: ");
    scanf("%f", &float1);
    printf("Float number you enter is: %.2f\n", float1);
    // nhap 2 so thuc va in tong
    float float1a, float2a;
    printf("Enter your 1st float number: ");
    scanf("%f", &float1a);
    printf("Enter your 2nd float number: ");
    scanf("%f", &float2a);
    printf("Total of %.2f and %.2f is: %.2f\n", float1a, float2a, (float1a + float2a));
    // nhap 1 chuoi va in ra ky tu dau cuoi cua chuoi
    char text1[100];
    printf("Enter your string: ");
    scanf("%s", &text1);
    printf("First character of %s is: %c\n", text1, text1[0]);
    printf("Last character of %s is: %c\n", text1, text1[strlen(text1) - 1]);
    // nhap 1 chuoi va in ra do dai chuoi
    char text1a[100];
    printf("Enter your string: ");
    scanf("%s", &text1a);
    printf("Length of %s is: %d\n", text1a, strlen(text1a));
    // nhap 1 so nguyen va xac dinh chan le
    int num1c;
    printf("Enter your integer number: ");
    scanf("%d", &num1c);
    if ((num1c % 2) == 0)
    {
        printf("%d is an even number\n", num1c);
    }
    else
        printf("%d is an odd number\n", num1c);
    // nhap 2 chuoi va in tong do dai 2 chuoi
    char text1b[100], text2b[100];
    printf("Enter your 1st string: ");
    scanf("%s", &text1b);
    printf("Enter your 2nd string: ");
    scanf("%s", &text2b);
    printf("Total length of %s and %s is: %d\n", text1b, text2b, (strlen(text1b) + strlen(text2b)));
    // nhap 1 so nguyen va in am/duong
    int num1d;
    printf("Enter your integer number: ");
    scanf("%d", &num1d);
    if (num1d >= 0)
    {
        printf("%d is a positive number\n", num1d);
    }
    else
        printf("%d is a negative number\n", num1d);
}