#include <stdio.h>
#include <stdlib.h>

int main(){
    int grades=0, students=0, med, max=0, min=10000, total=0;
    printf("Insert the grades of the students\n Type -1 when you finish\n");

    while(grades!=-1){
        scanf("%d", &grades);
        if(grades!=-1){
            students++;
            total=grades+total;
            if (grades>max){
                max=grades;
            }if(grades<min){
                min=grades;
            }
        }
    }
    med=total/students;
    printf("%d is the total of students\n%d is the average of the grades \n%d is the greatest grade \n%d is the worst grade\n", students, med, max, min);
return 0;
}
