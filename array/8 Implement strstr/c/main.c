#include <stdio.h>
#include <string.h>


int myStrStr(char *s, char *x) {

	int count = 0;
	int startindex = -1;

	if (strlen(s) < strlen(x)) {
		return 0;
	}

	for (int i = 0; i < strlen(s); i++) {

		if(s[i] == x[count]) {
			if (startindex == -1) {
				startindex = i;
			}
			if (count == (strlen(x) - 1)) {
				return startindex;
			}
			count++;
		} else {
			count = 0;
			startindex = -1;
		}

	}

	return 0;
}

int main() {

	char *str1 = "GeeksForGeeks";
	char *str2 = "Fr";

	int index = myStrStr(str1, str2);

	if (index) {
		printf("Str found at index %d.", index);
	} else {
		printf("Str not found.");
	}

	return 0;
}