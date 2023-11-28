#include <iostream>
#include <cmath>

using namespace std;


// Функции задачи Proc5.
void Enter(float& X1, float& Y1, float& X2, float& Y2);//Функция Enter, с прееменной с плавающей запятой 

void RectPS();//Функция RectPS

float Perimeter(float& XAB, float& YAB);//Функция Perimeter, с прееменной с плавающей запятой 

float Square(float& XAB, float& YAB);//Функция Square, с прееменной с плавающей запятой 

// Функции задачи Boolean18

void letter();//Функция letter

void number();//Функция number

// Функции задачи Integer22

void time();//Функция time

void result();//Функция result 

int main()
{
    {
        cout<<  " Виберіть одну з задач (введіть числа 1 чи 3) \n"<<endl<<//Показ в консоли
                " 1. Proc5 "<<endl<<//Показ в консоли
                " 2. Boolean18 "<<endl<<//Показ в консоли
                " 3. Integer22 "<<endl;//Показ в консоли
        int menu;//Целочисленная переменная
        cin>> menu;//Считывает данные с консоли
    
        switch (menu)//множественный условный оператор
        {
            case 1: RectPS();//Конструкция case с функцией RectPS
            break;//Оператор break

            case 2: letter();//Конструкция case с функцией letter
            break;//Опертаор break

            case 3: time();//Конструкция case с функцией time
            break;//Опертаор break

            default: cout << " Неправильно веденно номер завдання (тільки 1 та 3) "<<endl;//Показ в консоли, оператор default    
        }
    }
}

void Enter(float& X1, float& Y1, float& X2, float& Y2)//Функция Enter, с прееменной с плавающей запятой 
{
    float XAB = fabs(X2 - X1);//Переменная с плавающей запятой
    float YAB = fabs(Y1 - Y2);//Переменная с плавающей запятой
    
    cout << Perimeter(XAB, YAB) << endl;//Показ в консоли периметра 
    cout << Square(XAB, YAB) << endl;//Показ в консоли площи
}

void RectPS()//Функция RectPS
{
    float x11,x12,x13,x21,x22,x23,y11,y12,y13,y21,y22,y23;//Переменная с плавающей запятой

    cout << " Введіть x1, y1, x2, y2: " << endl;// Показ в консоли
    cin >> x11 >> y11 >> x21 >> y21;//Считывает данные с консоли

    if(y11 > y21 && x21 > x11)//Опертаор if
    {
        Enter(x11, y11, x21, y21);//Функция Enter
    }
    else//Оператор else
    {
        cout << " Неправильні координати "<< endl;// Показ в консоли
    }


    cout << " \n Введіть x1, y1, x2, y2: " << endl;// Показ в консоли
    cin >> x12 >> y12 >> x22 >> y22;//Считывает данные с консоли

    if(y12 > y22 && x22 > x12)//Опертаор if
    {
        Enter(x12, y12, x22, y22);//Функция Enter
    }
    else//Оператор else
    {
        cout << " Неправильні координати "<< endl;// Показ в консоли
    }


    cout << " \n Введіть x1, y1, x2, y2: " << endl;// Показ в консоли
    cin >> x13 >> y13 >> x23 >> y23;

    if(y13 > y23 && x23 > x13)//Опертаор if
    {
        Enter(x13, y13, x23, y23);//Функция Enter
    }
    else//Оператор else 
    {
        cout << " Неправильні координати "<< endl;// Показ в консоли
    }
}


float Perimeter(float& XAB, float& YAB)//Функция Perimeter, с прееменной с плавающей запятой 
{
    float P = (XAB + YAB)*2;//Переменная с плавающей запятой
    cout << " Периметр: ";//Показ в консоли
    return P;//Оператор return
}

float Square(float& XAB, float& YAB)//Функция Square, с прееменной с плавающей запятой 
{
    float S = XAB * YAB;//Переменная с плавающей запятой
    cout << " Площа: ";//Показ в консоли
    return S;//Оператор return
}


void letter()//Функция letter
{
    int a,b,c;//Целочисленные переменные a,b,c

    cout<< " A= ";// Показ в консоли A =
    cin>> a;//Считывает данные с консоли
    cout<< " B= ";// Показ в консоли B = 
    cin>> b;//Считывает данные с консоли
    cout<< " C= ";// Показ в консоли C = 
    cin>> c;//Считывает данные с консоли
    number();//Функция number
}


void number()//Функция number
{
    int a,b,c;//Целочисленные переменные a,b,c
    bool pair;//Логический тип данных 
    pair = ((a == b) && (b == a) || (b == c) && (c == b) || (a == c) && (c == a));//Переменная pair внутри которой решение задания
    cout<< " Пара співпадаючих чисел "  <<boolalpha << pair << endl;// Показ в консоли логического типа данных 
}


void time()//Функция time
{
    cout<< " Впишіть годину в секундах: ";//Показ в консоли
    result();//Функция result
}


void result()//Функция result
{
    int N;//Целочисленная переменная N
    cin >> N;//Считывает данные с консоли
    cout << " Кількість секунд, що пройшли з початку останньої години:\n " << N % 3600 <<endl;// Показ в консоли N
}