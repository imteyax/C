//write a program to find the average marks of a student in 6 subjects?
#include <stdio.h>
int main() {
    int numSubjects = 6;
    double totalScore = 0;

    printf("Enter the scores for %d subjects:\n", numSubjects);

    for (int i = 1; i <= numSubjects; i++) {
        double score;
        printf("Subject %d: ", i);
        scanf("%lf", &score);
        totalScore += score;
    }

    double average = totalScore / numSubjects;

    printf("Average score: %.2lf\n", average);

    return 0;
}