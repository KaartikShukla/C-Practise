// AdvanceData Types
#include <stdio.h>
struct student{
    int id;
    float total_marks;
    };

union data{
    int id;
    char grad;
};

enum Day{
    Monday,
    Tuesday,
    Wednesday
};
int main() {
    //User Defined Data Types
    //Struct
    struct student a;
    a.id =1;
    a.total_marks =  187.5;
    printf("%d\n",a.id);
    printf("%.2f\n",a.total_marks);

    //Union
    printf("Union\n");
    union data d;
    d.id =3;
    printf("id = %d\n",d.id);
    d.grad ='A';
    printf("Grade = %c\n",d.grad);
    printf("%d\n",sizeof(struct student));
    printf("%d\n",sizeof(union data));
    
    //Enum
    
    enum  Day today = Monday;
    if(today == Monday){
        printf("The Value assigned to monday is :%d",today);
    }
    return 0;
}
