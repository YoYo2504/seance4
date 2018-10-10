#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class etudiant{
	public:
	string name;
	int note;
};

int main(){
	vector <etudiant> etudiants;
	string tmp_name, recherche;
	int tmp_note;
	ofstream f_notes;
	f_notes.open("notes.txt");
	for (int i = 0; i<3;i++){
		cout << "Entrez le nom de l'étudiant "<<endl;
		cin >> tmp_name;
		cout << "Entrer la note de l'étudiant "<<endl;
		cin >> tmp_note;
		etudiants.push_back(etudiant());
		etudiants[i].name = tmp_name;
		etudiants[i].note =tmp_note;
		//Ecrire le nom et la note dans le fichier
		f_notes<<etudiants[i].name<<"                    "<<etudiants[i].note<<endl;
	}
	cout << "La liste des étudiants :" << endl;
	for(int i=0; i<etudiants.size(); i++){
		cout << etudiants[i].name <<"           " << etudiants[i].note<< endl;
	}

	cout << "Rechercher un étudiant :" << endl;
	cin >> recherche;

	int i =0;

	while(recherche != etudiants[i].name)
	{
		i++;
	}
	cout << "La note de l'étudiant est : " << etudiants[i].note<<endl;

	/*Correction :
	cout<<" rechercher un élève : " << endl;
	cin<<tpm_name;
	for (int i=0; i<etudiants.size(); i++){
		cout<< "La note de l'étudiant "<< etudiants[i].name<<" est " <<epsi[i].note<<endl;
	}
	*/

	/*Gérer la pertinance des notes
	ofstream fichier_notes;
	fichier_notes.open("files.txt");
	fichier_notes<<"EPSI";
	fichier_notes.close();*/

	return 0;
}
