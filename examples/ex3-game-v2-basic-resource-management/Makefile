CCC = g++
CFLAGS = -I../../include -L../../lib -std=c++11 -lsfml-system -lsfml-window -lsfml-graphics -lsfml-audio -lzeltalib

ex3-game-v2-basic-resource-management : main.o
	$(CCC) $< -o $@ -std=c++11 -L../../lib -lsfml-system -lsfml-window -lsfml-graphics -lsfml-audio -lzeltalib
	
main.o : main.cpp
	$(CCC) -c -ISFML -I../../include $< -std=c++11
