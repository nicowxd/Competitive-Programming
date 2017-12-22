# Autor: CarlosJunior<carloserratojr@gmail.com>
# Nome: Média 1
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1005

E = None
D = None
C = None
B = None
A = None

def read_numeric():
  try:
    # read for Python 2.x
    return float(raw_input())
  except NameError:
    # read for Python 3.x
    return float(input())


A = read_numeric()
B = read_numeric()
C = A * 3.5
D = B * 7.5
E = C + D
E = E / 11
print(str("MEDIA = ") + str("{:0.5f}".format(E)))

