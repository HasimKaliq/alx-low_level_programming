#include "main.h"
  
  
  
int _isupper(int c) {
      if (c > 64 && c < 91){
        return (1);
    }
    else if (c > 96 && c < 123) {
        return (0);
    }
  return (0);
}

