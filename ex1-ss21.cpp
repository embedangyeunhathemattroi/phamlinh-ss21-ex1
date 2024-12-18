#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    struct student {
        int age;
        char name[100];
        char phone[20];
    };


    struct student student1 = {18, "Nguyen Van A", "09874477477"};
    printf("Student 1: Age = %d, Name = %s, Phone = %s\n", student1.age, student1.name, student1.phone);
    struct student student2 = {19, "Nguyen Van C", "0987447444"};
     printf("Student 2: Age = %d, Name = %s, Phone = %s\n", student2.age, student2.name, student2.phone);

    struct student student3;
    student3.age = 30;
    strcpy(student3.name, "Ma Kim Nguu");
    strcpy(student3.phone, "0976444229");
    printf("Student 3: Age = %d, Name = %s, Phone = %s\n", student3.age, student3.name, student3.phone);

    return 0;
}

