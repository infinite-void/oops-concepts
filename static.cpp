#include <iostream>
#include <string>
class Character {
    public:
        static int count;

    private:
        std::string name = "";
        

    public:
        void assign(std::string name) {
            this->name = name;
            count++;
        }
        
       
    private:
};

int Character::count;
static int countChar()
{
    return Character::count;
}

int main() {
    Character::count = 0;
    Character sam;
    sam.assign("sam");
    std::cout << countChar() << std::endl;
    return 0;
}