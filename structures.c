// c program
#include <stdio.h>//scanf(),printf()

#include<string.h> //strcpy()
struct student {
    char name[50];
char reg_no[50];
char email[50];
int phone_no,ID;
float marks; 

} student1, student2;
int main(){
strcpy(student1.name,"Caleb");
strcpy(student1.reg_no,"BCS-03-0056/2024");
strcpy(student1.email,"caleb@gmail.com");
student1.ID = 34774521;
student1.phone_no = 1896543;
student1.marks = 87.5;

printf("name:%s\n",student1.name);
printf("reg_no:%s\n",student1.reg_no);
printf("email:%s\n",student1.email);
printf("ID:%d\n",student1.ID);
printf("phone_no:%d\n",student1.phone_no);
printf("marks:%f",student1.marks);

return 0;
}
