#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    int capacity; // вместимость стека
    int size; // текущий размер стека
    int top; // индекс верхнего элемента стека
    int* array; // все элементы стека
    int* modifyArray();  // функция, возвращает массив с удаленным верхним элементом


public:
    Stack(int _capacity);
    ~Stack();
    void push_back(int x); // добавление элемента в стек
    int pop(); // извлечение из стека последнего элемента
    bool isStackOverflow(); // проверка на переполнение стека
    bool isEmpty(); // проверка на пустоту стека
};

Stack::Stack(int _capacity) {
    array = new int[_capacity];
    capacity = _capacity;
    size = 0;
    top = -1;
}

Stack::~Stack() {
    delete array;
}

void Stack::push_back(int x) {
    if (!isStackOverflow()) {
        top++;
        array[top] = x;
        size++;
    }
}

int Stack::pop() {
    if (!isEmpty()) {
        int temp = array[top];
        array = modifyArray();
        size--;
        top--;
        return temp;
    }
}

bool Stack::isStackOverflow() {
    return size > capacity;
}

bool Stack::isEmpty() {
    return size == 0;
}

int *Stack::modifyArray() {
    int* newArray = new int[size];
    for (int i = 0; i < size - 1; i++) {
        newArray[i] = array[i];
    }
    return newArray;
}


int main() {
    int capacity1, capacity2; // вместимости стеков
    string name1, name2; // "имена" стеков
    vector<int> input; // вектор со значениями, которые нужно добавить в стеки

    cin >> name1 >> capacity1;
    Stack myStack1(capacity1);
    cin >> name2 >> capacity2;
    Stack myStack2(capacity2);

    for (int i = 0; i < fmax(capacity1, capacity2)+1; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }

    for (int i = 0; i < capacity1; i++) {
        myStack1.push_back(input[i]);
    }
    for (int i = 0; i < capacity2; i++) {
        myStack2.push_back(input[i]);
    }

    cout << name1 << ":\n";
    while (!myStack1.isEmpty()) {
        cout << myStack1.pop() << endl;
    }
    cout << name2 << ":\n";
    while (!myStack2.isEmpty()) {
        cout << myStack2.pop() << endl;
    }

}


