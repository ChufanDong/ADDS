#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

Referee::Referee(){
    _result=0;
}
char Referee::refGame(Human  player1, Computer player2){
    if(player1.makeMove() == 'R'){
        switch (player2.makeMove())
        {
        case 'R':
            _result='T';
            break;
        case 'S':
            _result='W';
            break;
        case 'P':
            _result='L';
            break;
        default:
            _result=0;
            break;
        }
        return _result;
    }
    if(player1.makeMove() == 'P'){
        switch (player2.makeMove())
        {
        case 'P':
            _result='T';
            break;
        case 'R':
            _result='W';
            break;
        case 'S':
            _result='L';
            break;
        default:
            _result=0;
            break;
        }
        return _result;
    }
    if(player1.makeMove() == 'S'){
        switch (player2.makeMove())
        {
        case 'S':
            _result='T';
            break;
        case 'P':
            _result='W';
            break;
        case 'R':
            _result='L';
            break;
        default:
            _result=0;
            break;
        }
        return _result;
    }
    return _result;
}