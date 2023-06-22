/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEF TC, RMUTL, Chiang Mai, Thailand
*/

#include <stdio.h>
int main() {
    char firstName[] = "Aomsin";
    char lastName[] = "AomMoney";
    char address[] = "TC, RMUTL, Chiang Mai, Thailand";
    char firstName2[] = "ABC";
    char lastName2[] = "DEF";
    char address2[] = "TC, RMUTL, Chiang Mai, Thailand";
    printf("Output: %s %s %s\n", firstName, lastName, address);
    printf("Output: %s %s %s\n", firstName2, lastName2, address2);
}
