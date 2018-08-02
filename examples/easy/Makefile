SOURCES=${wildcard *.cpp}
BINARIES=$(SOURCES:%.cpp=%)

CCX=c++
CCX_FLAGS=-std=c++1y -I../../lib/include

all: $(BINARIES)

$(BINARIES): 
	${CCX} ${CCX_FLAGS} $@.cpp -o $@

check:
	$(MAKE) -C check

clean:
	rm $(BINARIES)
