def dec_to_bin(nombre): # paramètre de type INT
  reponse = "" # initialisation de ma varaible de type STRING
  while nombre > 0:   # tant que nombre est > 0 alors on divise par 2 
    reste = nombre % 2 # nombre modulo 2
    nombre = nombre // 2  # le nombre divisé par 2
    reponse = str(reste) + reponse # à ne pas oublier que l'addition de STRING est non commutatif
  return reponse

print(dec_to_bin(5))


def bin_to_dec(binaire):
  reponse = 0
  for i in range(len(binaire) - 1, -1, -1): pour i allant de la longueur de binaire - 1 à 0
    reponse += int(binaire[i]) * (2 ** i)
  return reponse


print(bin_to_dec('101'))


def dec_to_hex(nombre): # même procédé que dec_to_bin()
  base16 = "0123456789ABCDEF" # initialisation de ma base car python est en decimal et non hexadecimal
  reponse = "" 
  while nombre > 0: # a noter que l'ordre des deux operation est non commutatif (je parle du sens entre cette ligne et celle d'après) car nombre est modifié 
    nombre = nombre // 16
    reponse = base16[reste] + reponse # même logique que pour le premier exos
  return reponse

print(dec_to_hex(5))


def hex_to_dec(hexadecimal): # hexadecimal de type STRING
  base16 = "0123456789ABCDEF"
  reponse = 0
  for i in range(len(hexadecimal) - 1, -1, -1): # pour i allant de la longueur de hexadecimal à 0
    reponse += base16.index(hexadecimal[i]) * (16 ** i) je sais pas expliquer cette ligne à distance, si tu comprend pas demande a chat gpt
  return reponse

print(hex_to_dec("5"))


def bin_to_hex(binaire):
  return dec_to_hex(bin_to_dec(binaire)) # c'est équivalent à ce que tu as fait

print(bin_to_hex("101"))
  
