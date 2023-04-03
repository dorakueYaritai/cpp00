# 実行可能ファイル名
NAME = megaphone

# ソースファイルを検索するディレクトリ
SRC_DIR = src

# オブジェクトファイルを生成するディレクトリ
OBJ_DIR = obj

# ソースファイルの拡張子
SRC_EXT = cpp

# オブジェクトファイルの拡張子
OBJ_EXT = o

# C++コンパイラ
CC = c++

# コンパイルオプション
CFLAGS = -Wall -Wextra -Werror -std=c++98

# ソースファイルのリスト
SRCS = $(shell find $(SRC_DIR) -type f -name '*.$(SRC_EXT)')

# オブジェクトファイルのリスト
OBJS = $(patsubst $(SRC_DIR)/%.$(SRC_EXT), $(OBJ_DIR)/%.$(OBJ_EXT), $(SRCS))

# 依存ファイルのリスト
DEPS = $(OBJS:.o=.d)

# ターゲット：実行可能ファイル
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# オブジェクトファイルを生成するルール
$(OBJ_DIR)/%.$(OBJ_EXT): $(SRC_DIR)/%.$(SRC_EXT) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

# 依存ファイルをインクルードする
-include $(DEPS)

# objディレクトリが存在しない場合は作成する
$(OBJ_DIR):
	mkdir -p $@

# make cleanで生成物を削除する
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

.PHONY: clean