// //In các số từ 1 đến 10:

// #include <iostream>

// using namespace std;

// int main(){
//     // for (int i = 0; i <= 10; i++)
//     // {
//     //     cout << i << " ";
//     // }

//     // return 0;
    

//     int i = 1;
//     while (i <= 10) {
//         cout << i << " ";
//         i++;
//     }
    
//     return 0;
// }




//Tính tổng của các số từ 1 đến N:
// Yêu cầu người dùng nhập vào một số nguyên dương N từ bàn phím.
// Tính tổng của các số từ 1 đến N và hiển thị kết quả.

// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cout << "Nhap so nguyen duong N: ";
//     cin >> N;

//     int sum = 0;
//     for (int i = 1; i <= N; i++) {
//         sum += i; 
//     }

//     cout << "Tong cac so tu 1 den " << N << " la: " << sum ;

//     return 0;
// }


//In bảng cửu chương:
// Sử dụng vòng lặp for để in ra bảng cửu chương từ 1 đến 10.

// #include <iostream>
// using namespace std;
// int main(){
//     cout << "bang cuu chuong" << endl;
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 10; j++)
//         {
//             cout << i << "x" << j << "=" << i*j << endl;
//         }
//         cout << endl;
//     }
//     return 0;
// }




//In dãy Fibonacci:
// Yêu cầu người dùng nhập vào một số nguyên dương N từ bàn phím.
// Sử dụng vòng lặp for hoặc while để in ra dãy Fibonacci đến số thứ N.

// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cout << "Nhap so nguyen duong N: ";
//     cin >> N;

//     int a = 0, b = 1;
//     cout << "Day Fibonacci den so thu " << N << " la:" << endl;

//     if (N >= 1) {
//         cout << a << " ";
//     }
//     if (N >= 2) {
//         cout << b << " ";
//     }

//     for (int i = 3; i <= N; i++) {
//         int temp = b;
//         b = a + b;
//         a = temp;
//         cout << b << " ";
//     }

//     cout << endl;
//     return 0;
// }





// 5.Kiểm tra số nguyên tố:
// -Yêu cầu người dùng nhập vào một số nguyên dương từ bàn phím.
// -Sử dụng vòng lặp để kiểm tra xem số đó có phải là số nguyên tố hay không và hiển thị thông báo tương ứng.

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "nhap mot so nguyen duong bat ki :" <<" ";
//     cin >> a;
//     for (int i = 2; i < a; i++)
//     {
//         if(a % i != 0){
//             cout << a << "khong phai la so nguyen to ";
//         }else{
//             cout << a << "la so nguyen to";
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Nhap mot so nguyen duong bat ki: ";
    cin >> a;

    bool laSoNguyenTo = true; 

   
    int i = 2;
    while (i * i <= a) {
        if (a % i == 0) {
            laSoNguyenTo = false; 
            break; 
        }
        i++;
    }

    if (a <= 1) {
        cout << a << " khong phai la so nguyen to" << endl;
    } else if (laSoNguyenTo) {
        cout << a << " la so nguyen to" << endl;
    } else {
        cout << a << " khong phai la so nguyen to" << endl;
    }

    return 0;
}