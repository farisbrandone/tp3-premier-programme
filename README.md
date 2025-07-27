# TP3 - Premier programme en C sous Linux

Ce projet démontre l'installation des outils de développement, la création d'un programme C simple, sa gestion avec Git/GitHub et la compilation via Makefile.

## 📋 Prérequis
- Système Linux (Debian/Ubuntu)
- Accès terminal avec droits `sudo`

## 🛠️ Installation

### 1. Installation de Git
```bash
sudo apt-get update
sudo apt-get install git-all
git --version
```

### 2. Installation de Code::Blocks (optionnel)
```bash
tar -xvf codeblocks_25.03_amd64_debian12.tar.xz # Décompression
sudo dpkg -i ./*.deb                  # Installation
sudo apt install -f                   # Résolution des dépendances
codeblocks --version                  # Vérification
```

## 🚀 Configuration du projet

### Structure des dossiers
```bash
mkdir -p training-linux/TP3-Premier-programme
cd training-linux/TP3-Premier-programme
```

### Programme C (`main.c`)
```c
#include <stdlib.h>
#include <stdio.h>

/**
 * this application subtracts the first 11 number from 0 to 10
 * and display result
 */


 /**
 * declaration of subtracts function
 * this function evaluate the successive subtraction of n value with initial value equal 0
 *  exemple: for three first number, the result return = 0-1-3=-4
 * @param latest_value represent the latest number to subtracts
 * @return the result of successive subtraction  of i+1 number
 * @warning the value 0=< latest_value
 */
 int subtracts(int latest_value);

int main(){
   //the  number of value we subtracts
   int number_of_value=11;
   printf("la soustraction de tous les %d entiers  du premier au dernier est egale à %d \n", number_of_value, subtracts(number_of_value-1));

   return EXIT_SUCCESS;

}


//definition of subtracts function
int subtracts(int latest_value){
 //initial value of result
int result=0;

 //successive subtraction loop
 for (int k=0; k<= latest_value; k++){
    result-=k;

 }
 return result;
}
```

## 🔧 Compilation avec Makefile

### Fichier `Makefile`
```makefile
CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = tp3_programme
SRCS = main.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)

re: clean all
```

### Commandes
```bash
make        # Compile
./tp3_programme  # Exécute
make clean  # Nettoie
make re     # Recompile
```

## 📦 Gestion avec Git/GitHub

### Initialisation
```bash
git init
git config --global user.email "Vous@exemple.com"
git config --global user.name "Votre Nom"
```

### Connexion SSH
```bash
ssh-keygen -t ed25519 -C "farisbrandone@yahoo.com"
cat ~/.ssh/id_rsa.pub  # À copier dans GitHub > Settings > SSH Keys
```

### Premier push
```bash
git add .
git commit -m "Initial commit"
git branch -M main
git remote add origin git@github.com:farisbrandone/tp3-premier-programme.git
git push -u origin main
```

### Création d'une branche
```bash
git checkout -b second-branch
git push -u origin second-branch
```

## 📸 Captures d'écran

## Code
- ![Main Branch](./image/capture/code-second.png)

## Result
- ![Second Branch](./image/capture/result-second.png)

## 📝 Notes
- Le Makefile génère un exécutable `tp3_programme`
- Options de compilation :
  - `-Wall -Wextra` : Active tous les avertissements
  - `-g` : Génère des symboles de débogage

---

