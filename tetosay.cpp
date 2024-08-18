const char* teto = R"(⠀⠀ \⠀⠀⠀⠀⠀⣤⢦⡤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀  \⠀⠀⢀⡾⠁⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀  \⠀⢸⡀⠈⣇⢀⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀   ⢘⣷⣄⣙⡏⠁⠀⠀⢬⣉⠙⠶⣄⣀⣀⣀⣠⣤⣤⡄⠀⠀⠀
⠀⠀⠀⠀⠀⢀⣼⠿⠟⠉⠉⠀⠀⠀⠀⠀⠉⠙⠛⢿⠉⠉⠁⠀⠀⢸⡇⠀⠀⠀
⠀⠀⠀⣀⣶⡿⠁⠀⠀⠀⠀⡄⠀⢰⣆⠀⠀⠀⠀⠘⣇⠀⠀⠀⢀⣸⡇⠀⠀⠀
⢴⠞⠛⠉⢹⡄⢰⡆⠀⠀⢸⢿⡆⠸⡟⣧⠀⠀⠀⠀⢹⡤⠶⠛⠛⣿⡅⠀⠀⠀
⠸⣇⠀⠀⠸⡇⢸⠀⠀⣶⣿⠤⠿⣆⣿⠙⣳⣄⠀⠀⠈⣧⠀⠀⣺⣽⠇⠀⠀⠀
⠀⠙⣶⣶⠿⡇⣾⡇⠀⣿⣿⣶⡄⠙⢿⡄⠏⠻⣷⣄⠀⢻⡶⢿⣿⠿⠂⠀⠀⠀
⠀⠀⠹⡆⠀⣿⠋⢷⡀⣿⡟⠇⠉⠀⠀⠁⠀⠀⢻⡼⣿⠿⠷⣾⣅⡀⠀⠀⠀⠀
⠀⠀⠀⠹⣾⣷⡶⠾⢷⣸⣷⡀⠀⠀⣆⣤⣴⣤⣾⡿⣏⣀⠀⢻⡿⠁⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢹⣧⣄⣤⠿⣿⣿⣿⢶⣶⣾⣯⣿⢿⠁⣸⠏⠙⠛⠶⣄⡀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢠⣾⣿⠷⠈⢁⣿⣄⣻⣿⣹⣿⣼⣸⣧⠀⠀⠀⠀⢈⣷⠀⠀⠀
⠀⠀⠀⠀⣠⣶⠟⠋⠈⢳⣤⣾⡥⢽⡏⣿⠉⣸⡿⢯⣿⢷⣼⠃⠀⢸⡇⠀⠀⠀
⠀⠀⠀⠀⠻⣏⠀⠀⠀⣾⠁⢻⡟⠋⣿⣿⠀⣿⣀⣤⣿⣼⠛⠇⢀⡿⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠘⣇⠀⠀⠈⢷⣿⠟⠛⣻⡟⢀⡟⠄⢀⣿⡇⠀⠀⢸⡇⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢀⣸⣧⠀⠀⠀⣿⠆⢰⣿⢢⣼⠃⠀⣾⢿⡀⠀⠀⣼⣿⣷⢲⣦⡄
⠀⠀⠀⠐⣏⢻⣭⣿⡇⠀⣀⡿⠀⢸⣧⡾⣿⡀⠀⢡⣾⠻⢿⣴⣿⣿⣣⣾⠿⠀
⠀⠀⠀⠀⠹⣄⠻⠿⣣⣴⠿⠶⠶⡿⠉⣇⠈⢳⣤⠿⣿⣶⡟⠹⣿⠛⠋⠀⠀⠀
⠀⠀⠀⠀⠀⠹⢷⣾⣿⡟⠛⠶⢼⣇⣀⣿⣠⡴⢿⡖⠛⢯⣙⡾⠉⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠈⣿⣿⠷⠶⢤⣼⣇⣠⣽⣇⣠⣤⣷⡴⠞⢿⡄⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣿⡆⠀⠀⠀⠉⠙⣷⠈⢷⣀⣤⠾⣶⣶⣾⣿⡄⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠘⣿⡤⡴⠒⣛⣛⣿⣄⣈⣻⡾⢋⠉⠀⠀⢹⣿⠀⠀⠀⠀⠀
)";

