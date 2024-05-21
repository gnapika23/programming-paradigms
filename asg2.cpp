#include <iostream>
using namespace std;

class MyStack {
    private:
        int *arr;
        int top;
        int max_size;
    public:
        MyStack(int maxSize) {
            max_size = maxSize;
            arr = new int[max_size];
            top = -1;
        }
        bool isEmpty() {
            return top == -1;
        }
        bool push(int data) {
            if (top >= max_size - 1) 
                return false;
            arr[++top] = data;
            return true;
        }
        int pop() {
            if (isEmpty()) {
                return -1;
            }
            return arr[top--];
        }
        int MaxSize() {
            return max_size;
        }
        int CurrentSize() {
            return top + 1;
        }
        void Display() {
            if(isEmpty()) {
                cout << "Stack is empty" << endl;
                return;
            }
            cout << endl;
            for (int i = CurrentSize() - 1; i >= 0; i--) {
                cout << arr[i] << endl;
            }
            return;
        }
        ~MyStack() {
            delete [] arr;
        }
};

int main() {
    int stack_size;
    
    cout << "Enter the size of the stack : ";
    cin >> stack_size;
    MyStack stack(stack_size);

    int switcher;
    while (true) {
        cout << "\nPress 0 to display all operations\n";
        cout << "\nEnter an operation: ";

        cin >> switcher;

        switch(switcher)
        {
            case 0:
                cout << "1. Push an Integer to the Stack"<<endl;
                cout << "2. Pop an Integer from the Stack"<<endl;
                cout << "3. Get Max Size of Stack"<<endl;
                cout << "4. Get Current Size of Stack"<<endl;
                cout << "5. Check if Stack is Empty"<<endl;
                cout << "6. Display the Stack contents"<<endl;
                cout << "7. Exit"<<endl;
                break;
            case 1:
            {
                cout << "\nEnter integer to be pushed to stack: ";
                int data;
                cin >> data;
                if (!stack.push(data)) {
                    cout << "Stack Overflow" << endl;
                }
                else {
                    cout << data << " successfully pushed to stack" << endl;
                }
                break;
            }
            case 2:
            {
                int popped = stack.pop();
                if (popped == -1) cout << "Stack Underflow" << endl;
                else {
                    cout << popped << " popped from Stack" << endl;
                }
                break;
            }
            case 3:
                cout << "Max size of stack is: " << stack.MaxSize() << endl;
                break;
            case 4:
                cout << "Current size of stack is: " << stack.CurrentSize() << endl;
                break;
            case 5:
                if(stack.isEmpty()) cout << "Stack is empty" << endl;
                else cout << "Stack isn't empty" << endl;
                break;
            case 6:
                stack.Display();
                break;
            case 7:
                stack.~MyStack();
                cout << "Deleted Stack" << endl << "Exiting..." << endl;
                exit(0);
                break;
 
        }
    }
}