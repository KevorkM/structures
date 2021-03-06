#ifndef __UTILS_H__
#define __UTILS_H__

enum CharacterCaseType {

	CC_UPPER_CLASS,
	CC_LOWER_CASE,
	CC_EITHER
};

char GetCharacter(const char* prompt, const char* error);
char GetCharacter(const char* prompt, const char* error, const char validInput[], int validInputLength, CharacterCaseType charCase);

void ClearScreen();
void WaitForKeyPress();

#endif