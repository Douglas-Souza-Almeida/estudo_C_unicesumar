#include <stdio.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL,"");
  int num, tell, even, odd, bigger, smaller;
  float sum;
  printf("Informe um número: ");
  scanf("%d",&num);
  tell = 0;
  sum = 0;
  even = 0;
  odd = 0;
  smaller = num;
  bigger = num;
  while(num != 0){
      tell++;
      sum = sum + num;
      if(num % 2 == 0){
          even++;
      }else{
          odd++;
      }
      if(num > bigger){
          bigger = num;
      }else{
        if(num < smaller){
          smaller = num;
        }
      }
        printf("Informe outro número: ");
        scanf("%d",&num);
  }
printf("\nA soma dos números digitados é: %.2f", sum);
printf("\nO total de números pares digitados foi de: %d", even);
printf("\nO total de números ímpares digitados foi de: %d", odd);
printf("\nA média dos números digitado é de: %.2f", sum/tell);
printf("\nO total de números válidos digitados foi: %d", tell);
printf("\nO maior número digitado foi: %d", bigger);
printf("\nO menor número digitado foi: %d", smaller);

return 0;
}
