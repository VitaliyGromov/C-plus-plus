#include <iostream>
#include <string>

class BankAccount {
private:
    std::string ownerName; // Приватная переменная: имя владельца
    double balance;        // Приватная переменная: баланс счета

public:
    // Конструктор для инициализации данных
    BankAccount(const std::string& name, double initialBalance) {
        ownerName = name;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            std::cout << "Ошибка: начальный баланс не может быть отрицательным!" << std::endl;
        }
    }

    // Геттер для получения имени владельца
    std::string getOwnerName() const {
        return ownerName;
    }

    // Геттер для получения баланса
    double getBalance() const {
        return balance;
    }

    // Сеттер для внесения денег
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Внесено: " << amount << ". Новый баланс: " << balance << std::endl;
        } else {
            std::cout << "Ошибка: сумма для внесения должна быть положительной!" << std::endl;
        }
    }

    // Сеттер для снятия денег
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Снято: " << amount << ". Новый баланс: " << balance << std::endl;
        } else {
            std::cout << "Ошибка: недостаточно средств или неверная сумма!" << std::endl;
        }
    }
};

int main() {
    // Создаем объект класса BankAccount
    BankAccount account("Иван Иванов", 1000.0);

    // Проверяем начальные данные
    std::cout << "Владелец: " << account.getOwnerName() << std::endl;
    std::cout << "Баланс: " << account.getBalance() << std::endl;

    // Проводим операции
    account.deposit(500.0);   // Вносим 500
    account.withdraw(200.0);  // Снимаем 200
    account.withdraw(2000.0); // Пробуем снять больше, чем есть

    // Проверяем конечный баланс
    std::cout << "Итоговый баланс: " << account.getBalance() << std::endl;

    // Ошибка: попытка прямого доступа к приватным данным
    // account.balance = -100; // Ошибка компиляции: balance недоступен

    return 0;
}
