#include <iostream>
#include <string>

using namespace std;

template<typename T>
class List {
public:
    List();
    ~List();

    void push_back(T data);
    void pop_front();
    void clear();

    int getSize() {
        return size;
    }

    T& operator[](const int index);

private:
    template<typename T>
    class Node {

    public:
        Node *pNext;
        T data;

        Node(T data=T(), Node *pNext=nullptr) {
            this->data = data;
            this->pNext = pNext;
        }
    };

    int size;
    Node<T> *head;
};

template<typename T>
List<T>::List() {
    size = 0;
    head = nullptr;
}

template<typename T>
List<T>::~List() {
    clear();
}

template<typename T>
void List<T>::push_back(T data) {
    if (head == nullptr) {
        head = new Node<T>(data);
    }
    else {
        Node<T> *current = this->head;

        while (current->pNext != nullptr) {
            current = current->pNext;
        }

        current->pNext = new Node<T>(data);

    }

    size++;
}

template<typename T>
void List<T>::pop_front() {
    // save head in another variable
    Node<T> *temp = head;
    head = head->pNext;

    delete temp;

    size--;
}

template<typename T>
void List<T>::clear() {
    while (size) {
        pop_front();
    }
}

template<typename T>
T & List<T>::operator[](const int index) {
    int counter = 0;
    Node<T> *current = this->head;

    while (current != nullptr) {
        if (counter == index) {
            return current->data;
        }
        else {
            current = current->pNext;
            counter++;
        }
    }
}

int main() {
    List<int> lst;

    lst.push_back(5);
    lst.push_back(10);
    lst.push_back(22);

    int size = lst.getSize();

    cout << size << endl;
    cout << lst[2] << endl;
    cout << "" << endl;

    for (int i = 0; i < lst.getSize(); i++) {
        cout << lst[i] << endl;
    }

    cout << "\n\n";

    cout << "Number of elements in list: " << lst.getSize() << "\n\n";
    cout << "Start deleting an element" << endl;

    lst.pop_front();

    cout << "Complete deleting of elements" << "\n\n";
    cout << "Number of elements in list: " << lst.getSize() << "\n\n";

    cout << "Start deleting all elements" << endl;
    lst.clear();
    cout << "Number of elements in list: " << lst.getSize() << "\n\n";


    return 0;
}