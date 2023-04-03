#include <iostream>
#include <cctype>

int main(int argc, char **argv) {
    if (argc > 1) {  // コマンドライン引数がある場合
        for (int i = 1; i < argc; i++) {
            for (char *p = argv[i]; *p; p++) {
                std::cout << (char)toupper(*p);  // 大文字に変換して出力
            }
        }
        std::cout << std::endl;
    } else {  // コマンドライン引数がない場合
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}