plot.png: calculo.dat grafica.py
	python grafica.py

%.dat : a.out
	./a.out 

a.out: archivo.cpp
	g++ archivo.cpp

clean:
	rm -rf a.out calculo.dat grafica.png *~