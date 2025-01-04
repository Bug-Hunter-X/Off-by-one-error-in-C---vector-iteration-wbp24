std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i <= vec.size(); ++i) { //Error: accessing vec[vec.size()] which is out of bounds
    std::cout << vec[i] << " ";
}
std::cout << std::endl;