#include <stdio.h>
#include <string.h>

typedef struct organization
{
    char name[30];
    char location[30];
    int employees;
} organization;

void name(int n, organization arr[])
{
    printf("Number %d organization Name: %s\n", n + 1, arr[n].name);
    return;
}

void location(int n, organization arr[])
{
    printf("Number %d organization Location: %s\n", n + 1, arr[n].location);
    return;
}

void employees(int n, organization arr[])
{
    printf("Number %d organization Employees: %d\n", n + 1, arr[n].employees);
    return;
}

void information(int n, organization arr[])
{
    printf("Organization Information: \n");
    printf("Name: %s\n", arr[n].name);
    printf("Location: %s\n", arr[n].location);
    printf("Employees: %d\n", arr[n].employees);
    return;
}

int main()
{
    int n;
    char category;
    organization arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the information of number %d org: \n", i + 1);

        printf("Enter org name: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';

        printf("Enter org location: ");
        fgets(arr[i].location, sizeof(arr[i].location), stdin);
        arr[i].location[strcspn(arr[i].location, "\n")] = '\0';

        printf("Enter org employee number: ");
        scanf("%d", &arr[i].employees);
        getchar();
    }

    printf("Enter the number of organization which informtaion you want: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 10)
    {
        printf("Enter catagory: n(Name) || l(Location) || e(Employees) || a(All): ");
        scanf(" %c", &category);

        if (category == 'n')
        {
            name(n - 1, arr);
        }
        else if (category == 'l')
        {
            location(n - 1, arr);
        }
        else if (category == 'e')
        {
            employees(n - 1, arr);
        }
        else if (category == 'a')
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