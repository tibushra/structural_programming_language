#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));
    printf("%zu", numStudents * sizeof(*students)); 

    return 0;
}