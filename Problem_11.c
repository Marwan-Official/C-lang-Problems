/*Example:
Determine the type of a triangle based on the lengths of its three sides: a,b & c. By 
evaluating specific conditions:
• Validity Check: A triangle is invalid if the sum of the lengths of any two sides is not 
greater than the length of the third side.
• Equilateral Triangle: The triangle is called equilateral االضالع متساوي if all three sides 
are equal in length.
• Isosceles Triangle: The triangle is called isosceles الساقين متساوي if two sides have 
equal lengths while the third side is different.
• Scalene Triangle: The triangle is called scalene if all three sides have distinct مختلفين
lengths.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a, b, c;
    
    //ask the user for sides
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check validity first
    if (a + b <= c || a + c <= b || b + c <= a) 
        printf("Invalid triangle.\n");
    
    // Equilateral means all sides equal, if a=b and b=c then a=c too
    else if (a == b && b == c) 
        printf("Equilateral triangle.\n");
    
    // Isosceles, any two sides equal. We already checked that it is a triangle
    else if (a == b || a == c || b == c) 
        printf("Isosceles triangle.\n");
    
    // Final case, no sides are equal
    else 
        printf("Scalene triangle.\n");
    
    return 0;
}
