#ifndef _HUMAN_H
#define _HUMAN_H

class Human{
    private:
    char _choice;
    public:
    Human(); // constructor
    char makeMove();
    ~Human();
};
#endif