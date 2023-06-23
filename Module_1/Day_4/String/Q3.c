#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int computeTotalSeconds(char *timeString) {
    int hours, minutes, seconds;
    sscanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);
    return hours * 3600 + minutes * 60 + seconds;
}

int main() {
    char timeString[100];
    
    printf("Enter a time string (hh:mm:ss): ");
    fgets(timeString, sizeof(timeString), stdin);
    
    // Remove the newline character from the input string
    timeString[strcspn(timeString, "\n")] = '\0';
    
    int totalSeconds = computeTotalSeconds(timeString);
    
    printf("Total Seconds: %d\n", totalSeconds);
    
    return 0;
}
