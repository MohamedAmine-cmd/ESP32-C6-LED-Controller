# ESP32-C6 LED Controller

## Description  
Ce projet permet de contrôler la LED intégrée de l’ESP32-C6 à distance via une interface web simple.  
Connecte-toi au même réseau Wi-Fi que l’ESP32, puis commande l’allumage ou l’extinction de la LED depuis ton smartphone ou ordinateur.

## Matériel nécessaire  
- ESP32-C6  
- Câble USB pour programmer l’ESP32

## Fonctionnalités  
- Serveur web embarqué sur l’ESP32-C6  
- Interface web responsive avec boutons ON/OFF  
- Affichage de l’état actuel de la LED

## Installation et utilisation  
1. Modifier dans le code le SSID et le mot de passe Wi-Fi pour correspondre à ton réseau.  
2. Programmer l’ESP32-C6 avec l’IDE Arduino (ou autre IDE compatible).  
3. Ouvrir le moniteur série pour récupérer l’adresse IP de l’ESP32 une fois connecté.  
4. Depuis un navigateur web (smartphone ou ordinateur) connecté au même réseau Wi-Fi, accéder à cette adresse IP.  
5. Utiliser les boutons pour allumer ou éteindre la LED intégrée.

## Exemple de connexion  
Aucune connexion matérielle supplémentaire n’est nécessaire, la LED intégrée est contrôlée directement par le microcontrôleur.

---
