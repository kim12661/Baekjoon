#include <stdio.h>

float Grade_to_Point(char grade[3]) {
    if (grade[0] == 'A' && grade[1] == '+') return 4.5;
    else if (grade[0] == 'A' && grade[1] == '0') return 4.0;
    else if (grade[0] == 'B' && grade[1] == '+') return 3.5;
    else if (grade[0] == 'B' && grade[1] == '0') return 3.0;
    else if (grade[0] == 'C' && grade[1] == '+') return 2.5;
    else if (grade[0] == 'C' && grade[1] == '0') return 2.0;
    else if (grade[0] == 'D' && grade[1] == '+') return 1.5;
    else if (grade[0] == 'D' && grade[1] == '0') return 1.0;
    else if (grade[0] == 'F') return 0;
    else if (grade[0] == 'P') return 0;
    else return -1;
}

int main(void)
{
    char name[50];
    float credit[20];
    char grade[20][3];
    float total_grade = 0;
    float total_credit = 0;

    for (int i = 0; i < 20; i++) {
        scanf(" %s", name);
        scanf(" %f", &credit[i]);
        scanf(" %2s", grade[i]);
    }
    /*
    for (int i = 0; i < 20; i++) {
        printf("Credit[%d]: %f  ", i, credit[i]); // 입력된 성적 출력 (디버깅용)
        printf("Grade[%d]: %s\n", i, grade[i]); // 입력된 성적 출력 (디버깅용)
    }
    */
    for (int i = 0; i < 20; i++) {
        if ((grade[i][0]) == 'P') continue;
        total_credit += credit[i];
        total_grade += credit[i] * Grade_to_Point(grade[i]);
    }

    printf("%f", total_grade / total_credit);
    return 0;
}