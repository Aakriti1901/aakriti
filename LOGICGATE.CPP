#include <iostream>

// Abstract base class for gates
class Gate {
public:
    virtual int compute(int input1, int input2) = 0;
};

// Derived classes for different gates

class ANDGate : public Gate {
public:
    int compute(int input1, int input2) override {
        return input1 && input2;
    }
};

class ORGate : public Gate {
public:
    int compute(int input1, int input2) override {
        return input1 || input2;
    }
};

class NOTGate : public Gate {
public:
    int compute(int input1, int input2) override {
        // Only input1 is used for NOT gate
        return !input1;
    }
};

class XORGate : public Gate {
public:
    int compute(int input1, int input2) override {
        return input1 ^ input2;
    }
};

class NANDGate : public Gate {
public:
    int compute(int input1, int input2) override {
        return !(input1 && input2);
    }
};

class NORGate : public Gate {
public:
    int compute(int input1, int input2) override {
        return !(input1 || input2);
    }
};

class XNORGate : public Gate {
public:
    int compute(int input1, int input2) override {
        return !(input1 ^ input2);
    }
};

int main() {
    int a[5] = { 1, 0, 1, 0, 1 };
    int b[5] = { 0, 1, 1, 0, 0 };

    ANDGate and_gate;
    ORGate or_gate;
    NOTGate not_gate;
    XORGate xor_gate;
    NANDGate nand_gate;
    NORGate nor_gate;
    XNORGate xnor_gate;

    std::cout << "Logic Gate Outputs:\n";

    // AND operation
    std::cout << "\nAND Operation:\n";
    for (int i = 0; i < 5; ++i) {
        int result = and_gate.compute(a[i], b[i]);
        std::cout << " " << a[i] << " AND " << b[i] << " = " << result << "\n";
    }

    // OR operation
    std::cout << "\nOR Operation:\n";
    for (int i = 0; i < 5; ++i) {
        int result = or_gate.compute(a[i], b[i]);
        std::cout << " " << a[i] << " OR " << b[i] << " = " << result << "\n";
    }

    // NOT operation
    std::cout << "\nNOT Operation:\n";
    for (int i = 0; i < 5; ++i) {
        int result = not_gate.compute(a[i], b[i]); // Using a[i] for NOT gate
        std::cout << " NOT " << a[i] << " = " << result << "\n";
    }

    // XOR operation
    std::cout << "\nXOR Operation:\n";
    for (int i = 0; i < 5; ++i) {
        int result = xor_gate.compute(a[i], b[i]);
        std::cout << " " << a[i] << " XOR " << b[i] << " = " << result << "\n";
    }

    // NAND operation
    std::cout << "\nNAND Operation:\n";
    for (int i = 0; i < 5; ++i) {
        int result = nand_gate.compute(a[i], b[i]);
        std::cout << " " << a[i] << " NAND " << b[i] << " = " << result << "\n";
    }

    // NOR operation
    std::cout << "\nNOR Operation:\n";
    for (int i = 0; i < 5; ++i) {
        int result = nor_gate.compute(a[i], b[i]);
        std::cout << " " << a[i] << " NOR " << b[i] << " = " << result << "\n";
    }

    // XNOR operation
    std::cout << "\nXNOR Operation:\n";
    for (int i = 0; i < 5; ++i) {
        int result = xnor_gate.compute(a[i], b[i]);
        std::cout << " " << a[i] << " XNOR " << b[i] << " = " << result << "\n";
    }

    return 0;
}
