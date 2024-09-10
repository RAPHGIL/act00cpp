# act00cpp

# Projet Présentation de Stage

## Description

Le projet **Présentation de Stage** est une application en C++ permettant de créer et de gérer des objets représentant des entreprises et des missions. Il utilise les principes de la programmation orientée objet (POO) pour encapsuler les données et les comportements des entreprises et des missions. Ce projet est conçu pour être utilisé dans le cadre de la gestion de stages ou de projets au sein d'une organisation, où chaque entreprise et mission possède ses propres caractéristiques (nom, ville, description de mission, etc.).

## Fonctionnalités

- **Classe `Entreprise` :**
  - Représente une entreprise avec des attributs tels que le nom de l'entreprise et la ville.
  - Constructeur par défaut et constructeur paramétré pour initialiser les objets.
  - Supporte la copie et l'affectation d'objets `Entreprise` à l'aide d'un constructeur de copie et d'un opérateur d'affectation.
  - Accesseurs et mutateurs pour obtenir et modifier les attributs de l'entreprise (`getNomEntreprise`, `setNomEntreprise`, `getVilleEntreprise`, `setVilleEntreprise`).

- **Classe `Mission` :**
  - Représente une mission avec des attributs comme le nombre de personnes, la description de la mission, et le nombre d'heures.
  - Fournit des méthodes pour manipuler les détails de la mission et gérer l'affectation des ressources.

## Installation

Pour compiler et exécuter ce projet, vous devez disposer d'un compilateur C++ (par exemple, `g++` pour GCC) et d'un environnement de développement C++ configuré sur votre machine.

### Étapes d'installation

1. **Cloner le dépôt :**
   ```bash
   git clone https://github.com/votre-utilisateur/projet-presentation-stage.git
   cd projet-presentation-stage
Compiler le projet :

bash
Copier le code
g++ -o presentation-stage main.cpp Entreprise.cpp Mission.cpp
Exécuter le projet :

bash
Copier le code
./presentation-stage
Utilisation
L'exécution du programme affichera les différentes étapes de création, modification, copie et affectation des objets Entreprise. Exemple de sortie attendue :

text
Copier le code
Entreprise initiale : SBV, Bignan
Entreprise après modification : SBV - Nouvelle, Nouveau Bignan
Copie de l'entreprise : SBV - Nouvelle, Nouveau Bignan
Entreprise après affectation : SBV - Nouvelle, Nouveau Bignan
Destruction de l'entreprise SBV - Nouvelle située à Nouveau Bignan
Destruction de l'entreprise SBV - Nouvelle située à Nouveau Bignan
Destruction de l'entreprise SBV - Nouvelle située à Nouveau Bignan
Structure du Projet
main.cpp : Point d'entrée du programme qui crée et manipule des objets Entreprise.
Entreprise.h et Entreprise.cpp : Définition et implémentation de la classe Entreprise.
Mission.h et Mission.cpp : Définition et implémentation de la classe Mission.
Auteurs
Pierre : Développement et conception du projet.
Raphael : Contributions sur la classe Mission.
Contribuer
Les contributions sont les bienvenues ! Pour contribuer, veuillez suivre ces étapes :

Forker le projet
Créer une nouvelle branche (git checkout -b feature/NouvelleFonctionnalite)
Committer vos modifications (git commit -m 'Ajout d'une nouvelle fonctionnalité')
Pousser sur la branche (git push origin feature/NouvelleFonctionnalite)
Soumettre une Pull Request
Licence
Ce projet est sous licence MIT. Consultez le fichier LICENSE pour plus d'informations.

go
Copier le code

Enregistrez ce contenu dans un fichier nommé `README.md` pour le rendre compatible avec les plateformes
