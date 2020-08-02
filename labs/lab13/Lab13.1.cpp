#include <iostream>
#include <fstream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	ifstream fin;
	int temp = 0, b[100];
	fin.open("Test.txt");
	if(!fin.is_open()){
		cout << "Ошибка открытия файла";
	}else{
		string str;
		while(!fin.eof()){
			str = " ";
			getline(fin, str);
			cout << str << endl;
			b[temp] = str.length();
			temp++;
		}
	}
	for(int i = 0; i < temp; i++){
		cout << b[i] << ' ';
	}
	fin.close();
	return 0;
}

