SRC_DIR = ./src
INC_DIR = ./inc
OBJ_DIR = ./build/obj
BIN_DIR = ./build

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC_FILES))
DOC_FILES = ./Doxyfile

all: build_folders $(OBJ_FILES)
	@echo Building aplication
	@gcc $(OBJ_FILES) -o $(BIN_DIR)/app.out

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo Compiling source file $(notdir $(basename $<))
	@gcc -c $< -I$(INC_DIR) -o $@

.PHONY: doc
doc:
	@echo Building documentation to cese-ids-15co-tp5b
	@doxygen $(DOC_FILES)
###############################################################################
# Creation of output folders
build_folders: $(BIN_DIR) $(LIB_DIR) $(OBJ_DIR) $(DOC_DIR) $(DPN_DIR) $(RST_DIR)

$(OUT_DIR):
	@echo Creating output root folder
	@mkdir $(OUT_DIR)

$(BIN_DIR): $(OUT_DIR)
	@echo Creating output binaries folder
	@mkdir $(BIN_DIR)

$(OBJ_DIR): $(OUT_DIR)
	@echo Creating output objects folder
	@mkdir $(OBJ_DIR)

