SOURCES=\
	AppleAndOrange.cpp \
	BreakingTheRecords.cpp \
	BirthdayChocolate.cpp \
	DivisibleSumPairs.cpp

BINARIES=$(SOURCES:%.cpp=%)

CCX=c++
CCX_FLAGS=-std=c++1y -I../../lib/include

all: $(BINARIES)

$(BINARIES): 
	${CCX} ${CCX_FLAGS} $@.cpp -o $@

check: $(BINARIES)
	make -C check

clean:
	rm $(BINARIES)
