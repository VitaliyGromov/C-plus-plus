class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
};

class DerivedPublic : public Base {
public:
    void accessMembers() {
        publicVar = 10;       // Доступно
        protectedVar = 20;    // Доступно
        //privateVar = 30;    // Ошибка: privateVar недоступно
    }
};

class DerivedPrivate : private Base {
public:
    void accessMembers() {
        publicVar = 10;       // Доступно как private
        protectedVar = 20;    // Доступно как private
        //privateVar = 30;    // Ошибка: privateVar недоступно
    }
};

int main() {
    DerivedPublic objPublic;
    objPublic.publicVar = 5;  // Доступно
    //objPublic.protectedVar = 15; // Ошибка: protectedVar недоступно
    //objPublic.privateVar = 25; // Ошибка: privateVar недоступно

    DerivedPrivate objPrivate;
    //objPrivate.publicVar = 5; // Ошибка: publicVar доступно как private
    return 0;
}
