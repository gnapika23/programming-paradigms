#include <iostream>

class MyStack {
private:
    static int stackCount;
    static const int max_stack_count = 10;
    int *data;
    int max;
    int current;
public:
    MyStack(int maxSize);
    void push(int element);
    int pop();
    int maxSize();
    int currentSize();
    bool isEmpty();
    void display();
    friend MyStack operator + (MyStack const &obj1, MyStack const &obj2);
    ~MyStack();
};

MyStack::MyStack(int maxSize) {
    if (stackCount < max_stack_count) {
            this->max = maxSize;
            data = new int[max];
            this->current = 0;
            stackCount++;
    }

    else{
            std::cout << "Maximum stack limit reached" << std::endl;
            exit(0);
    }
}

void MyStack::push(int element) {
    if (current >= max) {
        std::cout << "Error: Stack overflow" << std::endl;
        return;
    }
    data[current] = element;
    current++;
}

int MyStack::pop() {
    if (current <= 0) {
        std::cout << "Error: Stack underflow" << std::endl;
        return -1;
    }
    current--;
    int element = data[current];
    return element;
}

int MyStack::maxSize() {
    return max;
}

int MyStack::currentSize() {
    return current;
}

bool MyStack::isEmpty() {
    return current == 0;
}

void MyStack::display() {
    std::cout << "Stack: ";
    for (int i = current - 1; i >= 0; i--) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

MyStack operator + (MyStack const &obj1, MyStack const &obj2) {
    MyStack res(obj1.max + obj2.max);
    for (int i = 0; i < obj1.current; i++) {
        res.push(obj1.data[i]);
    }
    for (int i = 0; i < obj2.current; i++) {
        res.push(obj2.data[i]);
    }
    return res;
}

MyStack::~MyStack() {
    stackCount--;
    delete[] data;
}

int MyStack::stackCount = 0;

int main() {
    int size1, size2;
    std::cout << "Enter stack one size: ";
    std::cin >> size1;

    std::cout << "Enter stack two size: ";
    std::cin >> size2;

    MyStack aStackA(size1), aStackB(size2);

    std::cout << "Push " << size1 << " data into stack 1: ";
    for(int i = 0; i < size1; i++){
        int n;
        std::cin >> n;
        aStackA.push(n);
    }

    std::cout << "Push " << size2 << " data into stack 2: ";
    for(int i = 0; i < size2; i++){
        int n;
        std::cin >> n;
        aStackB.push(n);
    }

    std::cout << "Stack A: ";
    aStackA.display();
    std::cout << "Stack B: ";
    aStackB.display();
    MyStack aStackC = aStackA + aStackB;
    std::cout << "Stack C: ";
    aStackC.display();
}
