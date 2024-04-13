#include <stdio.h>

// Must declare the data type of the return value in the function definition
// here we are returning a double
double square(double x)
{
    double result = x * x;
    return result;
}

int main()
{
    double x = square(3.14);
    printf("%lf", x);
    // return statement = returns a value back to the calling function
    return 0;
}
