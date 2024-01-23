#include <stdio.h>

void DisplayFormatTime(int Time);

int main() {
    int Time;
    scanf("%d", &Time);
    
    DisplayFormatTime(Time);
    
}

void DisplayFormatTime(int Time) {
    
    int hrs = Time / 60;
    int mins = Time % 60;
    
    printf("%d Hour(s) %d Minute(s)", hrs, mins);
    
}