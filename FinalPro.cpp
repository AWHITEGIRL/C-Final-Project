#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	//Variables
	ofstream saveIngredient;
	string ingredientName[25] = {" "};
	double ingredientAmnt[25] = {0};
	double change = 0.0;
	int x = 0;
	double result = 0.0;
	string fileName = "";
		
	//Prompt user
	cout << "Enter number ingredients in recipe: ";
	cin >> x;
	if (x > 25) {
		cout << "Must contain less than 25 ingredients! " << endl;
		cin >> x;
	}
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	while(x != -1){
	for (int num = 0; num < x; num ++) {
		cout << "Enter Ingredient Name (ex:White-flour_cup): ";
		cin >> ingredientName[num];
		cout << "Enter Ingredient Amount: ";
		cin >> ingredientAmnt[num];
	}
	cout << "Enter amount recipe needs to be modified(double = 2, half = .5): ";
	cin >> change;
	
	cout << "Enter name of file for new recipe (no spaces or special characters): ";
	cin >> fileName;
	saveIngredient.open(fileName + ".txt");
	
	if (saveIngredient.is_open() == false) {
		cout << "Unable to use file, please try again!" << endl;
			return 0;
		}
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		if (change != -1 && x < 25){
			for(int y = 0; y < x; y ++){
				result = change * ingredientAmnt[y];
				cout << ingredientName[y] << ": " << result << endl;
				saveIngredient << ingredientName[y] << ": " << result << endl;
				}
			}
		}
		
		saveIngredient.close();
		return 0;
		cout << "Enter number ingredients in recipe: ";
		cin >> x;
		if (x > 25) {
			cout << "Must contain less than 25 ingredients! " << endl;
			cin >> x;
		}
}