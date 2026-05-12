#include <iostream>
#include <random> // Random сан

int main() {
    // 1. Төхөөрөмжөөс "Seed" буюу эхлэлийн утга авах
    std::random_device rd; 
    
    // 2. Mersenne Twister хөдөлгүүрийг эхлүүлэх
    std::mt19937 gen(rd()); 

    // 3. Тооны хязгаарыг зааж өгөх (Жишээ нь: 1-ээс 100-ийн хооронд)
    std::uniform_int_distribution<> dis(1, 100);

    // 4. Санамсаргүй тоо гаргаж авах
    int random_num = dis(gen);

    std::cout << "Random number: " << random_num << std::endl;

    return 0;
}