#include <iostream>
#include <vector>

int main() {
std::vector<int> x = {2, 3, -4, 5, 6}; // Пример входного массива
int u = 0;
int t = -1; // Инициализируем t значением -1, если в массиве нет отрицательных элементов

for (int i = 0; i < x.size(); i++) {
if (x[i] < 0) {
t = i; // Если найден отрицательный элемент, присваиваем t его индекс
break;
}
}

for (int i = 0; i <= t; i++) {
int product = 1;
for (int j = 0; j <= i; j++) {
product *= x[j]; // Вычисляем произведение x1, x1x2, x1x2x3 и т.д.
}
u += product; // Добавляем каждое произведение к общей сумме
}

std::cout « "Значение u: " « u « std::endl;

return 0;
}