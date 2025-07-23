#include<stdio.h>

int main() {
    char name = 'P'; // char ประกาศตัวแปรชื่อ
    int age = 18; // int ประกาศตัวแปรอายุ
    float weight = 47.5; // float ประกาศตัวแปรน้ำหนัก
 // scanf รับค่าจากผู้ใช้

    printf("Student %c is %d  years old.\n", name,age ); // %c แสดงชื่อและ %d อายุของนักเรียน
    printf("His weight is %.1f kg.\n", weight); // แสดงน้ำหนักของนักเรียน%.1f แสดงทศนิยม 1 ตำแหน่ง

    return 0;
}