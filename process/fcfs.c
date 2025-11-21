#include<stdio.h>

int main(){
    
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int pid[n], at[n], bt[n], ct[n], tat[n], wt[n];
    for(int i=0; i<n; i++){
        pid[i] = i;
        printf("Enter Arrival time and Burst time for P%d: ", i);
        scanf("%d %d", &at[i], &bt[i]);
    }

    // Sort by arrival time
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(at[j] > at[j+1]){
                
                int temp = at[j];
                at[j] = at[j+1];
                at[j+1] = temp;

                temp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = temp;

                temp = pid[j];
                pid[j] = pid[j+1];
                pid[j+1] = temp;
            }
        }
    }

    // Correct completion time logic
    int time = 0;
    for(int i=0; i<n; i++){
        if(time < at[i]) {
            time = at[i];  // CPU idle
        }
        ct[i] = time + bt[i];
        time = ct[i];
    }
    
    for(int i=0; i<n; i++){
        tat[i] = ct[i] - at[i];
        wt[i]  = tat[i] - bt[i];
    }

    printf("Process\tAT\tBT\tCT\tTAT\tWT\n");
    for(int i=0; i<n; i++){
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", pid[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    return 0;
}
