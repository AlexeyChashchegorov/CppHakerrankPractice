TESTS=AppleAndOrange BreakingTheRecords

define test_for
	cat $(1).input | ../$(1) > $(1).output
	diff $(1).output $(1).expected
	#rm $(1).output
endef

all: $(TESTS)

AppleAndOrange:
	$(call test_for,AppleAndOrange)

BreakingTheRecords:
	$(call test_for,BreakingTheRecords)
