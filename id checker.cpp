#include <iostream>

using namespace std;

int main() 
{
	char idChar;
	cout << "請輸入身分證第1碼:";
	cin >> idChar;
	switch (idChar) {
		case 'A':
		case 'a':
			idChar = 10;
			break;
		case 'B':
		case 'b':
			idChar = 11;
			break;
		case 'C':
		case 'c':
			idChar = 12;
			break;
		case 'D':
		case 'd':
			idChar = 13;
			break;
		case 'E':
		case 'e':
			idChar = 14;
			break;
		case 'F':
		case 'f':
			idChar = 15;
			break;
		case 'G':
		case 'g':
			idChar = 16;
			break;
		case 'H':
		case 'h':
			idChar = 17;
			break;
		case 'I':
		case 'i':
			idChar = 34;
			break;
		case 'J':
		case 'j':
			idChar = 18;
			break;
		case 'K':
		case 'k':
			idChar = 19;
			break;
		case 'L':
		case 'l':
			idChar = 20;
			break;
		case 'M':
		case 'm':
			idChar = 21;
			break;
		case 'N':
		case 'n':
			idChar = 22;
			break;
		case 'O':
		case 'o':
			idChar = 35;
			break;
		case 'P':
		case 'p':
			idChar = 23;
			break;
		case 'Q':
		case 'q':
			idChar = 24;
			break;
		case 'R':
		case 'r':
			idChar = 25;
			break;
		case 'S':
		case 's':
			idChar = 26;
			break;
		case 'T':
		case 't':
			idChar = 27;
			break;
		case 'U':
		case 'u':
			idChar = 28;
			break;
		case 'V':
		case 'v':
			idChar = 29;
			break;
		case 'W':
		case 'w':
			idChar = 32;
			break;
		case 'X':
		case 'x':
			idChar = 30;
			break;
		case 'Y':
		case 'y':	
			idChar = 31;
			break;
		case 'Z':
		case 'z':	
			idChar = 33;
			break;
	}
	
	int idNum[9];
	for (int i = 0; i < 9; i++) {
		cout << "請輸入身分證第" << i+2 << "碼:";
		cin >> idNum[i];
	}

	int checkNum = 0;
	checkNum = 10-(((int)idChar%10)*9+(int)idChar/10+idNum[0]*8+idNum[1]*7+idNum[2]*6+idNum[3]*5+idNum[4]*4+idNum[5]*3+idNum[6]*2+idNum[7])%10;
	
	if (idNum[0] > 2 || idNum[0] < 1) {
		cout << "這是假的!抓起來!";
	} else if (idNum[8] != checkNum) {
		cout << "這是假的!抓起來!";
	} else {
		cout << "這是真的，認證成功~";
	}
	
}