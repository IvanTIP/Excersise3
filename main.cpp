#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path path("D:\\SkillboxProjects\\modernCpp\\ex2");
    std::string extension = ".txt";
    auto recursiveGetFileNamesByExtension = [](const std::filesystem::path& path, const std::string& extension) {
        for(auto& tmp: std::filesystem::recursive_directory_iterator(path)) {
            if (!tmp.path().extension().compare(extension)) {
                    std::cout << tmp.path() << '\n';
            }
        }
    };
    recursiveGetFileNamesByExtension(path, extension);
    return 0;
}
