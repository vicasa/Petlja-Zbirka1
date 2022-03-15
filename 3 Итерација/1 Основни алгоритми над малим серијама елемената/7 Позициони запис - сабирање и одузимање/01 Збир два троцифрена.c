#include <stdio.h>

int main() {
  
  unsigned stotina, desetica, jedinica, c;
  
  scanf("%u %u %u", &stotina, &desetica, &jedinica);
  
  scanf("%u", &c);
  stotina += c; 
  
  scanf("%u", &c);
  desetica += c; 
  
  scanf("%u", &c);
  jedinica += c; 
  
  desetica += jedinica/10;
  stotina += desetica/10;
  
  printf("%u%u%u \n", stotina, desetica%10, jedinica%10);
  
}
