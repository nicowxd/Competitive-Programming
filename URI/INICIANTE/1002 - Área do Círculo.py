# Autor: CarlosJunior<carloserratojr@gmail.com>
# Nome: Área do Círculo
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1002

Raio = None
X = None

def read_numeric():
  try:
    # read for Python 2.x
    return float(raw_input())
  except NameError:
    # read for Python 3.x
    return float(input())


X = read_numeric()
Raio = X * X
Raio = Raio * 3.14159
print(str("A=") + str("{:0.4f}".format(Raio)))

