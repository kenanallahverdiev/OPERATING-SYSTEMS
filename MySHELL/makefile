#Abdul Qadir Faizy   - b161210553-2A \
Kenan Allakhverdiev - g151210557-1B \
Bahramullah Arayan  - g161210553-2A \
Bakhruz Valiev      - g151210555-1C \
Yalçın Mete         - g141210403-2A

all:derle run

derle:
	gcc -I ./include -o ./lib/input.o -c ./src/input.c
	gcc -I ./include -o ./lib/additionalInfo.o -c ./src/additionalInfo.c
	gcc -I ./include -o ./lib/promt.o -c ./src/promt.c
	gcc -I ./include -o ./lib/parse.o -c ./src/parse.c
	gcc -I ./include -o ./lib/process.o -c ./src/process.c
	gcc -I ./include -o ./bin/shell ./lib/additionalInfo.o ./lib/promt.o ./lib/input.o -L/usr/local/lib -I/usr/local/include -lreadline ./lib/parse.o ./lib/process.o ./src/main.c
	
run:
	./bin/shell
