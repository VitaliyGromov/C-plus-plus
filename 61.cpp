    class Base {
    public:
        Base() { // Конструктор по умолчанию
            // Инициализация данных-членов
        }
        Base(int value) { // Параметризованный конструктор
            // Инициализация данных-членов
        }
    };


    class Derived : public Base {
    public:
        Derived(int baseValue, int derivedValue) : Base(baseValue) { // Вызов конструктора Base(int)
            // Инициализация данных-членов Derived
        }
    };




// Вот деструктор со своим убогим синтаксисом 
    class Base {
    public:
        ~Base() { // Деструктор
            // Освобождение ресурсов
        }
    };


// Какой-то ебучий виртуальный деструктор 
    class Base {
    public:
        virtual ~Base() { // Виртуальный деструктор
            // Освобождение ресурсов
        }
    };

    class Derived : public Base {
    public:
        ~Derived() { // Деструктор
            // Освобождение ресурсов
        }
    };
