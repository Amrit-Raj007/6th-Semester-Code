#include<stdio.h>
#include<conio.h>
#define max 30
void main()
{
    int i,j,n,p[max],bt[max],wt[max],tat[max],t;
    float awt=0,atat=0;
    printf("Enter the Number of Processes:- ");
    scanf("%d",&n);
    printf("Enter the Process Number:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Enter the Burst time Respectively:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }

    //Sorting Using Bubble Sort}
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(bt[j]>bt[j+1])
            {
                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;

                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }

        }
    }
    printf("Process Number \t Burst_Time \t TAT \t Waiting_Time\n ");
    for(i=0;i<n;i++);
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t %d\t %d\t %d\n",p[i],bt[i],tat[i],wt[i]);
    }
    atat=atat/n;
    awt=awt/n;
    printf("Avg wt=%f and Avg atat=%f",awt,atat);
}
