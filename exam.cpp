

// // #include<stdio.h>
// // #include<conio.h>
// // #include<iostream>
// // int main()
// // {
// //     float n=0,i,j;
// //     char t='*';
// //     system("cls");
// //     // printf("enter n : ");
// //     // scanf("%d",&n);
// //     // for ( i = 1; i <=n; i++)
// //     // {
// //     //     for ( j = (n-i); j >=1; j--)
// //     //     {
// //     //         printf(" ");   
// //     //     }
// //     //     for ( j = i; j >=1; j--)
// //     //     {
// //     //         printf(" * ");   
// //     //     }

// //     //     printf("\n");
// //     // }
// //     if(n)
// //     printf("hii");
// //     else
// //     printf("byy");
// //     getch();
// // }
// // #include <stdio.h>

// // void insertion_sort(int arr[], int n) {
// //     int i, j, key;
// //     for (i = 1; i < n; i++) {
// //         key = arr[i];
// //         j = i - 1;
// //         while (j >= 0 && arr[j] > key) {
// //             arr[j+1] = arr[j];
// //             j = j - 1;
// //         }
// //         arr[j+1] = key;
// //     }
// // }

// // int main() {
// //     int arr[] = {5, 2, 8, 12, 7, 3, 1, 6};
// //     int n = sizeof(arr) / sizeof(arr[0]);
// //     int i;

// //     printf("Array before sorting:\n");
// //     for (i = 0; i < n; i++) {
// //         printf("%d ", arr[i]);
// //     }
// //     printf("\n");

// //     insertion_sort(arr, n);

// //     printf("Array after sorting:\n");
// //     for (i = 0; i < n; i++) {
// //         printf("%d ", arr[i]);
// //     }
// //     printf("\n");

// //     return 0;
// // }
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// // Function to add a new note
// void add_note() {
//     string title, content;
//     cout << "Enter note title: ";
//     getline(cin, title);
//     cout << "Enter note content: ";
//     getline(cin, content);
//     ofstream outfile("notes.txt", ios::app);
//     outfile << title << endl;
//     outfile << content << endl;
//     outfile.close();
//     cout << "Note added successfully!" << endl;
// }

// // Function to display all notes
// void view_notes() {
//     ifstream infile("notes.txt");
//     if (infile.is_open()) {
//         string line;
//         int note_count = 0;
//         while (getline(infile, line)) {
//             note_count++;
//             cout << "Note " << note_count << ": " << line << endl;
//             getline(infile, line);
//             cout << "Content: " << line << endl;
//         }
//         infile.close();
//         if (note_count == 0) {
//             cout << "No notes found." << endl;
//         }
//     } else {
//         cout << "Error: Unable to open notes file." << endl;
//     }
// }

// // Main function
// int main() {
//     int choice;
//     while (true) {
//         cout << "1. Add new note" << endl;
//         cout << "2. View all notes" << endl;
//         cout << "3. Exit" << endl;
//         cout << "Enter your choice (1-3): ";
//         cin >> choice;
//         cin.ignore(); // ignore newline character
//         switch (choice) {
//             case 1:
//                 add_note();
//                 break;
//             case 2:
//                 view_notes();
//                 break;
//             case 3:
//                 cout << "Exiting..." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
//         }
//     }
// }
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

// Define a structure for storing student records
struct Student {
    string name;
    int roll_number;
    int attendance = 0;
};

// Function to add a new student record
void add_student(vector<Student>& students) {
    Student new_student;
    cout << "Enter student name: ";
    getline(cin, new_student.name);
    cout << "Enter student roll number: ";
    cin >> new_student.roll_number;
    students.push_back(new_student);
    cout << "Student record added successfully!" << endl;
}

// Function to display all student records
void view_students(vector<Student>& students) {
    if (students.size() == 0) {
        cout << "No student records found." << endl;
        return;
    }
    cout << left << setw(20) << "Name" << setw(20) << "Roll Number" << setw(20) << "Attendance" << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << left << setw(20) << students[i].name << setw(20) << students[i].roll_number << setw(20) << students[i].attendance << endl;
    }
}

// Function to mark attendance for a student
void mark_attendance(vector<Student>& students) {
    int roll_number;
    cout << "Enter roll number of student to mark attendance for: ";
    cin >> roll_number;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].roll_number == roll_number) {
            students[i].attendance++;
            cout << "Attendance marked successfully for " << students[i].name << "." << endl;
            return;
        }
    }
    cout << "Error: Student with roll number " << roll_number << " not found." << endl;
}

// Main function
int main() {
    vector<Student> students;
    ifstream infile("students.txt");
    if (infile.is_open()) {
        string line;
        while (getline(infile, line)) {
            Student student;
            student.name = line;
            infile >> student.roll_number >> student.attendance;
            infile.ignore(); // ignore newline character
            students.push_back(student);
        }
        infile.close();
        cout << "Student records loaded successfully from file." << endl;
    } else {
        cout << "Error: Unable to open students file. Starting with empty record list." << endl;
    }
    int choice;
    while (true) {
        cout << "1. Add new student record" << endl;
        cout << "2. View all student records" << endl;
        cout << "3. Mark attendance for a student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        cin.ignore(); // ignore newline character
        switch (choice) {
            case 1:
                add_student(students);
                break;
            case 2:
                view_students(students);
                break;
            case 3:
                mark_attendance(students);
                break;
            case 4:
                cout << "Saving student records to file and exiting..." << endl;
                ofstream outfile("students.txt");
                for (int i = 0; i < students.size(); i++) {
                    outfile << students[i].name << endl;
                    outfile << students[i].roll_number << " " << students[i].attendance << endl;
                }
                outfile.close();
        
                return 0;
        }
        
    }
}