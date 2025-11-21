#include <stdio.h>

int main() {
    int n, tq;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter Time Quantum: ");
    scanf("%d", &tq);

    int pid[n], bt[n], rt[n], ct[n], tat[n], wt[n];

    for(int i=0; i<n; i++){
        pid[i] = i;
        printf("Enter Burst Time for P%d: ", i);
        scanf("%d", &bt[i]);
        rt[i] = bt[i]; // copy burst time to remaining time
    }

    int time = 0, done;

    while(1){
        done = 1;
        for(int i=0; i<n; i++){
            if(rt[i] > 0){
                done = 0;
                
                if(rt[i] > tq){
                    time += tq;
                    rt[i] -= tq;
                } else {
                    time += rt[i];
                    ct[i] = time;
                    rt[i] = 0;
                }
            }
        }
        if(done) break;
    }

    for(int i=0; i<n; i++){
        tat[i] = ct[i];
        wt[i] = tat[i] - bt[i];
    }

    printf("\nPID\tBT\tCT\tTAT\tWT\n");
    for(int i=0; i<n; i++)
        printf("P%d\t%d\t%d\t%d\t%d\n", pid[i], bt[i], ct[i], tat[i], wt[i]);

    return 0;
}