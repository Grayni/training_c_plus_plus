#include <iostream>
#include <string>
#include <memory>

/*
 * auto_ptr
 * unique_ptr
 * shared_ptr
 */

using namespace std;

template<typename T>
class SmartPointer {
public:
    SmartPointer(T* ptr) {
        this->ptr = ptr;
        cout << "constructor" << endl;
    }

    ~SmartPointer() {
        delete ptr;
        cout << "destructor" << endl;
    }

    T& operator*() {
        return *ptr;
    }

private:
    T* ptr;
};

int main() {
    //SmartPointer<int> sp1 = new int(5);
    //cout << *sp1 << endl;

    //SmartPointer<int> sp2 = sp1;
    //cout << *sp2 << endl; // error

    auto_ptr<int> ap1(new int(25));
    auto_ptr<int> ap2(ap1);
    //cout << *ap1 << endl;
    //cout << *ap2 << endl; // error

    unique_ptr<int> up1(new int(17));
    //unique_ptr<int> up2(up1); // error
    unique_ptr<int> up2;

    up2 = move(up1);
    cout << "up1 " << up1 << ": empty" << endl;
    cout << "up2 " << up2 << ": " << *up2 << endl;
    //cout << *up2 << endl;

    up1.swap(up2);
    cout << "up1 " << up1 << ": " << *up1 << endl;
    cout << "up2 " << up2 << ": empty" << endl;

    // get pointer
    int* p = up1.get();

    // clear p2
    //unique_ptr<int> p2(p);
    //p2.release();

    //clear p & p1
    //unique_ptr<int> p1(p);
    //p1.reset();

    shared_ptr<int> shp1(new int(12));
    shared_ptr<int> shp2(shp1);

    cout << *shp1 << endl;
    cout << *shp2 << endl;

    return 0;
}