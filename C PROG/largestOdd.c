#include <stdio.h>
#include <string.h>

int main() {
  int n;
  printf("enter the no of string\n");
  scanf("%d", &n);
  char word[100];
  char highest_word[100] = "";
  char input_str[100] = "";
  int high_len = 0;
  for (int i = 0; i < n; i++) {
    scanf("%s", word);
    int wordlen = strlen(word);
    if (wordlen % 2 != 0 && wordlen > high_len) {
      high_len = wordlen;
      strcpy(highest_word, word);
    }
  }

  if (high_len == 0) {
    printf("Better luck next time\n");
  } else {
    printf("guess the word:\n");
    scanf("%s", input_str);
    if (strcmp(input_str, highest_word) == 0) {
      printf("congratulations\n");
    } else {
      printf("try again\n");
    }
  }
}
