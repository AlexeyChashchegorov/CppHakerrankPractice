BINARIES=AppleAndOrange BreakingTheRecords BirthdayChocolate

CCX=c++
CCX_FLAGS=-std=c++1y -I../../lib/include

all: $(BINARIES)

AppleAndOrange: AppleAndOrange.cpp
	${CCX} ${CCX_FLAGS} AppleAndOrange.cpp -o AppleAndOrange

BreakingTheRecords: BreakingTheRecords.cpp
	${CCX} ${CCX_FLAGS} BreakingTheRecords.cpp -o BreakingTheRecords

BirthdayChocolate: BirthdayChocolate.cpp
	${CCX} ${CCX_FLAGS} BirthdayChocolate.cpp -o BirthdayChocolate

clean:
	rm $(BINARIES)
