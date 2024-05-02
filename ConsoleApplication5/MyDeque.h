template <typename T>
class MyDeque {
private:
    std::deque<T> dq;
public:
    void push_back(T item) {
        dq.push_back(item);
    }
    void push_front(T item) {
        dq.push_front(item);
    }
    void pop_back() {
        if (!dq.empty()) {
            dq.pop_back();
        }
        else {
            std::cout << "Deque is empty.\n";
        }
    }
    void pop_front() {
        if (!dq.empty()) {
            dq.pop_front();
        }
        else {
            std::cout << "Deque is empty.\n";
        }
    }
    void display() {
        if (!dq.empty()) {
            std::cout << "Deque: ";
            for (const auto& item : dq) {
                std::cout << item << " ";
            }
            std::cout << "\n";
        }
        else {
            std::cout << "Deque is empty.\n";
        }
    }

    // Function to print the integer queue
    void printIntegerQueue() {
        std::cout << "Integer Queue: ";
        for (const auto& item : dq) {
            std::cout << item << " ";
        }
        std::cout << "\n";
    }

    // Function to print the string queue
    void printStringQueue() {
        std::cout << "String Queue: ";
        for (const auto& item : dq) {
            std::cout << item << " ";
        }
        std::cout << "\n";
    }
};