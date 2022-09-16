#include "main.h"
  
  
  
int _isupper(int c) {
      
if (c > 96 && c < 123)
{
return (0);
}
else if (c > 64 && c < 91)
{
return (1);
}
return (0);
}
