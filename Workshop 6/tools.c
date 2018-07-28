#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void flushKeys(void);
void pause(void);
int yes(void);
void scanInt(int* ip);
int getInt(int min, int max, const char* prompt, const char errMes[]);
void scanDouble(double* ip);
double getDouble(double min, double max, const char* prompt, const char errMes[], int precision);

int main(void)
{
    char enter;

    printf("IPC144 ms1 in lab test\n");
    printf("Starting tester!\n");
    pause();



    return 0;
}

void flushKeys(void)
{
    while (getchar() != '\n')
        ;
}

void pause(void)
{
    printf("Hit <ENTER> to continue...\n");
    flushKeys();
}

int yes(void)
{
    int yes;
    printf("Testing yes(), Enter the followig:\n");
    printf("abc<ENTER>\n");
    printf("y<ENTER>\n");
    scanf("%d", &yes);

    while (yes != 'y' || yes != 'Y' || yes != 'n' || yes != 'N')
    {
        printf("Only (y) or (n) are acceptable, redo: ");
        scanf("%d", &yes);
    }


    if (yes == 'y' || yes == 'Y')
    {
        yes = 1;
    }
    else
    {
        yes = 0;
    }

    return yes;
}

void scanInt(int* ip)
{
    int testInt;
    printf("Testing scanInt(), Enter the following: \n");
    printf("abc<ENTER>\n");
    printf("1abc<ENTER>\n");
    printf("1<ENTER>\n\n");
    scanf("%d", testInt);
    while(testInt != )
    printf("Invalid integer try again: ");
    scanf("%d", testInt);
}

int getInt(int min, int max, const char* prompt, const char errMes[])
{

}

void scanDouble(double* ip)
{

}

double getDouble(double min, double max, const char* prompt, const char errMes[], int precision)
{

}
