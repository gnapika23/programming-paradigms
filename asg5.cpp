#include <iostream>
using namespace std;

class Node {
    public:
        int coef;
        int exp;
        Node *next;

        Node(int coef, int exp) {
            this->coef = coef;
            this->exp = exp;
            this->next = NULL;
        }
};

class LL {
    public:
        Node *head;
        LL() {
            head = NULL;
        }
        void addTerm(int coef, int exp) {
            Node *newTerm = new Node(coef, exp);
            if (head == NULL) {
                head = newTerm;
                return;
            }
            Node *current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newTerm;
        }
};


LL addPolynomials(LL first, LL second) {
    LL result;

    Node *firstNode = first.head;
    Node *secondNode = second.head;

    while (firstNode != NULL && secondNode != NULL) {
        if (firstNode->exp > secondNode->exp) {
            result.addTerm(firstNode->coef, firstNode->exp);
            firstNode = firstNode->next;
        } 
        else if (firstNode->exp < secondNode->exp) {
            result.addTerm(secondNode->coef, secondNode->exp);
            secondNode = secondNode->next;
        } 
        else {
            result.addTerm(firstNode->coef + secondNode->coef, firstNode->exp);
            firstNode = firstNode->next;
            secondNode = secondNode->next;
        }
    }

    while (firstNode != NULL) {
        result.addTerm(firstNode->coef, firstNode->exp);
        firstNode = firstNode->next;
    }

    while (secondNode != NULL) {
        result.addTerm(secondNode->coef, secondNode->exp);
        secondNode = secondNode->next;
    }
    return result;
}

int main() {
    LL first;
    LL second;
    int coeff, exp;
    while(true) {
        cout << "For first polynomial (Enter 0 for coeff to break):" << endl;
        cout << "Enter coef: ";
        cin >> coeff;
        if (coeff == 0) break;
        cout << "Enter exp: ";
        cin >> exp;
        first.addTerm(coeff, exp);
    }
    cout << endl;
    while(true) {
        cout << "For second polynomial (Enter 0 for coeff to break):" << endl;
        cout << "Enter coef: ";
        cin >> coeff;
        if (coeff == 0) break;
        cout << "Enter exp: ";
        cin >> exp;
        second.addTerm(coeff, exp);
    }

    Node *current = first.head;
    cout << "First polynomial: ";
    while (current->next != NULL) {
        cout << current->coef << "x^" << current->exp << " + ";
        current = current->next;
    }
    cout << current->coef << "x^" << current->exp << "\n";

    current = second.head;
    cout << "Second polynomial: ";
    while (current->next != NULL) {
        cout << current->coef << "x^" << current->exp << " + ";
        current = current->next;
    }
    cout << current->coef << "x^" << current->exp << "\n";

    LL result = addPolynomials(first, second);

    current = result.head;
    cout << "Result: ";
    while (current->next != NULL) {
        cout << current->coef << "x^" << current->exp << " + ";
        current = current->next;
    }
    cout << current->coef << "x^" << current->exp << "\n";

    return 0;
}