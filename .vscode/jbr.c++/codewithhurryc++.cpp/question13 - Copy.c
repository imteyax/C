// write a program to add two polynomials using linked list ?
#include <stdio.h>
#include <stdlib.h>

// Structure to represent a term in the polynomial
struct Term {
    int coefficient;
    int exponent;
    struct Term *next;
};

typedef struct Term Polynomial;

// Function to create a new term
Polynomial *createTerm(int coefficient, int exponent) {
    Polynomial *term = (Polynomial *)malloc(sizeof(Polynomial));
    term->coefficient = coefficient;
    term->exponent = exponent;
    term->next = NULL;
    return term;
}

// Function to insert a term into a polynomial
void insertTerm(Polynomial **poly, int coefficient, int exponent) {
    Polynomial *newTerm = createTerm(coefficient, exponent);
    if (*poly == NULL) {
        *poly = newTerm;
    } else {
        Polynomial *current = *poly;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newTerm;
    }
}

// Function to add two polynomials
Polynomial *addPolynomials(Polynomial *poly1, Polynomial *poly2) {
    Polynomial *result = NULL;

    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exponent > poly2->exponent) {
            insertTerm(&result, poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        } else if (poly1->exponent < poly2->exponent) {
            insertTerm(&result, poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        } else {
            int sum = poly1->coefficient + poly2->coefficient;
            if (sum != 0) {
                insertTerm(&result, sum, poly1->exponent);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    while (poly1 != NULL) {
        insertTerm(&result, poly1->coefficient, poly1->exponent);
        poly1 = poly1->next;
    }

    while (poly2 != NULL) {
        insertTerm(&result, poly2->coefficient, poly2->exponent);
        poly2 = poly2->next;
    }

    return result;
}

// Function to display a polynomial
void displayPolynomial(Polynomial *poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }

    while (poly != NULL) {
        printf("%dx^%d", poly->coefficient, poly->exponent);
        if (poly->next != NULL) {
            printf(" + ");
        }
        poly = poly->next;
    }
    printf("\n");
}

int main() {
    Polynomial *poly1 = NULL, *poly2 = NULL, *result = NULL;

    // Insert terms into the first polynomial
    insertTerm(&poly1, 3, 2);
    insertTerm(&poly1, 4, 1);
    insertTerm(&poly1, 5, 0);

    // Insert terms into the second polynomial
    insertTerm(&poly2, 2, 3);
    insertTerm(&poly2, 1, 2);
    insertTerm(&poly2, 6, 0);

    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    result = addPolynomials(poly1, poly2);

    printf("Resultant Polynomial: ");
    displayPolynomial(result);

    free(poly1);
    free(poly2);
    free(result);

    return 0;
}