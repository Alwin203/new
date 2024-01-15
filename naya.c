#include <stdio.h>
#include <string.h>

// Function to convert binary to hexadecimal
void binaryToHexadecimal(char binary[]) {
    // Convert binary to decimal
    int decimal = 0, base = 1, len = strlen(binary);
    for (int i = len - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    // Convert decimal to hexadecimal
    char hexadecimal[100];
    int index = 0;
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[index++] = remainder + '0';
        } else {
            hexadecimal[index++] = remainder - 10 + 'A';
        }
        decimal /= 16;
    }

    // Print the hexadecimal number in reverse order
    printf("Hexadecimal: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}

int main() {
    char binary[100];

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Call the function to convert binary to hexadecimal
    binaryToHexadecimal(binary);

    return 0;
}
