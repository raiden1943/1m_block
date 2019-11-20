#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main(void) {

	unordered_set<string> S;
	string host = "test.gilgil.net";
	S.insert(host);
	S.insert("baidu.com");
	S.insert("google.co.kr");
	if(S.find("google.com") != S.end()) cout << "google found";
	if(S.find("test.gilgil.net") != S.end()) cout << "gilgilg found";

	return 0;
}
