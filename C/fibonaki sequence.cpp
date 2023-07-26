#include <stdio.h>

// Function to generate the Fibonacci sequence
void fibonacci(int numTerms) {
    int firstTerm = 0;
    int secondTerm = 1;

    printf("Fibonacci Sequence up to %d terms:\n", numTerms);

    for (int i = 1; i <= numTerms; i++) {
        printf("%d ", firstTerm);
        int nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");
}

int main() {
    int numTerms;

    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    fibonacci(numTerms);

    return 0;
}

