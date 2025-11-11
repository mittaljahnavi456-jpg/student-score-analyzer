#include <stdio.h>

// Function to calculate Mean (Average)
float findMean(int scores[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return (float)sum / n;
}

// Function to find Highest Score
int findHighest(int scores[], int n) {
    int highest = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

// Function to find Lowest Score
int findLowest(int scores[], int n) {
    int lowest = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

int main() {
    int n = 5;  // number of students
    int scores[5] = {70, 80, 90, 60, 100};  // assigned easy values

    float mean = findMean(scores, n);
    int highest = findHighest(scores, n);
    int lowest = findLowest(scores, n);

    printf("===== Student Score Analyzer =====\n");
    printf("Scores: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }

    printf("\n\nClass Average: %.2f\n", mean);
    printf("Highest Score: %d\n", highest);
    printf("Lowest Score: %d\n", lowest);
    printf("==================================\n");

    return 0;
}


