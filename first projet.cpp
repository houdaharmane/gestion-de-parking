#include <iostream>
#include <iostream>
#include <cstring>

using namespace std;

const int MAX_AUTOMOBILES = 100;

// Déclaration de la structure automobile
struct automobil {
    char immatriculation[20];
    char marque[30];
    char modele[30];
    int anneeFabrication;
    char type_carburant[30];
};

// Fonction pour ajouter un nouveau automobile
void ajouterautomobiles(automobil automobiles[], int& nb_automobiles) {
    if (nb_automobiles < MAX_AUTOMOBILES ) {
        automobil T;
        cout << "Immatriculation : ";
        cin >> T.immatriculation;
        cout << "Marque : ";
        cin >> T.marque;
        cout << "Modele : ";
        cin >> T.modele;
        cout << "Annee de fabrication : ";
        cin >> T.anneeFabrication;
        cout << " type de carburant : ";
        cin >> T. type_carburant;
        automobiles[nb_automobiles] = T;
        nb_automobiles++;
    }
    else {
        cout << "Le nombre maximal de automobiles a ete atteint." << endl;
    }
}

// Fonction pour afficher tous les automobiles
void afficherautomobiles(automobil automobiles[], int nb_automobiles) {
    cout << "Liste des automobiles :" << endl;
    for (int i = 0; i < nb_automobiles; i++) {
        cout << "automobile" << i+1 << endl;
        cout << "Immatriculation : " << automobiles[i].immatriculation << endl;
        cout << "Marque : " << automobiles[i].marque << endl;
        cout << "Modele : " << automobiles[i].modele << endl;
        cout << "Annee de fabrication : " << automobiles[i].anneeFabrication << endl;
        cout << "type de carburant: " << automobiles[i].type_carburant << endl;
        cout << endl;
    }
}
    // Fonction pour supprimer un automobil existant
void supprimerautomobiles(automobil automobiles[], int& nb_automobiles) {
    char immatriculation[20];
    cout << "Immatriculation d automobil a supprimer : ";
    cin >> immatriculation;
    int i = 0;
    while (i < nb_automobiles&& strcmp(automobiles[i].immatriculation, immatriculation) != 0) {
        i++;
    }
    if (i < nb_automobiles) {
        for (int j = i; j < nb_automobiles-1; j++) {
            automobiles[j] = automobiles[j+1];
        }
        nb_automobiles--;
        cout << "l automobil supprime avec succes." << endl;
    }
    else {
        cout << "L automobil n'a pas ete trouve." << endl;
    }
}
    // Fonction pour rechercher un automobil par son immatriculation
void rechercherautomobiles(automobil automobiles[], int nb_automobiles) {
    char immatriculation[20];
    cout << "Immatriculation d automobile a rechercher : ";
    cin >> immatriculation;
    int i = 0;
    while (i < nb_automobiles && strcmp(automobiles[i].immatriculation, immatriculation) != 0) {
        i++;
    }
    if (i < nb_automobiles) {
        cout << "automobil trouve :" << endl;
        cout << "Immatriculation : " << automobiles[i].immatriculation << endl;
        cout << "Marque : " << automobiles[i].marque << endl;
        cout << "Modele : " << automobiles[i].modele << endl;
        cout << "Annee de fabrication : " << automobiles[i].anneeFabrication << endl;
        cout << "type de carburant : " << automobiles[i].type_carburant << endl;
        cout << endl;
}
}
// Fonction pour afficher le menu
void afficherMenu() {
    cout << "Menu :" << endl;
    cout << "1. Ajouter un automobile" << endl;
    cout << "2. Afficher tous les automobiles" << endl;
    cout << "3. Supprimer un automobile" << endl;
    cout << "4. Rechercher un automobile" << endl;
    cout << "5. Quitter" << endl;
    cout << "Votre choix : ";
}
const int MAX= 100;
class Conducteur {
public:
    // Constructeur par défaut
    Conducteur() {
        nom = "";
        prenom = "";
        adresse = "";
        telephone = "";
    }
      // Constructeur avec paramètres
    Conducteur(string n, string p, string a, string t) {
        nom = n;
        prenom = p;
        adresse = a;
        telephone = t;
    }

    // Méthode pour afficher les informations du conducteur
    void afficher() {
        cout << "Nom : " << nom << endl;
        cout << "Prénom : " << prenom << endl;
        cout << "Adresse : " << adresse << endl;
        cout << "Téléphone : " << telephone << endl;
    }

    // Méthode pour saisir de nouvelles informations pour le conducteur
    void saisir() {
        cout << "Nom : ";
        cin >> nom;
        cout << "Prénom : ";
        cin >> prenom;
        cout << "Adresse : ";
        cin >> adresse;
        cout << "Téléphone : ";
        cin >> telephone;
    }

private:
    string nom;
    string prenom;
    string adresse;
    string telephone;
};
class Mission {
private:
    static const int MAX_MISSIONS = 100;
    int nbMissions;
    int dateDebut[MAX_MISSIONS];
    int dateFin[MAX_MISSIONS];
    char lieuDepart[MAX_MISSIONS];
    char lieuArrivee[MAX_MISSIONS];
    float distance[MAX_MISSIONS];
    automobil* automobilAffecte[MAX_MISSIONS];
    Conducteur* conducteurAffecte[MAX_MISSIONS];

public:
    Mission() {
        nbMissions = 0;
    }

