#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[50];
    int score = 0;
    int choice;

    printf("Welcome to the Online Quiz Application!\n");
    printf("Please enter your name: ");
    scanf("%s", name);

    printf("\nHello %s! Let's get started.\n", name);

    printf("\nQuestion 1: What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &choice);
    if (choice == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect.\n");
    }

    printf("\nQuestion 2: Who is the CEO of Microsoft?\n");
    printf("1. Satya Nadella\n2. Bill Gates\n3. Steve Ballmer\n4. Jeff Bezos\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect.\n");
    }

    printf("\nQuestion 3: What is the largest planet in our solar system?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Saturn\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &choice);
    if (choice == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect.\n");
    }

    printf("\nCongratulations %s, you have completed the quiz!\n", name);
    printf("Your final score is %d out of 3.\n", score);

    return 0;
}
