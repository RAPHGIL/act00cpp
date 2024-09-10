# Présentation de Stage

## Description

**Présentation de Stage** est une application C++ qui permet de donner des informations sur une entreprise de stage et les missions qui y sont confiées. Ce projet fournit une structure de base pour décrire l'entreprise d'accueil, ses activités, ainsi que les tâches réalisées durant le stage.

Dans ce projet, l'entreprise décrite est **SBV** (Société Bretonne de Volailles), où l'auteur a travaillé au sein du service informatique. Les missions incluaient la configuration et le dépannage de postes pour les employés ainsi que le support client.

## Fonctionnalités

- **Classe `Entreprise` :**
  - Représente une entreprise avec des attributs tels que le nom de l'entreprise (`nomEntreprise`) et son lieu (`villeEntreprise`).
  - Constructeur par défaut et constructeur paramétré pour initialiser les objets.
  - Prise en charge de la copie et de l'affectation d'objets `Entreprise` avec un constructeur de copie et un opérateur d'affectation.
  - Accesseurs (getters) et mutateurs (setters) pour obtenir et modifier les attributs de l'entreprise (`getNomEntreprise`, `setNomEntreprise`, `getVilleEntreprise`, `setVilleEntreprise`).

- **Classe `Mission` :**
  - Représente les missions confiées pendant le stage, incluant le nombre de personnes impliquées (`nbPersonne`), la description de la mission (`descriptifMission`), et le nombre d'heures allouées par semaine (`nbHeure`).
  - Fournit des méthodes pour manipuler les détails de la mission, comme les accesseurs et les mutateurs (`getNbPersonne`, `setNbPersonne`, `getDescriptifMission`, `setDescriptifMission`, `getNbHeure`, `setNbHeure`).

## Installation

Pour compiler et exécuter ce projet, vous devez disposer d'un compilateur C++ (par exemple, `g++` pour GCC) et d'un environnement de développement C++ configuré sur votre machine.

### Étapes d'installation

1. **Cloner le dépôt :**
   ```bash
   git clone https://github.com/RAPHGIL/act00cpp.git
   cd act00cpp
Compiler le projet :

bash
Copier le code
g++ -o presentation-stage main.cpp Entreprise.cpp Mission.cpp
Exécuter le projet :

bash
Copier le code
./presentation-stage
Utilisation
L'exécution du programme permet de créer une entreprise, de modifier ses attributs, de tester la copie d'une entreprise, et d'affecter une entreprise à une autre. Voici un exemple de sortie attendue :

text
Copier le code
Entreprise initiale : SBV, Bignan
Entreprise après modification : SBV - Nouvelle, Nouveau Bignan
Entreprise copie : SBV - Nouvelle, Nouveau Bignan
Entreprise après affectation : SBV - Nouvelle, Nouveau Bignan
Destruction de l'entreprise SBV - Nouvelle située à Nouveau Bignan
Destruction de l'entreprise SBV - Nouvelle située à Nouveau Bignan
Destruction de l'entreprise SBV - Nouvelle située à Nouveau Bignan
Structure du Projet
main.cpp : Point d'entrée du programme qui crée et manipule des objets Entreprise.
Entreprise.h et Entreprise.cpp : Définition et implémentation de la classe Entreprise.
Mission.h et Mission.cpp : Définition et implémentation de la classe Mission.
Informations sur l'Entreprise
Nom : Société Bretonne de Volailles (SBV)
Lieu : Bignan, France
Service : Service Informatique
Missions :
Configuration et dépannage de postes pour les employés.
Support client pour les utilisateurs internes.
Auteur
Raphael : Développement et conception du projet.
