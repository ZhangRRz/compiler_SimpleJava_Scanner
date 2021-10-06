FILE_lex=	B073040025.l
PROG_lex=	lex.yy.c
OUTPUT_demo = demo
all:
	flex $(FILE_lex)
	g++ $(PROG_lex) -L./ -l table -lfl -static -o $(OUTPUT_demo)
test:
	./$(OUTPUT_demo) < test.java
	@echo
	./$(OUTPUT_demo) < test0.java
	@echo
	./$(OUTPUT_demo) < test1.java
	@echo
	./$(OUTPUT_demo) < test2.java
	@echo
	./$(OUTPUT_demo) < test3.java

clean:
	rm demo $(PROG_lex)
