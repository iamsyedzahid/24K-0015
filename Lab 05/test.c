#include <stdio.h>
int main() {

	char encrypted, decrypted;
	char key;
	
	printf("Enter a character: ");
	scanf(" %c", &key);  

		encrypted = key>>1;
	
		decrypted = key;
	printf("decrypted character was: %c\n", key);
	printf("encrypted character is: %d\n", encrypted);

return 0;
}
