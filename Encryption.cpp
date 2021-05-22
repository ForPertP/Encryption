string encryption(string s)
{
    std::string result{};
    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
    size_t L = s.size();

    size_t col = (size_t)std::ceil(std::sqrt(L));

    for (size_t i = 0; i < col; ++i)
    {
        for (size_t j = i; j < L; j += col)
        {
            result.append(1, s[j]);
        }

        result.append(1, ' ');
    }

    return result;
}
