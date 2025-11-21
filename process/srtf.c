#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int at[n], bt[n], rt[n], ct[n], tat[n], wt[n], pid[n];

    for(int i=0; i<n; i++){
        pid[i] = i;
        printf("Enter Arrival & Burst time for P%d: ", i);
        scanf("%d %d", &at[i], &bt[i]);
        rt[i] = bt[i]; // remaining time = burst time initially
    }

    int time = 0, completed = 0, shortest = -1, min = 99999;

    while(completed < n){
        shortest = -1;
        min = 99999;

        for(int i=0; i<n; i++){
            if(at[i] <= time && rt[i] > 0 && rt[i] < min){
                min = rt[i];
                shortest = i;
            }
        }

        if(shortest == -1){
            time++;
            continue;
        }

        rt[shortest]--;   // run for 1 unit time
        time++;

        if(rt[shortest] == 0){
            ct[shortest] = time;
            completed++;
        }
    }

    for(int i=0; i<n; i++){
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for(int i=0; i<n; i++){
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", pid[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    return 0;
}