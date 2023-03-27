#include <string>
#include <vector>
using namespace std;

int solution(vector<string> babbling) {
	// "aya", "ye", "woo", "ma"
	int answer = 0;
	vector<string> answerWord = { "aya", "ye", "woo", "ma" };
	for (int i = 0; i < babbling.size(); i++) {
		bool isA = false, isY = false, isW = false, isM = false;
		while (1) {
			if (!isA && babbling[i].find(answerWord[0]) == 0) {
				isA = true;
				babbling[i].erase(0, 3);
				continue;
			}
			if (!isY && babbling[i].find(answerWord[1]) == 0) {
				isY = true;
				babbling[i].erase(0, 2);
				continue;
			}
			if (!isW && babbling[i].find(answerWord[2]) == 0) {
				isW = true;
				babbling[i].erase(0, 3);
				continue;
			}
			if (!isM && babbling[i].find(answerWord[3]) == 0) {
				isM = true;
				babbling[i].erase(0, 2);
				continue;
			}
			break;
		}//end of while

		if (babbling[i].size() == 0) answer++;
	}//end of one case per i;
	return answer;
}

int main() {
	
	return 0;
}