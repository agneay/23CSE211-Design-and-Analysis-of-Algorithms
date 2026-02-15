#include <stdio.h>
#include <stdlib.h>

// Job structure
struct Job
{
    char id;
    int deadline;
    int profit;
};

// Compare function for sorting by profit (descending)
int compare(const void *a, const void *b)
{
    struct Job *job1 = (struct Job *)a;
    struct Job *job2 = (struct Job *)b;
    return job2->profit - job1->profit;
}

// Job Sequencing Function
void jobSequencing(struct Job jobs[], int n)
{
    // Sort jobs by profit
    qsort(jobs, n, sizeof(struct Job), compare);

    // Find maximum deadline
    int maxDeadline = 0;
    for (int i = 0; i < n; i++)
    {
        if (jobs[i].deadline > maxDeadline)
            maxDeadline = jobs[i].deadline;
    }

    // Time slots initialized to empty
    char slot[maxDeadline];
    for (int i = 0; i < maxDeadline; i++)
        slot[i] = '\0';

    int totalProfit = 0;

    // Schedule jobs
    for (int i = 0; i < n; i++)
    {
        for (int j = jobs[i].deadline - 1; j >= 0; j--)
        {
            if (slot[j] == '\0')
            {
                slot[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    // Output
    printf("Job sequence: ");
    for (int i = 0; i < maxDeadline; i++)
    {
        if (slot[i] != '\0')
            printf("%c ", slot[i]);
    }
    printf("\nTotal Profit: %d\n", totalProfit);
}

// Driver Code
int main()
{
    struct Job jobs[] = {
        {'a', 2, 100},
        {'b', 1, 19},
        {'c', 2, 27},
        {'d', 1, 25},
        {'e', 3, 15}};

    int n = sizeof(jobs) / sizeof(jobs[0]);
    jobSequencing(jobs, n);

    return 0;
}
