
#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    // 1.Створити репо вашого проекту локально, створити вітку mybranch, в якій пишемо код в main(): привіт з mybranch.
    //commit цей стан в mybranch.Переходимо в master, створюємо новій.h файл з будь - яким кодом, робтимо commit.
    //Робимо злиття  mybranch  в master  in VS, вирішуємо конфлікти.Робимо commit в master і push на git.hub.
    //2. Робимо злиття з master в mybranch  in VS, commit, push вітки і приймаєте на git.hub .

    cout << "Hello from branch!" << endl;
    cout << "Hello from branch!" << endl;

    int a = 5, b = 10;

    int result = Sum(a, b);


    cout << "Some problems have popped up with my branch, but i got how it works\n";
    cout << "Interesting...\n";
}

