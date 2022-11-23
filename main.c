//Made by Aditya Ranjan.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int i,j = 0,a[1000],b[1000],k,l,b_size,a_size,m,n,v1=0,v2=0,score,score_fin;
int main()
{
//---------------------------------------------------------------
system("color 0F");
printf("Welcome to the evolution simulator\n\n");
printf("The year is 5000B.C. and two clans Omarb and Anmak have been fighting each other since forever.");
printf("\nChose your own number of integer warriors and for how many generations they battle.");
printf("\nThe final surviving warrior(s) gets displayed with the winning faction.");

printf("\n\nWarning: Numeral massacre and integer gore ahead discretion is advised.\n\n");

system("pause");
system("cls");
start:
    printf("Enter sizes of the families (Max 1000): ");
    scanf("%d",&a_size);
    b_size = a_size;
    srand(time(0));
    printf("\n");
    printf("Fighters of clan Omarb: \n");
    for(i = 0; i < a_size; i++)
    {
        a[i] = rand() % 10 + 1;
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Fighters of clan Anmak: \n");
    for(i = 0; i < b_size; i++)
    {
        b[i] = rand() % 10 + 1;
        printf("%d ",b[i]);
    }
    printf("\n\n");
    printf("Enter number of generations: ");
    scanf("%d",&m);
    n = 0;
    printf("\n\n");
    printf("Enter evolution modifier of warriors after every generation: ");
    scanf("%d",&score);
    do
    {
        fight();
        show();
        n++;
    }
    while(n!=m);
    for(i = 0; i < a_size; i++)
    {
        if(a[i] == 0)
        {
            v1++;
        }
        if(b[i] == 0)
        {
            v2++;
        }
    }
    if(v1<v2)
    {
        printf("\n\nOmarb wins!\nSurviving warrior generation\n");
        for(i = 0; i < a_size; i++)
        {
            printf("%d ",a[i]);
        }
    }
    if(v1>v2)
    {
        printf("\n\nAnmak wins!\nSurviving warrior generation\n");
        for(i = 0; i < a_size; i++)
        {
            printf("%d ",b[i]);
        }
    }
printf("\n\n");
system("pause");
printf("1. Replay\n2. Exit\nInput your response: ");
scanf("%d",&i);
if(i == 1){
    system("cls");
    goto start;
}
else if(i == 2){
    exit(0);
}
    return 0;
}

//----------------------------------------------------------------

void fight()
{
    for (i = 0; i < a_size; i++)
    {
        if(a[i]>b[i])
        {
            b[i] = 0;
        }
        else if(a[i]<b[i])
        {
            a[i] = 0;
        }
        else if(a[i]==b[i])
        {
            a[i] = b[i] = 0;
        }
    }
    for(l = 0; l < a_size-1; ++l)
    {
        for(i = 0; i < a_size - l - 1; i++)
        {
            j = i+1;
            if(a[i]>a[j])
            {
                k = a[j];
                a[j] = a[i];
                a[i] = k;
            }
        }
    }
    for(l = 0; l < a_size - l -1; ++l)
    {
        for(i = 0; i < a_size - l - 1; i++)
        {
            j = i+1;
            if(b[i]>b[j])
            {
                k = b[j];
                b[j] = b[i];
                b[i] = k;
            }
        }
    }
}

//----------------------------------------------------------------

void show()
{
    printf("\nSurviving Candidates\n");
    for(i = 0; i < a_size; i++)
    {
        printf("%d ",a[i]);
        if(a[i] != 0)
        {
            score_fin = random()%score+1;
            a[i] += score_fin;
        }
    }
    printf("\n");
    for(i = 0; i < a_size; i++)
    {
        printf("%d ",b[i]);
        if(b[i] != 0)
        {
            score_fin = random()%score;
            b[i] += score_fin;
        }
    }
    printf("\n");

}
//---------------------------------------------------------------
