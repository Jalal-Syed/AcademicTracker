#pragma once
int MainMenu();
int BackToMainMenu();
int main();
void AcademicStatus();
void AddSemester();
void AddSubject();
void AddLab();
void AddNCS();
void AddProject();

inline bool Running = true;
inline short TempNumber;
inline int Choice;

typedef struct Semester{
    char *SemesterName;
} Semester;


