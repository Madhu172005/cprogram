#include <stdio.h>
#include <string.h>

struct Employee
{
int employee_id;
char name[20];
int salary;
};

struct Organisation
{
char organisation_name[20];
char org_number[20];

struct Employee emp;
};

int main()
{
struct Organisation org;


printf("Employee id : %d\n",
		org.emp.employee_id);
printf("Employee name : %s\n",
		org.emp.name);
printf("Employee Salary : %d\n",
		org.emp.salary);
}

