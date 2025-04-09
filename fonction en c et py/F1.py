import math

def surface_carre(cote):
    return cote ** 2

def perimeter_carre(cote):
    return 4 * cote

def surface_rectangle(longueur, largeur):
    return longueur * largeur

def perimeter_rectangle(longueur, largeur):
    return 2 * (longueur + largeur)

def surface_cercle(rayon):
    return math.pi * rayon ** 2

def perimeter_cercle(rayon):
    return 2 * math.pi * rayon

def surface_sphere(rayon):
    return 4 * math.pi * rayon ** 2

def perimeter_sphere(rayon):
    return 2 * math.pi * rayon

while True:
    print ("Entrez 1 pour calculer la surface d'un carré")
    print("Entrez 2 pour calculer le périmètre d'un carré")
    print("Entrez 3 pour calculer la surface d'un rectangle")
    print("Entrez 4 pour calculer le périmètre d'un rectangle")
    print("Entrez 5 pour calculer la surface d'un cercle")
    print("Entrez 6 pour calculer le périmètre d'un cercle")
    print("Entrez 7 pour calculer la surface d'une sphère")
    print("Entrez 8 pour calculer le périmètre d'une sphère")
    print("Entrez 0 pour quitter le programme")

    choix = 0
    try:
        choix = int(input("Votre choix: "))
    except ValueError as e:
        print("Saisie invalide")
        continue

    if choix == 1:
        cote = float(input("Entrez la valeur du côté(en m):"))
        print(f"La surface est: {surface_carre(cote)} m²")

    elif choix == 2:
        cote = float(input("Entrez la valeur du côté(en m):"))
        print(f"Le périmètre est: {perimeter_carre(cote)} m")

    elif choix == 3:
        longueur = float(input("Entrez la longueur(en m):"))
        largeur = float(input("Entrez la largeur(en m):"))
        print(f"La surface est: {surface_rectangle(longueur, largeur)} m²")

    elif choix == 4:
        longueur = float(input("Entrez la longueur(en m):"))
        largeur = float(input("Entrez la largeur(en m):"))
        print(f"Le périmètre est: {perimeter_rectangle(longueur, largeur)} m")

    elif choix == 5:
        rayon = float(input("Entrez le rayon(en m):"))
        print(f"La surface est: {surface_cercle(rayon)} m²")

    elif choix == 6:
        rayon = float(input("Entrez le rayon(en m):"))
        print(f"Le périmètre est: {perimeter_cercle(rayon)} m")

    elif choix == 7:
        rayon = float(input("Entrez le rayon(en m):"))
        print(f"La surface est: {surface_sphere(rayon)} m²")

    elif choix == 8:
        rayon = float(input("Entrez le rayon(en m):"))
        print(f"Le périmètre est: {perimeter_sphere(rayon)} m")

    elif choix == 0:
        print("Aurevoir!")
        break

    else:
        print("Choix invalide, veuillez réessayer.")

