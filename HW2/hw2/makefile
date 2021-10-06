all:	clean y.tab.c lex.yy.c
	gcc lex.yy.c y.tab.c -ly -lfl -o calc

y.tab.c:
	bison -y -d B073040025.y

lex.yy.c:
	flex B073040025.l
test:
	./calc < test1.java
	@echo
	./calc < test2.java
	@echo
	./calc < test3.java
	@echo
	./calc < test4.java
	@echo
	./calc < test5.java
	@echo
	./calc < test6.java

clean:
	rm -f calc lex.yy.c y.tab.c y.tab.h
