#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 1001;
	char oneDim[SIZE]; //declaring input string
	cin.getline(oneDim, SIZE); // inserting string into a one dimensional array

	char twoDim[30][20];

	int k = 0, i;
	for (i = 0; i < 30; i++) {
		for (int j = 0; j < 20; j++)
		{
			if (oneDim[k] == ' ') {
				twoDim[i][j] = '\0';
				k++;
				break;
			}
			twoDim[i][j] = oneDim[k];// moving one dimensional characters into the two dimensional array

			if (oneDim[k] == '\0')
				goto exit;
			k++;
		}
	}
exit:

	for (int a = i; a >= 0; a--)
	{
		cout << twoDim[a] << ' ';
	}

	return 0;
	/*for (int i = 0; i < 20; i++) {
		for (int j = 0; j < k; j++) {
			cout << twoDim[i][j];
		}
	}*/
}
