#include<stdio.h>

int main()
{

    system("COLOR 0A");
    int science,english,math,filipino,pe=0;
    float average,total=0;
    char name[30];

    printf("Enter Student name:");
    gets(name);

    printf("\nEnter Science Grade:");
    scanf("%d",&science);
    printf("Enter English Grade:");
    scanf("%d",&english);
    printf("Enter Math Grade:");
    scanf("%d",&math);
    printf("Enter Filipino Grade:");
    scanf("%d",&filipino);
    printf("Enter PE Grade:");
    scanf("%d",&pe);

    total= science+english+math+filipino+pe;
    average=total/5;

    printf("\nHi ");
    puts(name);

    printf("Your grade total is %.2f\n",total);
    printf("Your grade average is %.2f",average);


    return 0;
}
