#include <iostream>

bool hasDuplicates(int arr[], int size) {
for (int i = 0; i < size - 1; i++) {
for (int j = i + 1; j < size; j++) {
if (arr[i] == arr[j]) {
return true; // Найдено совпадение
}
}
}
return false; // Совпадений нет
}

int main() {
int myArray[] = {1, 2, 3, 4, 5, 3}; // Пример массива
int size = sizeof(myArray) / sizeof(myArray[0]);

if (hasDuplicates(myArray, size)) {
std::cout « "В массиве есть одинаковые элементы." « std::endl;
} else {
std::cout « "В массиве нет одинаковых элементов." « std::endl;
}

return 0;
}