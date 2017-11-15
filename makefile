homework4.out: homework4.cpp
	g++ homework4.cpp -o homework4.out

clean:
	rm *.out


run: homework4.out
	./homework4.out
