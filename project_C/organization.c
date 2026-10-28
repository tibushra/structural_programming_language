#include <stdio.h>
#include <string.h>

typedef struct organization
{
    char name[30];
    char location[30];
    int employees;
    int rank;
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

int main()
{
    int n, x;
    char category;
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