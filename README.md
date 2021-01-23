# Projet Systèmes temps réel par Ali Marzouk & Hazem Ben Hassine
# Encadré par Madame Olfa Mosbahi
## Objectif du travail 
Ce projet consiste à gérer les lignes de metro d'un réseau sous terrain sous deux contraintes differentes.
Dans le premier dossier TP1 nous avons traité le cas de 3 métros et 6 stations sous les contraintes suivantes:

1. Plusieurs Métros peuvent partir simultanément de A
2. Plusieurs Métros peuvent partir simultanément de F
3. Plusieurs Métros peuvent partir simultanément de E
4. A un instant donné, chaque segment de ligne de Métro (segments AB, BC, CD, BF et EC) ne peut être utilisé que par un Métro au plus.
5. Chaque Métro prend 6mn pour occuper un segment

Dans le deuxième dossier TP2 nous avons traité le cas de 5 Bleue, Rouge, Marron, Verte et Noire.
Comme le montre le schema suivant:

![Lignes de métros](https://github.com/AliMarzouk/posix_metro_problem/blob/master/img/lignes%20de%20m%C3%A9tro.png)

## Exclusion Mutuelle dans la première partie 
### Sans Mutex 

Si on test notre code sans mutex nous allons obtenir un resultat comme ceci:

![sans mutex](https://github.com/AliMarzouk/posix_metro_problem/blob/master/img/partie%201%20sans%20mutex.png)

on remarque que le segment est occupé par deux métros en même temps ce qui n'est pas conforme aux contraintes du problème.


### Avec Mutex
 
Cette fois on ajoute un mutex pour chaque segment en utilisant `pthread_mutex_t` 

![avec mutex](https://github.com/AliMarzouk/posix_metro_problem/blob/master/img/partie%201%20avec%20mutex.png)

## Exclusion Mutuelle dans la deuxième partie 

L'une des executions du code donne le résultat suivant:

![avec mutex](https://github.com/AliMarzouk/posix_metro_problem/blob/master/img/partie%202%20avec%20mutex.png)

Nous remarquons que bien que les metros 0 et 1 de la ligne 1 on été lancés simultanément, le métro 1 ne sort qu'après que le métro 0 n'ai quitté le segment AP.


## Conclusion

Dans ce TP nous avons pu implémenter un cas presque réel de gestion de métro grâce à POSIX une bibliothéque qui permet la gestion des système temps réel avec toute robustesse.


