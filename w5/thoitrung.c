#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30
struct Student
{
char name[25];
int age;
float mark;
};

int student_comp(const struct Student* a, const struct Student* b)
{
return a->mark - b->mark;
}

struct Student g_students[MAX];
int g_num;

void read_file(const char* filename, struct Student* students, int* num)
{
*num = 0;
FILE* file = fopen(filename, "r");
if (file != NULL)
{
while (fscanf(file, "%25[^;];%d;%f;\n", students[*num].name, &students[*num].age, &students[*num].mark) == 3)
{
(*num)++;
}
fclose(file);
}
}

void write_file(const char* filename, const struct Student* students, int num)
{
FILE* file = fopen(filename, "w");
if (file != NULL)
{
for (int i = 0; i < num; ++i)
{
fprintf(file, "%s;%d;%1.1f;\n", students[i].name, students[i].age, students[i].mark);
}
fclose(file);
}
}

int main()
{
read_file("students.txt", g_students, &g_num);
qsort(g_students, g_num, sizeof(struct Student), (__compar_fn_t)student_comp);
write_file("sorted.txt", g_students, g_num);
return 0;
}