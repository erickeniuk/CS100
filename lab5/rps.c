#include <stdio.h>
#include <stdlib.h>

int getNumGames(void);
int findWinner(int, int);
void printResults(int, int, int);

//0 = rock, 1=paper, 2=scissors


int main (void) {

srand(0);
int games, p1move, p2move, ans;
int ties = 0, p1wins = 0, p2wins = 0;
games = getNumGames();
for (int a=0; a<games; a++) {
  p1move = rand() % 3;
  p2move = rand() % 3;
  ans = findWinner(p1move, p2move);
  if (ans == 0) ties++;
  if (ans == 1) p1wins++;
  if (ans == 2) p2wins++;
}
printResults(ties, p1wins, p2wins);
return 0;
}

int getNumGames(void) {
  int games;
  printf("How many games do you want to play? ");
  scanf("%d", &games);
  return games;
}

int findWinner(int p1move, int p2move) {
      int ans;
      if (p1move == p2move) ans = 0;
      else if ((p1move == 0) && (p2move == 1)) ans = 2;
      else if ((p1move == 0) && (p2move == 2)) ans = 1;
      else if ((p1move == 1) && (p2move == 0)) ans = 1;
      else if ((p1move == 1) && (p2move == 2)) ans = 2;
      else if ((p1move == 2) && (p2move == 0)) ans = 2;
      else if ((p1move == 2) && (p2move == 1)) ans = 1;
      return ans;

}
void printResults(int ties, int p1wins, int p2wins) {
    printf("There were %d ties, %d player one wins, %d player two wins\n", ties, p1wins, p2wins);
    return;
}
