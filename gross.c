#include <stdio.h>
int main() {
    float basicSalary, hraPr, daPr, taPr;
    float grossSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    printf("Enter HRA percentage: ");
    scanf("%f", &hraPr);
    printf("Enter DA percentage: ");
    scanf("%f", &daPr);
    printf("Enter TA percentage: ");
    scanf("%f", &taPr);

    float hra = (hraPr / 100) * basicSalary;
    float da = (daPr / 100) * basicSalary;
    float ta = (taPr / 100) * basicSalary;

    grossSalary = basicSalary + hra + da + ta;

    printf("Gross Salary: %.2f\n", grossSalary);

    
}

