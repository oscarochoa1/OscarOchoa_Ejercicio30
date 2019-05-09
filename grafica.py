import numpy as np
import matplotlib.pyplot as plt


data = np.loadtxt("calculo.dat")
plt.plot(data)
plt.savefig("imagen.png")