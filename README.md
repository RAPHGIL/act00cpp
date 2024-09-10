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
