#include <stdio.h>
void counCall() {
    int counter = 0;                            //การนับจะเริ่มนับ 0 ใหม่เสมอ โดยไม่คงค่าไว้ เหมือนการใช้ static
     counter++;                                 //Increment the counter each time the function is called
     printf("Function called %d\n", counter);   //Printf the number of times the function has been called
}          
int main() {
printf("Starting function calls...%d\n");        //printf Identifier
counCall();                                     //นับครั้งที่1
printf("After first call;\n");                  //printf Identifire
counCall();                                     //นับครั้งที่2
return 0 ;                                      //printf Identifier

}    
/*การไม่ใช้ Static นำหน้า int การนับครั้งเเรกเเละครั้งที่สอง จะได้ 1 เสมอเพราะ การนับในแต่ละครั้งจะเริ่ม 0 ใหม่เสมอ*/