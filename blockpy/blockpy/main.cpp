#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

bool detect(string st) {
	bool ret = true;
	for (char a:st) {
		ret &= (a == '+' || a == '|' || a == '-' || a == ' ');
	}
	return !ret;
}

string tabs(string st) {
	string stt;
	string tabss;
	int i;
	for (i = 0; ;){
		if (st[i] != '|') {
			stt = st.substr(i);
			break;
		}
		i += 2;
	}
	for (int j = 0; j < (i)/2 - 1; j++) {
		tabss.push_back('\t');
	}
	tabss += stt;
	return tabss;
}

int main(int argc, char **argv) {
	//cout << tabs("| | | print(\"hello, world!\")") << endl;
	string flname(argv[1]);
	//string flname("game.bpy");
	string dotpy(".py");
	
	fstream rpy(flname);
	flname += dotpy;
	FILE* wpy;
	wpy = fopen(flname.c_str(), "w");

	string reader;
	while (getline(rpy, reader)) {
		if (detect(reader)) {
			fprintf(wpy, "%s\n", tabs(reader.substr(0, reader.length() - 1)).c_str());
		}
	}
	fclose(wpy);
	string query("python ");
	query += "./";
	query += flname;
	system(query.c_str());
	return 0;
}