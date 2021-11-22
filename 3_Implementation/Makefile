PROJ_NAME = M1_Application_OnlineBanking
SRC = function.c test_function.c unity.c

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

build:
	gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run: build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))

coverage: $(SRC)
	gcc $(INC) -fprofile-arcs -ftest-coverage $^ -o test.exe	
		./test.exe


