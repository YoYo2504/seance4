#include <iostream>
#include <vector>
using namespace std;

int main(){
	//création du i
	int i=0;

	//création du tableau
	vector<int> tab(3);
	tab[0] = 3;
	tab[1] = 4;
	tab[2] = 5;

	//function push_back --> ajouter une ligne
	tab.push_back(1000);

	//Afficher le tableau
	//cout << tab[0] << " " << tab[1] << " " << tab[2] <<" "<< tab[3]<< endl;

	//Boucle pour afficher le tableau
	while (i!=tab.size())
	{
		cout << tab[i] << endl;
		i++;
	}

	//Afficher la taille du tableau
	cout << tab.size() << endl;

	//supprimer la dernière ligne
	tab.pop_back();
	cout << tab.size() << endl;
	return 0;
}
