#include<bits/stdc++.h>
using namespace std;

int main()
{
    //px = &x - con trỏ lấy địa chỉ
    // *px = x - con trỏ lấy giá trị
  /*  int x = 12, *px,*py,*pz,*pt;
    cout<< "x = " << x << endl;
    px = &x;  /// con trỏ trỏ tới địa chỉ của x
    cout<<"px = &x, *px = " << *px << endl;

    pz = &x;  // con trỏ trỏ tới địa chỉ của x
    cout<< "pz = &x, pz = " << pz << endl;
    *pz += 1;
    cout<< "*pz += 1, x = " << x << endl;

    *px = *px+20; // *px= 32;
    cout<< "*px = *px+20, x = " << x << endl;

    py = px;  // cho py trỏ tới chỗ mà px đang trỏ
    *py += 15;
    cout<< "py = px, *py += 15,x = " << x << endl; 

    pt = &x;
    *pt -= 10;
    cout<< "*pt -= 10, *pt = " << *pt << " " << ", x = " << x << endl;
*/
/*    //CẤP PHÁT BỘ NHỚ ĐỘNG new
    int *pa = new int(12); // khai báo con trỏ pa, cấp phát bộ nhớ và gán giá trị ban đầu cho pa là 12

    delete pa;         // giải phóng vùng nhớ vừa cấp cho pa
    int A[5] = {5,10,15,20,25};
    pa = A // cho pa trỏ đến địa chỉ của mảng A
    // Nếu có nhiều con trỏ trỏ cùng 1 địa chỉ thì chỉ cần giải phóng vùng nhớ của 1 con trỏ là được
    // Một con trỏ sau khi cấp phát bộ nhớ động bằng new, cần phải giải phóng bộ nhớ trước khi trỏ đến một địa chỉ mới hoặc cấp phát bộ nhớ mới
*/
 /*   // Mảng động 1 chiều
    int *A = new int[5]; // cấp phát bọ nhớ cho một mảng 5 phần tử kiểu int
    for(int i = 0; i < 5; i++) A[i] = 0;
    for(int i = 0; i < 5; i++) cout<< A[i] << " ";
    cout<< endl;
    delete[] A;   // giải phóng vùng nhớ do mảng A chiếm giữ
    for(int i = 0 ; i < 5; i++) cout<< A[i] << " ";
 */
/*    // Mảng động nhiều chiều
    int **A;
    A = new int*[10]; // cáp phát bộ nhớ cho sô dòng của ma trận A
    for(int i = 0; i < 10 ;i++) A[i] = new int[10]; // cáp phát bộ nhớ cho các phần tử của mỗi dòng
    // => Ma trận 10x10
    for(int i = 0; i < 10 ;i++) delete[] A[i]; // giải phóng bộ nhớ cho mỗi dòng
    delete[] A; // giải phóng bộ nhớ cho mảng các dòng
    // => Giải phóng cho ma trận 2 chiều
*/
    

}