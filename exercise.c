#include <stdio.h>

#include <stdbool.h>

#include <string.h>

#include <math.h>

#include <ctype.h>

void birthday(char name[], int years)
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old", years);
}

int main()
{
    //!/ function
    char name[] = "freedus";
    int years = 26;

    birthday(name, years);

    //!/

    // printf("I like pizza!\n");
    // printf("I like pizza!\n");
    // printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t\n");
    // printf("\"I like pizza\" - Abraham Lincoln ");

    //     int x;   // declaration
    // x = 123;     // initialization
    // int y = 321; // declaration + initialization

    // int age;                      // integer  %d
    // float gpa = 3.02;             // floating point number  %f
    // double d = 3.231516842589634; // can store double the decimal of float %lf
    // char grade = 'C';             // single character  %c
    // char name[25];                // array of chracters  %s

    // int J = 2147483647; // %d

    // bool e = true; // 1 byte ( true of false) %d

    //! math function

    // double A = sqrt(9);

    // double B = pow(2, 9);

    // int C = round(3.14);

    // int D = ceil(3.14);

    // int E = floor(3.99);

    // double F = fabs(-100);

    // double G = log(3);

    // double H = sin(45);

    // double I = cos(15);

    // double J = tan(45);

    // printf("\n%d", C);
    //!/

    //! print and response on the terminal
    // printf("hello %s\n", name);

    // printf("you are %d years old\n", age);

    // printf("your averge grade is %c\n", grade);

    // printf("your gpa is %.2f\n", gpa);
    // printf("%d\n", e);

    // printf("\nWhat's your name?");
    // // scanf("%s", &name);
    // fgets(name, 25, stdin);
    // name[strlen(name) - 1] = '\0';

    // printf("\nhow old are you?");
    // scanf("%d", &age);

    // printf("\nyou are %d years old", age);
    // printf("\nyou're name is %s, how are you?", name);
    //!/

    //! program to calculate the circumference of a circle

    // const double PI = 3.14159;
    // double radius;
    // double circumference;
    // double area;

    // printf("\nEnter the radius of circle: ");
    // scanf("%lf", &radius);

    // circumference = 2 * PI * radius;
    // area = PI * radius * radius;

    // printf("\ncircumference: %lf", circumference);
    // printf("\narea: %lf", area);

    //!/

    //!/ program to calculate the hypotenuse of a right triangle

    // double A;
    // double B;
    // double C;

    // printf("Enter side A: ");
    // scanf("%lf", &A);

    // printf("Enter side B: ");
    // scanf("%lf", &B);

    // C = sqrt(A * A + B * B);

    // printf("side C: %lf", C);

    //!/

    //!/ if statement

    // int age;

    // printf("\nEnter your age: ");
    // scanf("%d", &age);

    // if (age >= 18)
    // {
    //     printf("you are now signed up!");
    // }
    // else if (age < 0)
    // {
    //     printf("please enter a valid age");
    // }
    // else
    // {
    //     printf("you're to young to sign up");
    // }

    //!/

    //!/ switch is a more efficent way to using many "else if" statements

    // char grade;

    // printf("\nEnter a letter grade: ");
    // scanf("%c", &grade);

    // switch (grade)
    // {

    // case 'A':
    //     printf("perfect!\n");
    //     break;

    // case 'B':
    //     printf("you did good\n");
    //     break;

    // case 'C':
    //     printf("you did okey\n");
    //     break;

    // case 'D':
    //     printf("at least it's not an F \n");
    //     break;

    // case 'F':
    //     printf("you Fail\n");
    //     break;

    // default:
    //     printf("PLease enter only valid grades");
    // }

    //!/

    //!/ Program to convert temperature from fahreneheit to celsius

    // char unit;

    // float temp;

    // printf("\n is atemperature in (F) or (C)?: ");
    // scanf("%c", &unit);

    // unit = toupper(unit);

    // if (unit == 'C')
    // {
    //     printf("\n Enter the temp in Celcius: ");
    //     scanf("%f", &temp);
    //     temp = (temp * 9 / 5) + 32;
    //     printf("\nThe temp in Farenheit is: %.1f", temp);
    // }
    // else if (unit == 'F')
    // {
    //     printf("\n Enter the temp in Farenheit: ");
    //     scanf("%f", &temp);
    //     temp = ((temp - 32) * 5) / 9;
    //     printf("\nThe temp in Celcius is: %.1f", temp);
    // }
    // else
    // {
    //     printf("\n %C is not a valid unit of measurement", unit);
    // }

    //!/

    //!/ creating a single calculator program

    // char operator;
    // double num1;
    // double num2;
    // double result;

    // printf("\n Enter an operator (+ - * /): ");
    // scanf("%c", &operator);

    // printf("Enter number 1: ");
    // scanf("%lf", &num1);

    // printf("Enter number 2: ");
    // scanf("%lf", &num2);

    // switch (operator)
    // {
    // case '+':
    //     result = num1 + num2;
    //     printf("\nresult: %.2lf", result);
    //     break;

    // case '-':
    //     result = num1 - num2;
    //     printf("\nresult: %.2lf", result);
    //     break;

    // case '*':
    //     result = num1 * num2;
    //     printf("\nresult: %.2lf", result);
    //     break;

    // case '/':
    //     result = num1 / num2;
    //     printf("\nresult: %.2lf", result);
    //     break;

    // default:
    //     printf("%c is not valid", operator);
    //     break;
    // }
    //!/

    //!/ logical operator

    // float temp = 1000;
    // bool sunny = false;

    // if (temp >= 0 && temp <= 30 && sunny)
    // {
    //     printf("\nThe weather is good!");
    // }
    // else
    // {
    //     printf("\n the weather is bad");
    // }

    //     float temp = 1000;
    // bool sunny = false;

    // if (temp >= 0 || temp <= 30 || sunny)
    // {
    //     printf("\nThe weather is good!");
    // }
    // else
    // {
    //     printf("\n the weather is bad");
    // }
    //!/

    return 0;
}
