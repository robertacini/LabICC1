#include <stdio.h>
#include <stdlib.h>

int s1, s2;
int m1,m2;
int DriveMotors(int m1,int m2);
int sensor1();
int sensor2();
int IA(int s1,int s2);

int main()
{
    while(1)
    {
    sensor1();
    sensor2();
    IA(s1,s2);
    DriveMotors(m1,m2);    }
    return 0;
}

int sensor1()
{

    printf("Digite os valores do sensor 1\n");   ;
    scanf("%d", &s1);
    return s1;
}

int sensor2()
{
    printf("Digite os valores do sensor 2\n");   ;
    scanf("%d", &s2);
    return s2;
}


int IA(int s1,int s2)
{

    if(s1==1 && s2==1)
    {
        m1=0;
        m2=1;
    }
    else if(s1==0 && s2==0)
    {
        m1=1;
        m2=1;
    }
    else if(s1==1 && s2==0)
    {
        m1=1;
        m2=0;
    }
    else if(s1==0 && s2==1)
    {
        m1=0;
        m2=1;
    }
}

int DriveMotors(int m1,int m2)
{
    if(m1==1)
        printf("1---0");
    else if (m1==0)
        printf("0---1");
    if(m2==1)
        printf("0----1");
    else if (m2==0)
        printf("1-----0");

}









