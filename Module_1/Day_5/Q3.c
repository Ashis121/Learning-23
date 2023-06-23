#include <stdio.h>

struct time {
  int hours;
  int minutes;
  int seconds;
};

void differenceBetweenTimePeriods(struct time *startTime, struct time *stopTime, struct time *diff) {
  int diffSeconds = (stopTime->hours - startTime->hours) * 3600 +
                    (stopTime->minutes - startTime->minutes) * 60 +
                    (stopTime->seconds - startTime->seconds);

  diff->hours = diffSeconds / 3600;
  diff->minutes = (diffSeconds % 3600) / 60;
  diff->seconds = diffSeconds % 60;
}

int main() {
  struct time startTime, stopTime, diff;

  printf("Enter the start time (hh:mm:ss): ");
  scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

  printf("Enter the stop time (hh:mm:ss): ");
  scanf("%d:%d:%d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

  differenceBetweenTimePeriods(&startTime, &stopTime, &diff);

  printf("The difference in time is %d hours, %d minutes, and %d seconds.\n", diff.hours, diff.minutes, diff.seconds);

  return 0;
}
