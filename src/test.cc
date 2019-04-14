#include<iostream> //standard header
#include<string>
#include<foo.h>

using namespace std;

/*
int main(int argc, char* argv[])
{

	cout<<"what is your name?";
	string name;
	cin >> name;

	string greeting = "hello " + name;

	const int pad_v = 1;
	const int pad_h = 2;
	const int rows = pad_v * 2 + 3;
	cout<<endl;
	
	int r = 0;
	while(r != rows){
		const string::size_type cols = greeting.size() + pad_h * 2 + 2;
		string::size_type c = 0;
		while(c != cols){
			if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1){
				cout<<"*";
				++c;
			}else{
				if(r == pad_v + 1 && c== pad_h + 1){
					cout<<greeting;
					c += greeting.size();
				}else{
					cout<<" ";
					++c;
				}
			}
		}
		cout<<endl;
		++r;
	}

	
	return 0;
}
*/

/*
int main(int argc, char* argv[])
{
	//cout<<"please enter row number: ";	
	const int rows = 13;
	//cin>>rows;
	
	//cout<<"please enter step number: ";
	const int step = 3;
	//cin>>step;
	
	int bottom_num = 1 + (rows - 1) * 2 * step;

	for(int i = 0; i<rows; i++){
		int star_num = 1 + i * 2 * step;
		int left_sp_num = (bottom_num - star_num) / 2;
		string line_str = string(left_sp_num,' ') + string(star_num,'*') + string(left_sp_num,' ');
		cout<<line_str<<endl;
	}

	for(int i = rows-1; i>=0; i--){
		int star_num = 1 + i * 2 * step;
		int left_sp_num = (bottom_num - star_num) / 2;
		string line_str = string(left_sp_num,' ') + string(star_num,'*') + string(left_sp_num,' ');
		cout<<line_str<<endl;
	}
	return 0;
}
*/








