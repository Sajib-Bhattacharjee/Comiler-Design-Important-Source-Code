#include <stdio.h>
int main() {

  char arr[150];
  int vowels, consonant, digit, space,special__character;

  // initialize all variables to 0
  vowels = consonant = digit = space = special__character = 0;

  // get full line of string input
  printf("Ent;er a line of string: ");
  //fflush(stdin);
  gets(arr);

  //int sizeofArray = sizeof(arr);
  //arr[i] != '\0'
  // loop through each character of the string
  for (int i = 0; arr[i] != '\0' ; ++i) {

    // convert character to lowercase
    arr[i] = tolower(arr[i]);

    // check if the character is a vowel
    if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
        arr[i] == 'o' || arr[i] == 'u') {

      // increment value of vowels by 1
      ++vowels;
    }

    // if it is not a vowel and if it is an alphabet, it is a consonant
    else if ((arr[i] >= 'a' && arr[i] <= 'z')) {
      ++consonant;
    }

    // check if the character is a digit
    else if (arr[i] >= '0' && arr[i] <= '9') {
      ++digit;
    }

    // check if the character is an empty space
    else if (arr[i] == ' ') {
      ++space;
    }

    else
    {
        ++ special__character;

    }
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWhite spaces: %d", space);
  printf("\nSpecial Character: %d", special__character);
  return 0;
}
