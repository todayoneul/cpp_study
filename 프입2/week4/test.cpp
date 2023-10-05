#include <iostream>
#include <vector>
#include <random>

int main() {
    const int numStudents = 30;
    std::vector<int> scores(numStudents);
    std::vector<unsigned int> passBitmask((numStudents + 31) / 32, 0); // Bitmask for pass status

    // Seed the random number generator
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_int_distribution<int> distribution(0, 100);

    // Generate random scores for each student and set the corresponding bits in the bitmask
    for (int i = 0; i < numStudents; ++i) {
        scores[i] = distribution(generator);
        if (scores[i] >= 60) {
            // Set the corresponding bit to 1 if the score is >= 60
            passBitmask[i / 32] |= (1U << (i % 32));
        }
    }

    // Display whether each student passed or failed
    for (int i = 0; i < numStudents; ++i) {
        bool passed = (passBitmask[i / 32] & (1U << (i % 32))) != 0;
        std::cout << "Student #" << (i + 1) << ": " << scores[i] << std::endl;
        std::cout << "Student #" << (i + 1) << ": " << (passed ? "passed" : "failed") << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
