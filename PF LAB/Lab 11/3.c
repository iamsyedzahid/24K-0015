#include <stdio.h>
#include <string.h>

#define MAX_COURSES 5
struct Course
{
    char cname[50];
    int code;
    char instructor[20];
};

struct Student
{
    char sname[50];
    int roll_no;
    struct Course courses[5];
    int numCourses;
};

// Function to write student data to the binary file
void writeData(FILE *file, struct Student *student) {
    fwrite(student, sizeof(struct Student), 1, file);
}

// Function to read and print student data from the binary file
void readData(FILE *file) {
    struct Student student;

    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Student Name: %s\n", student.sname);
        printf("Student ID: %d\n", student.roll_no);
        printf("Courses Enrolled:\n");
        for (int i = 0; i < student.numCourses; i++) {
            printf("\tCourse: %s (Code: %d)\n", student.courses[i].cname, student.courses[i].code);
        }
        printf("\n");
    }
}

// Function to modify course enrollment for a student
void modify_enrollment(FILE *file, int student_id, struct Course new_course, int add_course) {
    FILE *temp_file = fopen("temp.dat", "wb+");
    if (temp_file == NULL) {
        printf("Error opening temporary file.\n");
        return;
    }

    struct Student student;
    int found = 0;

    // Loop through all students in the file and modify if necessary
    while (fread(&student, sizeof(struct Student), 1, file)) {
        if (student.roll_no == student_id) {
            found = 1;

            if (add_course) {
                // Add new course to the student
                if (student.numCourses < MAX_COURSES) {
                    student.courses[student.numCourses] = new_course;
                    student.numCourses++;
                    printf("Course added to student %d\n", student_id);
                } else {
                    printf("Student %d cannot enroll in more than %d courses.\n", student_id, MAX_COURSES);
                }
            } else {
                // Remove the course (simple implementation: remove last course)
                if (student.numCourses > 0) {
                    student.numCourses--;
                    printf("Course removed from student %d\n", student_id);
                } else {
                    printf("No courses to remove for student %d\n", student_id);
                }
            }
        }
        fwrite(&student, sizeof(struct Student), 1, temp_file);  // Write to temp file
    }

    if (!found) {
        printf("Student ID %d not found.\n", student_id);
    }

    // Close both files
    fclose(file);
    fclose(temp_file);

    // Remove the original file and rename the temp file
    remove("students_courses.dat");
    rename("temp.dat", "students_courses.dat");

    // Reopen the file for further operations
    file = fopen("students_courses.dat", "rb+");
}

// Function to generate a report on the total number of students enrolled in each course
void generate_enrollment_report(FILE *file) {
    struct Student student;
    struct Course course_count[MAX_COURSES] = {0};

    // Loop through all students in the file
    while (fread(&student, sizeof(struct Student), 1, file)) {
        // Count enrollments for each course
        for (int i = 0; i < student.numCourses; i++) {
            int found = 0;
            for (int j = 0; j < MAX_COURSES; j++) {
                if (strcmp(course_count[j].cname, student.courses[i].cname) == 0) {
                    course_count[j].code++;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                // Add new course to the report
                for (int j = 0; j < MAX_COURSES; j++) {
                    if (course_count[j].code == 0) {
                        strcpy(course_count[j].cname, student.courses[i].cname);
                        course_count[j].code = 1;
                        break;
                    }
                }
            }
        }
    }

    printf("\nTotal Number of Students Enrolled in Each Course:\n");
    for (int i = 0; i < MAX_COURSES; i++) {
        if (course_count[i].code > 0) {
            printf("Course: %s, Total Students Enrolled: %d\n", course_count[i].cname, course_count[i].code);
        }
    }
}

// Main function
int main() {
    FILE *file = fopen("students_courses.dat", "wb");

    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Create student data
    struct Student student1 = {"John Doe", 1001, {{"Mathematics", 101}, {"Physics", 102}}, 2};
    struct Student student2 = {"Jane Smith", 1002, {{"History", 201}, {"Chemistry", 202}, {"Biology", 203}}, 3};

    // Write student data to the file
    writeData(file, &student1);
    writeData(file, &student2);

    fclose(file);

    // Re-open the file for reading and display student data
    file = fopen("students_courses.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Reading student data from file:\n");
    readData(file);
    fclose(file);

    // Modify enrollment and update the file
    file = fopen("students_courses.dat", "rb+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Course new_course = {"Computer Science", 301};
    modify_enrollment(file, 1001, new_course, 1); // Add course to student 1001
    modify_enrollment(file, 1002, new_course, 0); // Remove course from student 1002

    // Generate enrollment report
    fseek(file, 0, SEEK_SET);
    generate_enrollment_report(file);

    fclose(file);

    return 0;
}
