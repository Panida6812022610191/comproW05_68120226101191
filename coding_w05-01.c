#include<stdio.h>

int main() {
    char name = 'P';                                    // char ประกาศตัวแปรชื่อ
    int age = 18;                                      // int ประกาศตัวแปรอายุ
    float weight = 47.5;                              // float ประกาศตัวแปรน้ำหนัก


    printf("Student %c is %d  years old.\n", name,age ); //แสดงข้อมูล %c แสดงชื่อและ %d อายุ
    printf("His weight is %.1f kg.\n", weight);         // แสดงน้ำหนัก %.1f แสดงทศนิยม 1 ตำแหน่ง

    return 0;
}