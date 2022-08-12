#include "Referee.h"

#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"

Referee::Referee() { 
  _result = 0; 
  }
char Referee::refGame(Human player1, Computer player2) {
    _human = player1.makeMove();
    _computer = player2.makeMove();
    std::cout<<_human<<std::endl;
    std::cout<<_computer<<std::endl;
    if (_human == 'R') {
      switch (_computer) {
        case 'R':
          _result = 'T';
          break;
        case 'S':
          _result = 'W';
          break;
        case 'P':
          _result = 'L';
          break;
        default:
          _result = 0;
          break;
      }
      return _result;
    }
    if (_human == 'P') {
      switch (_computer) {
        case 'P':
          _result = 'T';
          break;
        case 'R':
          _result = 'W';
          break;
        case 'S':
          _result = 'L';
          break;
        default:
          _result = 0;
          break;
      }
      return _result;
    }
    if (_human == 'S') {
      switch (_computer) {
        case 'S':
          _result = 'T';
          break;
        case 'P':
          _result = 'W';
          break;
        case 'R':
          _result = 'L';
          break;
        default:
          _result = 0;
          break;
      }
      return _result;
    }
  return _result;
}
Human::~Human(){}