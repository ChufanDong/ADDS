#ifndef _HUMAN_H
#define _HUMAN_H

class Human{
    private:
    char _choice=0;
    public:
    Human(); // constructor
    char makeMove();
    ~Human();
};
#endif