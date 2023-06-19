#include <stdio.h>

int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);
    
    char grade;
    if (score >= 90 && score <= 100) {
        grade = 'A';
    } else if (score >= 75 && score <= 89) {
        grade = 'B';
    } else if (score >= 60 && score <= 74) {
        grade = 'C';
    } else if (score >= 50 && score <= 59) {
        grade = 'D';
    } else if (score >= 0 && score <= 49) {
        grade = 'F';
    } else {
        printf("Invalid score entered.\n");
        return 1;
    }
    
    printf("Grade: %c\n", grade);
    
    return 0;
}
