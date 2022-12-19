# Little-Penguin
Linux Kernel Development

## KERNEL
```
 * Il constitue le cœur du système qui exploite un ordinateur.
 * Il établit la communication entre la partie matérielle et la partie logicielle de l'appareil.
 * C'est ce qui permet à l'utilisateur d'interagir avec la machine.
    * la gestion des divers logiciels (tâches) d'une machine (lancement des programmes, ordonnancement…) ;
    * la gestion du matériel (mémoire, processeur, périphérique, stockage…)
```

## MODULES DU KERNEL
```
* Ces Sont des morceaux de code qui peuvent être chargés et déchargés dans le noyau à la demande
* Ils étendent les fonctionnalités du noyau sans qu'il soit nécessaire de redémarrer le système.

- Pour montrer quels modules du noyau sont actuellement chargés :
            lsmod
- Pour afficher des informations sur un module :
            modinfo nom_du_module
```

## INSMOD
```
insmod charge un module dans le noyau en cours d'utilisation
```

## RMMOD
```
rmmod décharge de la mémoire les modules
```

## LINUX-NEXT
```
L' arborescence linux-next est la zone de stockage des correctifs destinés
à la prochaine fenêtre de fusion du noyau,
si vous faites du développement de noyau à la pointe de la technologie,
vous voudrez peut-être travailler à partir de cet arbre plutôt que de l'arbre principal de Linus Torvalds.

Linux-next est cependant une base quelque peu étrange sur laquelle essayer de se développer.
Il est reconstruit chaque jour à partir de plus de 100 arborescences de sous-systèmes,
dont chacun peut, lui-même, changer d'un jour à l'autre.
Linux-next est donc une cible mouvante, tout comme la ligne principale. Mais, contrairement à la ligne principale,
linux-next n'a pas d'historique cohérent ou cohérent.
L'arborescence linux-next de chaque jour est une toute nouvelle création avec une histoire unique - et transitoire.
```

## CHARACTER DEVICE
```
- Un périphérique de caractères ('c') est un périphérique avec lequel 
le pilote communique en envoyant et en recevant des caractères uniques (octets, octets).
  ---> Exemples de périphériques de caractères : ports série, ports parallèles, cartes sons.
  
- Un dispositif de bloc ('b') est un dispositif avec lequel le conducteur communique en envoyant
des blocs entiers de données.
  ---> Exemples de Block Devices : disques durs, caméras USB, Disk-On-Key.
```

## Pilote
```
Un pilote informatique, souvent abrégé en pilote, est un programme informatique
destiné à permettre à un autre programme d'interagir avec un périphérique.
En général, chaque périphérique a son propre pilote.
```

## périphérique
```
  Un périphérique informatique est un terme générique donné aux composants de matériel informatique
  assurant les communications entre l'unité centrale de l'ordinateur et le monde extérieur.

  On distingue trois types de périphérique :

  les périphériques d'entrée permettent d'entrer l'information dans l'ordinateur ;
  les périphériques de sortie permettent de sortir l'information de l'ordinateur ;
  les périphériques d'entrée-sortie permettent des communications bidirectionnelles.
```

# Sources 
* linux-next: https://www.kernel.org/doc/man-pages/linux-next.html
* characlter device :https://askubuntu.com/questions/1021394/what-is-a-character-device
* peripherique : https://www.techno-science.net/definition/8130.html
* Misc Device Driver : https://embetronicx.com/tutorials/linux/device-drivers/misc-device-driver/#Misc_Device_Driver
