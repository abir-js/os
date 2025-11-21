#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int pid[n], bt[n], pr[n], wt[n], tat[n], ct[n];

    for(int i=0; i<n; i++){
        pid[i] = i;
        printf("Enter Burst Time & Priority for P%d: ", i);
        scanf("%d %d", &bt[i], &pr[i]);
    }

    // Sort by priority
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(pr[j] < pr[i]) {
                int temp;

                temp = pr[i]; pr[i] = pr[j]; pr[j] = temp;
                temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
                temp = pid[i]; pid[i] = pid[j]; pid[j] = temp;
            }
        }
    }

    wt[0] = 0;
    ct[0] = bt[0];

    // Compute WT, TAT, CT
    for(int i=1; i<n; i++){
        wt[i] = wt[i-1] + bt[i-1];
        ct[i] = ct[i-1] + bt[i];
    }

    for(int i=0; i<n; i++)
        tat[i] = wt[i] + bt[i];

    printf("\nPID\tBT\tPR\tWT\tTAT\n");
    for(int i=0; i<n; i++)
        printf("P%d\t%d\t%d\t%d\t%d\n", pid[i], bt[i], pr[i], wt[i], tat[i]);

    return 0;
}