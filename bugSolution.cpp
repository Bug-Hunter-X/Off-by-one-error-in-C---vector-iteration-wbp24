std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) { //Corrected: loop condition now uses '<'
    std::cout << vec[i] << " ";
}
std::cout << std::endl;