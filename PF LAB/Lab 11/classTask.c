#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct teacher {
    char teacher_name[50];
    char course[50];
};

struct department {
    char department[50];
    struct teacher name[10];
};

struct university {
    char uni_name[50];
    char campus[50];
    struct department info;    
};

struct student {
    int id;
    char name[50];
    struct university data;    
};
void checkDep(char str[50], char str2[50]){
    
    if ( strcmp(str, str2) ){
        printf("Student 1 and Student 2 have same department.");
        return;
    }
    else {
        printf("Both are in different departments.");
        return;
    }
}

int main() {
    struct student s1, s2, s3;
    
    
    s1.id = 15;
    strcpy(s1.name, "Zahid");
    strcpy(s1.data.uni_name, "FAST");
    strcpy(s1.data.info.department, "Artificial Intelligence");
    strcpy(s1.data.info.name[0].teacher_name, "S. Farooq Zaidi");
    strcpy(s1.data.info.name[0].course, "PF Theory");
    
    s2.id = 2;
    strcpy(s2.name, "Muqeet");
    strcpy(s2.data.uni_name, "IBA");
    strcpy(s2.data.info.department, "Computer Science");
    strcpy(s2.data.info.name[0].teacher_name, "M. Khalid");
    strcpy(s2.data.info.name[0].course, "PF Lab");
    
    s3.id = 2;
    strcpy(s3.name, "SaadUllah");
    strcpy(s3.data.uni_name, "NUST");
    strcpy(s3.data.info.department, "Computer Science");
    strcpy(s3.data.info.name[0].teacher_name, "Ahad");
    strcpy(s3.data.info.name[0].course, "AP");

    checkDep(s1.data.info.department,s2.data.info.department);    
    printf("Student 1:\n ID: %d,\n Name: %s,\n University: %s,\n Department: %s,\n Teacher: %s\n Course: %s\n", s1.id, s1.name, s1.data.uni_name, s1.data.info.department, s1.data.info.name[0].teacher_name, s1.data.info.name[0].course);
    
    printf("Student 2:\n ID: %d,\n Name: %s,\n University: %s,\n Department: %s,\n Teacher: %s\n Course: %s\n", s2.id, s2.name, s2.data.uni_name, s2.data.info.department, s2.data.info.name[0].teacher_name, s2.data.info.name[0].course);

    return 0;
}
