#include <stdio.h>
void counCall() {
    static int counter = 0;                             //ประกาศค่าแต่ครั้งแรก และคงค่าต่อ
    counter++;                                          //Increment the counter each times thefunction is called
    printf("Function called %d\n", counter);            //Print the number of times the function has been called
}
int main() {
printf("Starting function calls...%d\n");               //printf Identifier
counCall();                                             //นับครั้งที่1
printf("After first call;\n");                          //printf Identifier
counCall();                                             //นับครั้งที่2

}
    // การใช้ static การนับ ครั้งแรกจะได้ 1และครั้งที่สองจะได้ 2 เพราะการนับจะไม่เริ่มใหม่เสมอ เเต่จะคงค่าไว้
    