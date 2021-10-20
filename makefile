compile:
	g++ Card.cpp DeckOfCards.cpp driver.cpp -c
	g++ Card.o DeckOfCards.o driver.o -o driver.out

run:
	./driver.out

clean:
	rm *.o
	rm *.out