#include <string_view>
#include <algorithm>
#include <iostream>
#include <string>

constexpr size_t max_internal_line_length = 40ULL;

/**
 * @brief Return a new string with newlines inserted at most every `max_length`, unless a word
 * is beyond the limit, in which case the newline is inserted before the last word.
 * 
 * @todo Write better docs
 */
auto truncate_string_with_linebreaks(std::string str, size_t max_length) -> std::string {
    size_t linecol_idx = 0;
    for (size_t i = 0; i < str.length(); ++i) {
        if (linecol_idx >= max_length) {
            for (size_t j = i; j > 0; --j) {
                if (str.at(j) == ' ') {
                    // I'm sorry Linus
                    str.at(j) = '\n';
                    break;
                }
            }
            linecol_idx = 0;
        }
        ++linecol_idx;
    }

    return str;
}

/**
 * @brief Returns the longest substring terminated by a '\n'.
 */
auto max_unbroken_length(std::string str) -> size_t {
    size_t max_character_count = 0ULL;
    size_t character_count = 0ULL;
    for (auto c : str) {
        if (c == '\n') {
            max_character_count = std::max(max_character_count, character_count);
            character_count = 0;
        } else {
            ++character_count;
        }
    }

    if (max_character_count == 0) max_character_count = str.length();

    return max_character_count;
}

auto write_balloon(std::string output_text) -> void {
    size_t len = output_text.length();
    len += 2; // padding

    output_text = truncate_string_with_linebreaks(output_text, max_internal_line_length);
    size_t max_line_len = max_unbroken_length(output_text);

    // I didnt feel like compiling with C++17 so you dont get count_if, sorry!
    size_t line_count = 1ULL;
    for (auto c : output_text)
        if (c == '\n')
            ++line_count;

    std::cout << ' ';
    for (size_t i = 0; i < max_line_len + 2; ++i) {
        std::cout << '_';
    }
    std::cout << '\n';

    size_t line = 0;
    for (size_t i = 0ULL; i < output_text.length(); ++i) {
        switch (line_count) {
        case 1:
            std::cout << "< ";
            break;
        default:
            if (line == 0) std::cout << "/ ";
            else if (line == line_count - 1) std::cout << "\\ ";
            else std::cout << "| ";
        }

        size_t cidx = i;
        size_t col = 0;
        for (; cidx < output_text.length() && output_text.at(cidx) != '\n'; ++cidx) {
            std::cout << output_text.at(cidx);
            ++col;
        }
        while (col < max_line_len) {
            std::cout << ' ';
            ++col;
        }
        i = cidx;

        switch (line_count) {
        case 1:
            std::cout << " >\n";
            break;
        default:
            if (line == 0) std::cout << " \\\n";
            else if (line == line_count - 1) std::cout << " /\n";
            else std::cout << " |\n";
        }

        ++line;
    }

    std::cout << ' ';
    for (size_t i = 0; i < max_line_len + 2; ++i) {
        std::cout << '-';
    }
    std::cout << '\n';
}

auto join_args(const char** c_string_arr, int arrsize) -> std::string {
    std::string str;
    for (int i = 0; i < arrsize; ++i) {
        str = str.append(c_string_arr[i]).append(" ");
    }
    return str;
}

int main(int argc, const char** argv) {
    // TODO: for now just get all the arguments and concat them we will do args later CHANGE THIS

    if (argc == 1 /* Only argument is program path */) {
        // TODO add more later with random pool
        write_balloon("I like french bread! It goes good with margarine!");
    } else {
        auto text = join_args(argv + 1, argc - 1);
        write_balloon(text);
    }

    std::cout << teto << '\n';
}