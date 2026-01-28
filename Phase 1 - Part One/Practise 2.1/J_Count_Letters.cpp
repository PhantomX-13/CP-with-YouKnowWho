#include<iostream>
#include <string.h>
using namespace std;

const int N = 1e7 + 9;
char s[N];
int main() {
  cin >> s;
  int len = strlen(s);

  // compute the frequencies of each char
  int frequency[26];
  // the frequency of ith lowercase char will be stored in frequency[i]
  // so frequency[0] will store the number of occurrences of 'a'
  // frequency[1] will store the number of occurrences of 'b'
  // ... frequency[25] will store the number of occurrences of 'z'
  // so we should declare the array of size 26
  // also we should initialize it with all 0s as initially each occurrence is 0
  for (int i = 0; i < 26; i++) {
    frequency[i] = 0;
  }

  // now traverse through each character of the string and add its occurrence
  for (int i = 0; i < len; i++) {
    int character_rank = s[i] - 'a'; // rank of 'a' = 0, rank of 'b' = 1, ...
    frequency[character_rank]++;
  }

  // now print the non-zero frequencies (we should also print letters in ascending order)
  for (char ch = 'a'; ch <= 'z'; ch++) {
    int character_rank = ch - 'a';
    if (frequency[character_rank] > 0) {
      cout << ch << " : " << frequency[character_rank] << '\n';
    }
  }
  return 0;
}