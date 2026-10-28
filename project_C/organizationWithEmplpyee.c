#include <stdio.h>
#include <string.h>

typedef struct employees
{
    char name[30];
    int id;
    float salary;
    char email[30];
    char address[30];
} employees;

typedef struct organization
{
    char name[30];
    char location[30];
    int employees;
    int rank;
    employees info[100];
} organization;

void orgName(int n, organization arr[])
{
    printf("%d. organization's Name: %s\n", n + 1, arr[n].name);
    return;
}

void location(int n, organization arr[])
{
    printf("Number %d organization's Location: %s\n", n + 1, arr[n].location);
    return;
}

void totalEmployees(int n, organization arr[])
{
    printf("Number %d organization's Employees: %d\n", n + 1, arr[n].employees);
    return;
}

void rank(int n, organization arr[])
{
    printf("Number %d organization's type: %d\n", n + 1, arr[n].rank);
    return;
}

void information(int n, organization arr[])
{
    printf("Organization Information: \n");
    printf("Name: %s\n", arr[n].name);
    printf("Location: %s\n", arr[n].location);
    printf("Employees: %d\n", arr[n].employees);
    printf("Type: %d\n", arr[n].rank);
    return;
}

void employeeName(int n, int j, organization arr[])
{
    printf("Number %d employee's Name: %s\n", j + 1, arr[n].info[j].name);
    return;
}

void employeeId(int n, int j, organization arr[])
{
    printf("Number %d employee's ID: %d\n", j + 1, arr[n].info[j].id);
    return;
}

void salary(int n, int j, organization arr[])
{
    printf("Number %d employee's Salary: %.2f\n", j + 1, arr[n].info[j].salary);
    return;
}

void email(int n, int j, organization arr[])
{
    printf("Number %d employee's Email: %s\n", j + 1, arr[n].info[j].email);
    return;
}

void address(int n, int j, organization arr[])
{
    printf("Number %d employee's Address: %s\n", j + 1, arr[n].info[j].address);
    return;
}

void employeeInformation(int n, int j, organization arr[])
{
    printf("Employees Information: \n");
    printf("Name: %s\n", arr[n].info[j].name);
    printf("ID: %d\n", arr[n].info[j].id);
    printf("Salary: %.2f\n", arr[n].info[j].salary);
    printf("Email: %s\n", arr[n].info[j].email);
    printf("Address: %s\n", arr[n].info[j].address);
    return;
}

int main()
{
    int n, x;
    char category, employeeInfo;
    printf("Enter total number of organizations: ");

    if (scanf("%d", &x) != 1 || x < 1)
    {
        printf("Invalid organization count!\n");
        return 1;
    }

    getchar();

    organization arr[x];

    for (int i = 0; i < x; i++)
    {
        printf("Enter the information of number %d org: \n", i + 1);

        printf("Enter org name: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';

        printf("Enter org location: ");
        fgets(arr[i].location, sizeof(arr[i].location), stdin);
        arr[i].location[strcspn(arr[i].location, "\n")] = '\0';

        printf("Enter org employee rank: ");
        scanf("%d", &arr[i].rank);
        getchar();

        printf("Enter total number of employees: ");
        scanf("%d", &arr[i].employees);
        getchar();

        if (arr[i].employees < 0 || arr[i].employees > 100)
        {
            printf("Invalid employee count!\n");
            return 1;
        }

        for (int j = 0; j < arr[i].employees; j++)
        {
            printf("Enter the information of number %d employees: \n", j + 1);

            printf("Enter employee name: ");
            fgets(arr[i].info[j].name, sizeof(arr[i].info[j].name), stdin);
            arr[i].info[j].name[strcspn(arr[i].info[j].name, "\n")] = '\0';

            printf("Enter org employee id: ");
            scanf("%d", &arr[i].info[j].id);
            getchar();

            printf("Enter org employee salary: ");
            scanf("%f", &arr[i].info[j].salary);
            getchar();

            printf("Enter employee email: ");
            fgets(arr[i].info[j].email, sizeof(arr[i].info[j].email), stdin);
            arr[i].info[j].email[strcspn(arr[i].info[j].email, "\n")] = '\0';

            printf("Enter employee address: ");
            fgets(arr[i].info[j].address, sizeof(arr[i].info[j].address), stdin);
            arr[i].info[j].address[strcspn(arr[i].info[j].address, "\n")] = '\0';
        }
    }

    
    printf("Organization List: \n");
    for (int i = 0; i < x; i++)
    {
        orgName(i, arr);
    }

    printf("Enter organization number which information you want: ");
    scanf("%d", &n);

    if (n >= 1 && n <= x)
    {
        printf("Enter catagory: n(Name) || l(Location) || t(Total Employee) || r(rank) || o(All information about the organization) || e(Employee's information): ");
        scanf(" %c", &category);

        if (category == 'n')
        {
            orgName(n - 1, arr);
        }
        else if (category == 'l')
        {
            location(n - 1, arr);
        }
        else if (category == 't')
        {
            totalEmployees(n - 1, arr);
        }
        else if (category == 'r')
        {
            rank(n - 1, arr);
        }
        else if (category == 'o')
        {
            information(n - 1, arr);
        }
        else if (category == 'e')
        {

            int j;

            printf("Enter employee number (1-%d): ",
                   arr[n - 1].employees);
            scanf("%d", &j);

            if (j < 1 || j > arr[n - 1].employees)
            {
                printf("Invalid employee number!\n");
                return 1;
            }

            printf("Enter which information you want: n(name) || i(ID) || s(Salary) || m(email) || a(address) || e(All information about the employee) ");
            scanf(" %c", &employeeInfo);

            if (employeeInfo == 'n')
            {
                employeeName(n - 1, j - 1, arr);
            }
            else if (employeeInfo == 'i')
            {
                employeeId(n - 1, j - 1, arr);
            }
            else if (employeeInfo == 's')
            {
                salary(n - 1, j - 1, arr);
            }
            else if (employeeInfo == 'm')
            {
                email(n - 1, j - 1, arr);
            }
            else if (employeeInfo == 'a')
            {
                address(n - 1, j - 1, arr);
            }
            else if (employeeInfo == 'e')
            {
                employeeInformation(n - 1, j - 1, arr);
            }
            else
            {
                printf("Invalid!\n");
            }
        }
        else
        {
            printf("Invalid category!\n");
        }
    }
    else
    {
        printf("Invalid organization number!\n");
    }

    return 0;
}