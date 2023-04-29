#include <iostream>
#include <string>

using namespace std;

namespace first_NS {
    void foo() {
        cout << "Foo first" << endl;
    }
}

namespace second_NS {
    void foo() {
        cout << "Foo second" << endl;
    }
}

namespace third_NS {
    namespace second_NS {
        void foo() {
            cout << "Foo second" << endl;
        }
    }
}

using namespace second_NS;

int main() {
    first_NS::foo();
    foo();
    third_NS::second_NS::foo();
    return 0;
}