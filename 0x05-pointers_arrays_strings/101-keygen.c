#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - the program generate random 9 digits
 *
 * Return: 0 if successful
 */

int main(void)
{
int i = 0;
int n = 0;
int sum = 0;
char password[100];

char al[63] = "0123456789ABCDEFGHIJKLNMOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
srand(time(NULL));
while (sum < (2772 - 122))
{

n = rand() % 62;
password[i] = al[n];
sum = sum + password[i];
i++;
}

n = 2772 - sum;
password[i] = n;
password[++i] = '\0';
printf("%s\n", password);
return (0);
}
