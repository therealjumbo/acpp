#include <iostream>

const char* q1 = "#include <iostream>\n\nint main() {\n    std::cout << \"Hello, world!\" << std::endl;\n    return 0;\n}";

int main()
{
    std::cout << q1 << std::endl;
    return 0;
}
