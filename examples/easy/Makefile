BINARIES=AppleAndOrange BreakingTheRecords BirthdayChocolate DivisibleSumPairs

CCX=c++
CCX_FLAGS=-std=c++1y -I../../lib/include

all: $(BINARIES)

AppleAndOrange: AppleAndOrange.cpp
	${CCX} ${CCX_FLAGS} AppleAndOrange.cpp -o AppleAndOrange

BreakingTheRecords: BreakingTheRecords.cpp
	${CCX} ${CCX_FLAGS} BreakingTheRecords.cpp -o BreakingTheRecords

BirthdayChocolate: BirthdayChocolate.cpp
	${CCX} ${CCX_FLAGS} BirthdayChocolate.cpp -o BirthdayChocolate

DivisibleSumPairs: DivisibleSumPairs.cpp
	${CCX} ${CCX_FLAGS} DivisibleSumPairs.cpp -o DivisibleSumPairs

clean:
	rm $(BINARIES)
