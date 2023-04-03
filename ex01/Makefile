# 実行可能ファイル名を保持する変数
NAME = executable

# コンパイラとコンパイルオプションを設定する変数
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# ソースコードのあるディレクトリを指定する変数
SRC_DIR = src

# オブジェクトファイルの出力先ディレクトリを指定する変数
OBJ_DIR = OBJ

# ヘッダーファイルのあるディレクトリを指定する変数
INCLUDE_DIR = include

# ソースファイルの一覧を取得する
SRCS := $(shell find $(SRC_DIR) -name '*.cpp')

# オブジェクトファイルの一覧を生成する
OBJS := $(SRCS:%=$(OBJ_DIR)/%.o)

# .dファイルの一覧を生成する
DEPS := $(OBJS:.o=.d)

# 実行可能ファイルを作成するルール
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# オブジェクトファイルを作成するルール
$(OBJ_DIR)/%.cpp.o: %.cpp | $(OBJ_DIR)
	@echo "\033[32mCompiling $<...\033[0m"
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -MMD -MP -c $< -o $@

# OBJディレクトリを作成する
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# .dファイルをインクルードする
-include $(DEPS)

# サブディレクトリ内のMakefileを呼び出すルール
.PHONY: subdirs $(SUBDIRS)
subdirs: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@

# SRCディレクトリ内にあるMakefileを呼び出す
-include $(shell find $(SRC_DIR) -name Makefile)

# コンパイルするディレクトリに応じて表示を色付ける
COLOR_RED = \033[0;31m
COLOR_GREEN = \033[0;32m
COLOR_YELLOW = \033[0;33m
COLOR_RESET = \033[0m
print-subdir:
	@echo "$(COLOR_YELLOW)Compiling in $(CURDIR:$(ROOT)%=%)$(COLOR_RESET)"

# コンパイル対象のディレクトリごとにmakeを実行するルール
.PHONY: all
all: subdirs $(NAME)
	@echo "$(COLOR_GREEN)Compilation completed successfully!$(COLOR_RESET)"