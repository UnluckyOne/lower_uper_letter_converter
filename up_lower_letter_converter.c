//
//  main.c
//  lower_letter_converter
//
//  Created by Yanzhe on 2022/7/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char letter1;
    printf("Please imput your letter.\n");
    scanf("%c", &letter1);
    if (letter1<=(90) && letter1>= (65))
    {
        printf("%c\n", letter1+32);
    }
    else if (letter1<=(122) && letter1>= (97))
    {
        printf("%c\n", letter1-32);
    }
    else
        printf("Invalid imput.\n");
    return 0;
}
