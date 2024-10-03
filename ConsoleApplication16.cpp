#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

struct Mouse {
    int num_button; // Кол-во кнопок
    bool backlight; // Есть ли подсветка
    string color;   // Цвет мышки
    double weight;  // Вес мышки
    string manufacturer; // Страна производитель
};

struct CPU {
    int numCore; // Кол-во ядер
    int frequency; // Частоты
    bool int_graphics; // Встроенная графика
    double price; // Цена
    string connect_type; // Тип разьема

};

struct Watch{
    bool clock_hands; // Наличие стрелок
    string strap_mat; // Материал ремешка
    string body_mat; // Материал корпуса
    bool date; // Показывают ли дату
    int price;

};

void printMouseInfo(const Mouse& mouse);
void printCPUInfo(const CPU& cpu);
void printWatchInfo(const Watch& watch);

int main() {
    setlocale(0, "ru");

    cout << "Мышка:" << "\n";
    Mouse mouse = { 3, 1, "Black", 0.023, "China" };

    printMouseInfo(mouse);
    cout << "\n";

    cout << "Процессор:" << "\n";
    CPU cpu = { 12, 2300, 1, 20.120, "AMD" };

    printCPUInfo(cpu);
    cout << "\n";

    cout << "Часы:" << "\n";
    Watch watch = { 0, "leather", "Steel", 1, 2300 };

    printWatchInfo(watch);
    cout << "\n";
}

void printMouseInfo(const Mouse& mouse) // Функция для вывода информации про мышку
{
    cout << "Подсветка - " << (mouse.backlight ? "Присутствует" : "Отсутствует") << "\n"
        << "Цвет мышки - " << mouse.color << "\n"
        << "Страна производитель - " << mouse.manufacturer << "\n"
        << "Кол-во кнопок - " << mouse.num_button << "\n"
        << "Вес мышки - " << mouse.weight << " кг" << "\n";
}

void printCPUInfo(const CPU& cpu) // Функция для вывода информации про мышку
{
    cout << "Встроенная графика - " << (cpu.int_graphics ? "Присутствует" : "Отсутствует") << "\n"
        << "Кол-во ядер - " << cpu.numCore << "\n"
        << "Цена - " << cpu.price << "\n"
        << "Частоты - " << cpu.connect_type << "\n"
        << "Тип разьема - " << cpu.frequency << "\n";
}

void printWatchInfo(const Watch& watch) // Функция для вывода информации про мышку
{
    cout << "Выводят ли дату - " << (watch.date ? "Присутствует" : "Отсутствует") << "\n"
        << "Материал ремешка - " << watch.strap_mat << "\n"
        << "Цена - " << watch.price << "\n"
        << "Материал корпуса - " << watch.body_mat << "\n"
        << "Имеються ли стрелки - " << watch.clock_hands << "\n";
}