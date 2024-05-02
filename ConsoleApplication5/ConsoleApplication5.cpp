#include <iostream>
#include <deque>
#include <string>
#include "MyDeque.h"


int main() {
    MyDeque<int> integerQueue;
    MyDeque<std::string> stringQueue;
    int dataType;
    int command;
    int item_int;
    std::string item_str;

    while (true) {
        std::cout << "Enter data type (1: integer, 2: string, 3: print queues, 4: quit): ";
        std::cin >> dataType;
        if (std::cin.fail() || dataType < 1 || dataType > 4) {
            std::cin.clear(); // clear the error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore the rest of the line
            std::cout << "Invalid input. Please enter a number between 1 and 4.\n";
            continue;
        }
        if (dataType == 1 || dataType == 2) {
            std::cout << "Enter command (1: push_back, 2: push_front, 3: pop_back, 4: pop_front): ";
            std::cin >> command;
            if (std::cin.fail() || command < 1 || command > 4) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid command. Please enter a number between 1 and 4.\n";
                continue;
            }
            if (command == 1 || command == 2) {
                std::cout << "Enter item: ";
                if (dataType == 1) {
                    std::cin >> item_int;
                    if (std::cin.fail()) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "Invalid input. Please enter a number.\n";
                        continue;
                    }
                    if (command == 1) {
                        integerQueue.push_back(item_int);
                    }
                    else {
                        integerQueue.push_front(item_int);
                    }
                }
                else {
                    std::cin >> item_str;
                    if (command == 1) {
                        stringQueue.push_back(item_str);
                    }
                    else {
                        stringQueue.push_front(item_str);
                    }
                }
            }
            else if (command == 3) {
                if (dataType == 1) {
                    integerQueue.pop_back();
                }
                else {
                    stringQueue.pop_back();
                }
            }
            else if (command == 4) {
                if (dataType == 1) {
                    integerQueue.pop_front();
                }
                else {
                    stringQueue.pop_front();
                }
            }
            if (dataType == 1) {
                integerQueue.display();
            }
            else {
                stringQueue.display();
            }
        }
        else if (dataType == 3) {
            // Print both queues
            integerQueue.printIntegerQueue();
            stringQueue.printStringQueue();
        }
        else if (dataType == 4) {
            break;
        }
    }

    return 0;
}
