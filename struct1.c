#include <stdio.h>
#include <string.h>
typedef struct address
{
  int HouseNo;
  int block;
  char city[100];
  char state[100];
} adds;

void printadd(struct address adds);

int main()
{
  struct address adds[5];

  printf("enter info for no 1:");
  scanf("%d", &adds[0].HouseNo);
  scanf("%d", &adds[0].block);
  scanf("%s", adds[0].city);
  scanf("%s", adds[0].state);

  printf("enter info for no 2:");
  scanf("%d", &adds[1].HouseNo);
  scanf("%d", &adds[1].block);
  scanf("%s", adds[1].city);
  scanf("%s", adds[1].state);

  printf("enter info for no 3:");
  scanf("%d", &adds[2].HouseNo);
  scanf("%d", &adds[2].block);
  scanf("%s", adds[2].city);
  scanf("%s", adds[2].state);

  printf("enter info for no 4:");
  scanf("%d", &adds[3].HouseNo);
  scanf("%d", &adds[3].block);
  scanf("%s", adds[3].city);
  scanf("%s", adds[3].state);

  printf("enter info for no 5:");
  scanf("%d", &adds[4].HouseNo);
  scanf("%d", &adds[4].block);
  scanf("%s", adds[4].city);
  scanf("%s", adds[4].state);

  printadd(adds[0]);
  printadd(adds[1]);
  printadd(adds[2]);
  printadd(adds[3]);
  printadd(adds[4]);

  return 0;
}
void printadd(struct address adds)
{
  printf("address is : %d,%d,%s,%s\n", adds.HouseNo, adds.block, adds.city, adds.state);
}