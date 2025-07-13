#include <stdio.h>
#include <string.h>

void check_ranges(int *num1, int *num2) {
while (*num1 < 0 || *num1 > 255) {
printf("Invalid first number. Please re-enter a number: \n");
scanf_s("%d", num1);
}

while (*num2 < 0 || *num2 > 255) {
printf("Invalid second number. Please re-enter a number: \n");
scanf_s("%d", num2);
}

}


static int binary_convert(int num) {

int result = 0;
int place = 1;

while (num > 0) {
int remainder = num % 2;
result += remainder * place;
num /= 2;
place *= 10;
}

return result;

}

void choose_operation(int num1, int num2) {
int result2;
int answer;
printf("Select the bitwise operation: \n");
printf("1.AND \n");
printf("2.OR \n");
printf("3.XOR \n");
printf("Enter your choice: \n");
scanf_s("%d", &answer);

if (answer == 1) {
result2 = num1 && num2;
printf("Bitwise AND (Binary): %d\n", binary_convert(result2));
printf("Bitwise AND (Decimal): %d\n", result2);

} else if (answer == 2) {
result2 = num1 | num2;
printf("Bitwise OR (Binary): %d\n", binary_convert(result2));
printf("Bitwise OR (Decimal): %d\n", result2);

} else if (answer == 3) {
result2 = num1 ^ num2;
printf("Bitwise XOR (Binary): %d\n", binary_convert(result2));
printf("Bitwise XOR (Decimal): %d\n", result2);
}

}



int main() {
printf("Bitwise calculator: \n");

int first_number, second_number;

printf("Enter the first integer: \n");
scanf_s("%d", &first_number);
printf("Enter the second integer: \n");
scanf_s("%d", &second_number);

//Check input ranges of two numbers
check_ranges(&first_number, &second_number);

//Display outputs
choose_operation(first_number, second_number);


return 0;
}