/* 
 * File: 04.operators.c 
 * Reference: C Programming Minimalist Guide | Part 4: Operators
 * Available at: [https://medium.com/gitconnected/c-programming-minimalist-guide-part-4-operators-74d2a2c4dab5]
 */

#include <stdio.h>

int main() {
    // assignment
    int a = 9; // a gets the value 9
    int b = 4; // b gets the value 4

    // increment and decrement
    a++; // increment a by 1, a is now 10
    b--; // decrement b by 1, b is now 3

    // check it out - print the results of increment and decrement
    printf("increment a (initially set to %d) by 1, a is now: %d\n", a - 1, a); // a was set to 9, after increment it is 10
    printf("decrement b (initially set to %d) by 1, b is now: %d\n\n", b + 1, b); // b was set to 4, after decrement it is 3
    
    // mathematical operators, like basic math class but more fun
    int add_result = a + b; // add a and b
    int sub_result = a - b; // subtract b from a
    int mul_result = a * b; // multiply a and b
    int div_result = a / b; // divide a by b, integer division

    // check it out - print the results of basic math operations
    printf("addition: %d + %d = %d\n", a, b, add_result);
    printf("subtraction: %d - %d = %d\n", a, b, sub_result);
    printf("multiplication: %d * %d = %d\n", a, b, mul_result);
    printf("division: %d / %d = %d\n\n", a, b, div_result);

    // modulo operator gets the remainder after division
    int mod_result = a % b; // remainder after a divided by b

    // check it out - print the result of modulo operation
    printf("modulo: %d %% %d = %d\n\n", a, b, mod_result); // %% to print % - when printf encounters %%, it understands that you mean to print a literal % rather than using it as a part of a format specifier

    // comparisons
    int isEqual = (a == b); // checks if a is equal to b
    int isNotEqual = (a != b); // checks if a is not equal to b
    int isGreater = (a > b); // checks if a is greater than b
    int isLess = (a < b); // checks if a is less than b
    int isGreaterOrEqual = (a >= b); // checks if a is greater or equal to b
    int isLessOrEqual = (a <= b); // checks if a is less or equal to b

    // check it out - print the results of comparisons
    printf("a and b are equal: %d\n", isEqual); // 0 for false
    printf("a and b are not equal: %d\n", isNotEqual); // 1 for true
    printf("a is greater than b: %d\n", isGreater); // 1 for true
    printf("a is less than b: %d\n", isLess); // 0 for false
    printf("a is greater or equal to b: %d\n", isGreaterOrEqual); // 1 for true
    printf("a is less or equal to b: %d\n\n", isLessOrEqual); // 0 for false
    
    // logical operators, like making decisions
    int andResult = (a > 5) && (b < 5); // true if both conditions are true
    int orResult = (a > 5) || (b > 5); // true if at least one condition is true
    int notResult = !(a < 5); // true if the condition is false

    // check it out - print the results of logical operations
    printf("Logical AND - true if expressions on both sides are true: %d\n", andResult); 
    printf("Logical OR - true if one of the expression is true: %d\n", orResult); 
    printf("Logical NOT - true if expression is false: %d\n\n", notResult); 

    // typecasting, let's convert a to float
    float float_a = (float)a; // typecast a to float

    // check it out - print the result of typecasting
    printf("typecast a to float: %f\n\n", float_a); // print the float value of a

    // complex operation with correct sequencing
    // separate the increments and decrements from the complex operation
    // at this point a = 10, b = 3
    int pre_a_increment = a++; // pre_a_increment is still 10 because sign ++ is after a
    int pre_b_decrement = b--; // pre_b_derement is still 3 because sign -- is after b
    // we apply the above calculation separately because if included in the formula below, it would introduce a "unsequenced modification and access" warning. This warning arises because the compiler may not know in what order to evaluate the increment and decrement operations relative to the rest of the expression, leading to undefined behavior.

    // Explanation of the complex operation:
    // ((pre_a_increment + pre_b_decrement) * (a - b) % 5 > 3 ? 1 : 0) && (a != b)
    // step 1: pre_a_increment = 10 (a was 10 before being incremented)
    // step 2: pre_b_decrement = 3 (initial b was 3, then decremented to 2)
    // step 3: (pre_a_increment + pre_b_decrement) = 10 + 3 = 13
    // step 4: (a - b) = 11 - 2 = 9
    // step 5: (13 * 9) = 117
    // step 6: 117 % 5 = 2
    // step 7: 2 > 3 is false, so the ternary operation yields 0
    // step 8: 0 && (11 != 2) is false because 0 AND anything is false

    int complex_result = (pre_a_increment + pre_b_decrement) * (a - b) % 5 > 3 ? 1 : 0 && (a != b);

    printf("((pre_a_increment + pre_b_decrement) * (a - b) %% 5 > 3 ? 1 : 0) && (a != b) = ((%d + %d) * (%d - %d) %% 5 > 3 ? 1 : 0) && (%d != %d) = %d\n", pre_a_increment, pre_b_decrement, a, b, a, b, complex_result); // result of the complex operation

    // prints out: 
    // ((pre_a_increment + pre_b_decrement) * (a - b) % 5 > 3 ? 1 : 0) && (a != b) = ((10 + 3) * (11 - 2) % 5 > 3 ? 1 : 0) && (11 != 2) = 0

    return 0;
}

