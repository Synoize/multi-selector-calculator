#include <stdio.h>
#include <conio.h>
#include <math.h>

// Function for addition
void addition()
{
    int value;
    printf("How many numbers do you want to add? -- ");
    scanf("%d", &value);

    int i;
    float A[value]; // Define array after getting value from the user

    printf("\nEnter your numbers: \n");
    for (i = 1; i <= value; i++)
    {
        scanf("%f", &A[i]);
    }

    float sum = 0;
    for (i = 1; i <= value; i++)
    {
        sum = sum + A[i];
    }
    printf("Addition is: %.2f", sum);
}

// Function for subtraction
void subtraction()
{
    int value = 2;
    int i;
    float A[value]; // Define array after getting value from the user

    printf("Enter any two numbers: \n");
    for (i = 1; i <= value; i++)
    {
        scanf("%f", &A[i]);
    }
    float sub = A[1] - A[2];
    printf("Subtraction is: %.2f", sub);
}

// Function for multiplication
void multiplication()
{
    int value;
    printf("How many numbers do you want to multiply? -- ");
    scanf("%d", &value);

    int i;
    float A[value]; // Define array after getting value from the user

    printf("\nEnter your numbers: \n");
    for (i = 1; i <= value; i++)
    {
        scanf("%f", &A[i]);
    }

    float multi = 1;
    for (i = 1; i <= value; i++)
    {
        multi = multi * A[i];
    }
    printf("Multiplication is: %.2f", multi);
}

// Function for division
void division()
{
    int value = 2;
    int i;
    float A[value]; // Define array after getting value from the user

    printf("Enter any two numbers: \n");
    for (i = 1; i <= value; i++)
    {
        scanf("%f", &A[i]);
    }

    float division = A[1] / A[2];
    printf("Division is: %.2f", division);
}

// Function for modulus
void modulus()
{
    int value = 2;
    int i;
    int A[value]; // Define array after getting value from the user

    printf("Enter any two numbers: \n");
    for (i = 1; i <= value; i++)
    {
        scanf("%d", &A[i]);
    }

    int modulus = A[1] % A[2];
    printf("Modulus is: %d", modulus);
}

// Function for square
void square()
{
    float i, square;

    printf("Enter any number: \n");
    scanf("%f", &i);
    square = i * i;
    printf("Square is: %.2f", square);
}

// Function for cube
void cube()
{
    float i, cube;

    printf("Enter any number: \n");
    scanf("%f", &i);
    cube = i * i * i;
    printf("Cube is: %.2f", cube);
}

// Function for power
void power()
{
    float baseNum, power;
    int powerNum;

    printf("Enter base number: \n");
    scanf("%f", &baseNum);
    printf("Enter exponent (power): \n");
    scanf("%d", &powerNum);
    power = pow(baseNum, powerNum);
    printf("Power is: %.2f", power);
}

// Function for root
void root()
{
    float i, root;

    printf("Enter any number: \n");
    scanf("%f", &i);
    root = sqrt(i);
    printf("Root is: %f", root);
}

// Function for odd and even
void odd_even()
{
    int i;

    printf("NOTE : Number like 2.3 and 3.2 are not whole numbers, they're decimals. So, they're neither Even nor Odd.\n\n");
    printf("Enter any number : ");
    scanf("%d", &i);

    if (i % 2 == 0)
    {
        printf("It is Even number.");
    }
    else
    {
        printf("It is Odd number.");
    }
}

// Function for simpleInterest
void simpleInterest()
{
    float p_amount, time, i_rate;
    printf("Enter Principle Amount : ");
    scanf("%f", &p_amount);
    printf("Time Period (in year) : ");
    scanf("%f", &time);
    printf("Enter Rate of Interest : ");
    scanf("%f", &i_rate);
    printf("---------------------------------\nPrinciple Amount : %.2f", p_amount);
    float SI = (p_amount * time * i_rate) / 100; // Simple Interest formula
    printf("\nTotal Interest Amount : %.2f", SI);
    float total_amount = SI + p_amount;
    printf("\nTotal Amount : %.2f", total_amount);
}