    void ajouterMission(int dateDebut, int dateFin, char lieuDepart, char lieuArrivee, float distance, automobil* automobilAffecte, Conducteur* conducteurAffecte) {
        if (nbMissions < MAX_MISSIONS) {
            this->dateDebut[nbMissions] = dateDebut;
            this->dateFin[nbMissions] = dateFin;
            this->lieuDepart[nbMissions] = lieuDepart;
            this->lieuArrivee[nbMissions] = lieuArrivee;
            this->distance[nbMissions] = distance;
            this->automobilAffecte[nbMissions] = automobilAffecte;
            this->conducteurAffecte[nbMissions] = conducteurAffecte;
            nbMissions++;
        } else {
            cout << "Erreur : impossible d'ajouter une mission car le nombre maximum de missions a été atteint." << endl;
        }
    }

    void supprimerMission(int x) {
        if (x >= 0 && x < nbMissions) {
           
            for (int i = x; i < nbMissions - 1; i++) {
                dateDebut[i] = dateDebut[i + 1];
                dateFin[i] = dateFin[i + 1];
                lieuDepart[i] = lieuDepart[i + 1];
                lieuArrivee[i] = lieuArrivee[i + 1];
                distance[i] = distance[i + 1];
                automobilAffecte[i] = automobilAffecte[i + 1];
                conducteurAffecte[i] = conducteurAffecte[i + 1];
            }
            nbMissions--;
        } else {
            cout << "Erreur : impossible de supprimer la mission car l'indice fourni est invalide." << endl;
        }
    }

    void rechercherMissionParLieu(char lieu) {
        bool found = false;
        for (int i = 0; i < nbMissions; i++) {
            if (lieuDepart[i] == lieu || lieuArrivee[i] == lieu) {
                cout << "Mission " << i + 1 << " : " << lieuDepart[i] << " -> " << lieuArrivee[i] << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "Aucune mission n'a été trouvée pour le lieu spécifié." << endl;
        }
    }

    void afficherToutesMissions() {
        for (int i = 0; i < nbMissions; i++) {
            cout << "Mission " << i + 1 << " : " << lieuDepart[i];
      }
    }
    void menuprincipal(){
        cout << "Menu principal :" << endl;
        cout << "1. Ajouter une mission" << endl;
        cout << "2. Supprimer une mission" << endl;
        cout << "3. Rechercher une mission par lieu de départ ou d'arrivée" << endl;
        cout << "4. Afficher toutes les missions" << endl;
        cout << "5. Quitter" << endl;
        cout << "Votre Choix : ";
}
};

int main() {
    automobil automobiles[MAX_AUTOMOBILES];
    int nb_automobiles = 0;
    int choix;

    do {
        afficherMenu();
        cin >> choix;

        switch (choix) {
            case 1:
               ajouterautomobiles(automobiles, nb_automobiles);
                break;
            case 2:
                afficherautomobiles(automobiles, nb_automobiles);
                break;
            case 3:
                supprimerautomobiles(automobiles, nb_automobiles);
                break;
            case 4:
                rechercherautomobiles(automobiles, nb_automobiles);
                break;
            case 5:
                cout << "Au revoir !" << endl;
                break;
            default:
                cout << "Choix invalide." << endl;
                break;
       
        }
    } while (choix != 5);
    Conducteur conducteurs[MAX]; // Tableau de conducteurs
    int nb_Conducteurs = 0; // Nombre de conducteurs dans le tableau

    // Boucle pour ajouter des conducteurs
    while (nb_Conducteurs < MAX) {
       cout << "Ajouter un conducteur ? (OK/N) ";
        char reponse;
        cin >> reponse;

   if (reponse == 'OK' || reponse == 'o') {
            cout << "Saisir les informations du conducteur :" << endl;
            conducteurs[nb_Conducteurs].saisir();
            nb_Conducteurs++;
        } else {
            break;
        }
    }

    // Boucle pour afficher les conducteurs
    for (int i = 0; i < nb_Conducteurs; i++) {
        cout << "Informations du conducteur " << i+1 << " :" << endl;
        conducteurs[i].afficher();
        cout << endl;
    }
    Mission mission;

    do {
      

        switch (choix) {
            case 1: {
               
                int dateDebut, dateFin;
               char lieuDepart, lieuArrivee;
                float distance;
                automobil* automobilAffecte;
                Conducteur* conducteurAffecte;
                mission.ajouterMission(dateDebut, dateFin, lieuDepart, lieuArrivee, distance, automobilAffecte, conducteurAffecte);
                break;
            }
            case 2: {
               
                int x;

           
                mission.supprimerMission(x);
                break;
            }
            case 3: {
               
                char lieu;
                mission.rechercherMissionParLieu(lieu);
                break;
            }
            case 4:
               
                mission.afficherToutesMissions();
                break;
            case 5:
                cout << "Au revoir !" << endl;
                break;
            default:
                cout << "Choix invalide." << endl;
        }
    } while (choix != 5);

    return 0;
}

