
#include <stdio.h>
#include <conio.h>
#include <string.h>
/******************Pass Struct Elements/ Struct variable ************/
struct book{
        char name[10], author[25];
        int pages;
    };

    void display1 (char *, char *, int);
    void display2 (struct book);
    void display3 (struct book*);
/******************Pass Struct Elements/ Struct variable END *************/
int main() {
    /********************************Array of Structure************************************
    struct book{
        char name;float price;int pages;
    };
    struct book b[10];
    int i, dh;
    for(i=0; i<=2;i++){
        printf("Enter the book details");
        scanf("%c %f %d",&b[i].name,&b[i].price,&b[i].pages);
        while((dh=getchar()) != '\n');
    }
    for(i = 0; i<= 2; i++){
        printf("%c %f %d",b[i].name,b[i].price,b[i].pages);
    }
    return 0;*/
    /*******************************Copying Struct Element*************************
    struct book{
        char name[10]; float price; int pages;
    };
    struct book b1 = {"ABCD",132.56,100};
    struct book b2,b3;
    strcpy(b2.name,b1.name); //Piece-Meal Copying
    b2.price = b1.price;
    b2.pages = b1.pages;
    b3 = b2; // Copying all elements at one go
    printf("%s %f %d\n",b1.name,b1.price,b1.pages);
    printf("%s %f %d\n",b2.name,b2.price,b2.pages);
    printf("%s %f %d\n",b3.name,b3.price,b3.pages);
    */
   /*****************************Nested Struct************************************
      struct address{
        char phone[10], city[25]; int pin;
      };
      struct emp{
        char name[25]; struct address a;
      };

      struct emp e1 = {"Sanjay","123456","Kanpur",20102};
      printf("Name = %s Phone = %s\n",e1.name,e1.a.phone);
      printf("City = %s Pin = %d\n",e1.a.city,e1.a.pin);
    */
    /******************Pass Struct Elements/ Struct variable *************/
    struct book b1 = {"Let us C","YPK,464"};
    display1(b1.name,b1.author,b1.pages);
    display2(b1);
    display3(&b1);    
}
void display1 (char *n, char *a, int p){
    printf("%s %s %d\n",n,a,p);
}