// Function for average
void average()
{
    int values;
    printf("How many numbers do you want to average? -- ");
    scanf("%d", &values);

    int i;
    float A[values]; // Define array after getting value from the user

    printf("\nEnter your number : \n");
    for (i = 1; i <= values; i++)
    {
        scanf("%f", &A[i]);
    }

    float sum = 0;
    for (i = 1; i <= values; i++)
    {
        sum = sum + A[i];
    }

    float average = sum / values;

    printf("Average is: %f", average);
}

// Function for factorial
void factorial()
{
    int values;
    printf("How many numbers do you want to factorial? -- ");
    scanf("%d", &values);

    int i, fact = 1;
    for (i = 1; i <= values; i++) // Define array after getting value from the user
    {
        fact = fact * i;
    }
    printf("Factorial is: %d", fact);
}

// Function for prime
void prime(){
    int num;
    printf("Enter any no. : ");
    scanf("%d", &num);

    if (isprime(num))
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);
}

int isprime(int n)
{
    if (n <= 1)
        return 0;

    if (n > 1 && n <= 3)
    {
        return 1;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % 1 == 0 || n % (i + 2) == 0){
            return 0;
        }
    }
    return 1;
}













// Main function
int main()
{
    int press_function_number;

    printf("Welcome To NextONE - Multi-purpose Application\nCopyright(c) 2024 - Synoize\n\n");
X:
    printf("------- Main Menu -------\n\nPress 1 for -- Addition\nPress 2 for -- Subtraction\nPress 3 for -- Multiplication\nPress 4 for -- Division\nPress 5 for -- Modulus\nPress 6 for -- Square (x)^2\nPress 7 for -- Cube (x)^3\nPress 8 for -- Power of Number (x)^y\nPress 9 for -- Root of Number\nPress 10 for -- Find Odd or Even Number\nPress 11 for -- Simple Interest \nPress 12 for -- Average\nPress 13 for -- Factorial\nPress 14 for -- Check Prime Number\n---------------------------------------\n");

    printf("Press Number : ");
    scanf("%d", &press_function_number);
    printf("\n");

    switch (press_function_number)
    {
    ADD:
    case 1:
        // Calling addition function
        addition();
        printf("\n");
        goto ADD;
        break;

    SUB:
    case 2:
        // Calling subtraction function
        subtraction();
        printf("\n");
        goto SUB;
        break;

    MULTI:
    case 3:
        // Calling multiplication function
        multiplication();
        printf("\n");
        goto MULTI;
        break;

    DIVISION:
    case 4:
        // Calling division function
        division();
        printf("\n");
        goto DIVISION;
        break;

    MODULUS:
    case 5:
        // Calling modulus function
        modulus();
        printf("\n");
        goto MODULUS;
        break;

    SQUARE:
    case 6:
        // Calling square function
        square();
        printf("\n");
        goto SQUARE;
        break;

    CUBE:
    case 7:
        // Calling cube function
        cube();
        printf("\n");
        goto CUBE;
        break;

    POWER:
    case 8:
        // Calling power function
        power();
        printf("\n\n");
        goto POWER;
        break;

    ROOT:
    case 9:
        // Calling root function
        root();
        printf("\n\n");
        goto ROOT;
        break;

    ODD_EVEN:
    case 10:
        // Calling odd and even function
        odd_even();
        printf("\n\n");
        goto ODD_EVEN;
        break;

    SI:
    case 11:
        // Calling simpleInterest function
        simpleInterest();
        printf("\n\n");
        goto SI;
        break;

    AVERAGE:
    case 12:
        // Calling average function
        average();
        printf("\n\n");
        goto AVERAGE;
        break;

    FACTORIAL:
    case 13:
        // Calling factorial function
        factorial();
        printf("\n\n");
        goto FACTORIAL;
        break;

    PRIME:
    case 14:
        // Calling prime function
        prime();
        printf("\n\n");
        goto PRIME;
        break;

    default:
        break;
    }
    goto X;
    return 0;
}